#include<bits/stdc++.h>
#include<conio.h>
#define max 25
using namespace std;
main()
{
	int n,bt[max],tat[max],wt[max]; float avgtat=0,avgwt=0;
	
	cout<<"Enter no. of processes ";
	cin>>n;
	cout<<endl;
	
	cout<<"Enter Burst time or Execution time of processes ";
	for(int i=0;i<n;i++) cin>>bt[i];
	cout<<endl;
	
    sort(bt,bt+n);  
	
    tat[0]=bt[0];
    
 	for(int i=1;i<n;i++)
 	tat[i]=tat[i-1]+bt[i];
 	
	for(int i=0;i<n;i++)
	wt[i]=tat[i]-bt[i];
	
	for(int i=0;i<n;i++)
	avgtat+=tat[i];
	avgtat=avgtat/n;
	
	
	for(int i=0;i<n;i++)
	avgwt+=wt[i];
	avgwt=avgwt/n;
	
	cout<<"TAT is  WT is"<<endl;
	for(int i=0;i<n;i++) cout<<tat[i]<<"        "<<wt[i]<<"    "<<endl;
	cout<<endl;
	
	cout<<"Average TAT is ="<<avgtat<<endl;
	cout<<"Average WT is ="<<avgwt<<endl;
		
	
}
