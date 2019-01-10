#include<bits/stdc++.h>
using namespace std;
main()
{
	int a;
    cout<<"Enter the no.of processes"<<endl;
    cin>>a;
    cout<<"Enter the bust time of processes"<<endl;
    int BT[a];
    for(int i=0;i<a;i++)
    {
	  cin>>BT[i];
    }
    sort(BT,BT+a);
    int WT[a];
    WT[0]=0;
    for(int i=1;i<a;i++)
    {  int c=0;
	  for(int j=i-1;j>=0;j--)
      {
       c=c+BT[j];
      }
      WT[i]=c;
    }
     int TAT[a];
     
	   for(int i=0;i<a;i++)
       {
	     TAT[i]=BT[i]+WT[i];
       }
        cout<<"__________BT__________"<<endl;
 	   for(int i=0;i<a;i++)
       {
	     cout<<BT[i]<<endl;
       }	 
        cout<<"_____________WT__________"<<endl;
        for(int i=0;i<a;i++)
       {
	     cout<<WT[i]<<endl;
       }
        cout<<"_____________TAT__________"<<endl;
        for(int i=0;i<a;i++)
       {
	     cout<<TAT[i]<<endl;
       }
}
