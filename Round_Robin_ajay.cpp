#include<iostream>
using namespace std;
#define max 10
main()
{
	int n,tat[max],wt[max],bt[max],rbt[max],quant=4,t;
	cout<<"Enter no. of processes";
	cin>>n;
	cout<<"Enter  burst time";
	for(int i=0;i<n;i++)
	{
		cin>>bt[i];
	rbt[i]= bt[i];
	}
	
	int done=1;
	
	while(1)
	{
		done=1;
		for(int i=0;i<=n-1;i++){
			if(rbt[i]>0)
			{
			   done=0;
			
			if(rbt[i]>quant)
			{
			    t=t+quant;
				rbt[i]=rbt[i]-quant;
			}
			else
			{
				t=t+rbt[i];
				rbt[i]=0;
				wt[i]=t-bt[i];
				tat[i]=t;
			}
		}
	}
	if(done==1){
	
	cout<<"Waiting time and turn around time is : "<<endl;
	for(int i=0;i<n;i++)
	{
	  cout<<"    "<<wt[i]<<"     "<<tat[i]<<endl;	
	}
	break;
}}
	
}
