#include<iostream>
using namespace std;
 main()
{
	int mem[10],processes[10],n1,n2,allocation[10],flags[10];
	int i,j;
	for(i=0;i<10;i++){
	
	flags[i]=0;
        allocation[i]=-1;
        }
         cout<<"enter no. of memory back";
	cin>>n1;
	cout<<"enter the size of partition";
	for(i=0;i<n1;i++)
        cin>>mem[i];
	cout<<"enter no. of process back";
	cin>>n2;
	cout<<"enter the size of process partition";
	for(i=0;i<n2;i++)
	cin>>processes[i];
	for(i=0;i<n2;i++)
	for(j=0;j<n1;j++)
	if(flags[j]==0 && mem[j]>processes[i])
	{
		allocation[j]=i;
		flags[j]=1;
		break;
	}
	cout<<"\n partition size process no. size";
	{
		for(i=0;i<n1;i++)
	       {
	       cout<<"\n"<<i<<" "<<mem[i]<<" ";
	       if(flags[i]==1)
	       cout<<allocation[i]<<"  "<<processes[allocation[i]];
               else
               cout<<"-------";
	}
}
	
}
