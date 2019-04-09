#include<iostream>
using namespace std;
#define max 10
 int main()
{
	int i,j,process,resource,execut,safe,ans,running[10],allocation[10][10],max_allocation[10][10],need_allocation[10][10],avaliable_allocation[10];
	cout<<"enter no. of processes"<<endl;
	cin>>process;
	cout<<"enter the no of resourcees"<<endl;
	cin>>resource;
    cout<<"enter  allocation matrix\n";
	for(i=0;i<process;i++)
	{
	for(j=0;j<resource;j++)
	{
     cin>>allocation[i][j];
	}
    }
   cout<<"\n max mateix is:"<<endl;
   for(i=0;i<process;i++)
   {
   for(j=0;j<resource;j++)
  	{
    cin>>max_allocation[i][j];
    }
    }
  cout<<"\n need matrix is:"<<endl;
  //for(i=0;i<process;i++)
 // {
  //	for(j=0;j<resource;j++)
  //	{
  //		cin>>need_allocation[i][j];
//	  }
  //}
  // need matrix is:
   //for(i=0;i<process;i++)
 // {
  //	for(j=0;j<resource;j++)
  //	{
  //		need_allocation[i][j]=max_allocation[i][j]-allocation[i][j];
//	  }
 // }

   cout<<"\n avali matirx is:"<<endl;
  for(i=0;i<resource;i++)
  {
  	cin>>avaliable_allocation[i];
  }
  int counter=5;
  while(counter>0)
  {
    
  	safe=0;
  	for(i=0;i<process;i++)
  	{
    if(running[i])
  		{
  			execut=1;
  			for(j=0;j<resource;j++)
  			{
  				if(max_allocation[i][j]-allocation[i][j]>avaliable_allocation[j])
  				{
  					execut=0;
  					break;
				  }
				  
				   if(execut)
  					{
  						running[i]=0;safe=1;
  						for(j=0;j<resource;j++)
  						avaliable_allocation[j]=allocation[i][j]+avaliable_allocation[j];
 					 }
 				counter--;	 
 				break;	 
			  }
		  }
		  if(ans=resource)
		  {
		  	for(i=0;i<resource;i++)
		  	avaliable_allocation[j]+=max_allocation[i][j];
		  	ans++;
		  	
		  }
		  cout<<"enter the avaliable allocation";
		  for(i=0;i<resource;i++)
		  cin>>avaliable_allocation[j];
	  }
	  
	  if(safe)
	  {
	  	cout<<"safe";
	  }

 
  }
}


