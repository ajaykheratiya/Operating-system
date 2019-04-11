#include<iostream>
using namespace std;
main()
{
	int n,c=0,r=0;
	cout<<"enter the cylinder number:"<<endl;
	cin>>n;
	int a[n];
	cout<<"cylindet of number";
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	cout<<"enter current serving number"<<endl;
	cin>>a[c];
	cout<<"total cylinder"<<endl;
   int i=1;
	while(i<=n)
	{
	
	if(a[c]>a[i])
	r=r+a[c]-a[i];
	else
	r=r+a[i]-a[c];
	i++;
	c++;
	}
cout<<" "<<r<<endl;
}
