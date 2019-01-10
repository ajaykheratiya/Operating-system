#include<iostream>
using namespace std;
int main()
{    
  int pro; //process
  cout<<"Enter no. of processes\n\n";
  cin>>pro;
	int at[pro],wt[pro],et[pro],ct[pro],tat[pro];
	cout<<"Enter Arrival time \n\n";
	for(int i=0;i<pro;i++) cin>>at[i];
	cout<<"Enter Execution or burst time\n\n";
	for(int i=0;i<pro;i++) cin>>et[i];
	
	//Completion time
	ct[0]=et[0];
	
	for(int i=1;i<pro;i++) 
	{
		if(at[i]>ct[i-1])
		ct[i]=at[i]+et[i];
		else
		ct[i]=ct[i-1]+et[i];
	}
	
	//turn around time
		for(int i=0;i<pro;i++)
	tat[i]=ct[i]-at[i];
	
	//waiting time	
	for(int i=0;i<pro;i++)
	wt[i]=tat[i]-et[i];
	
	//display
	cout<<"complimation time    waiting time      turn around time\n";
	for(int i=0;i<pro;i++)
	cout<<ct[i]<<"                  "<<wt[i]<<"                       "<<tat[i]<<endl<<endl;	
}
