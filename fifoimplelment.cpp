#include<iostream>
using namespace std;
#define max 100
int main()
{
    int n,i,j,a[100],no,frame[5],k,avail,count=0;
cout<<"enter the number of pages"<<endl;
cin>>n;
cout<<"enter the page number"<<endl;
for(i=1;i<=n;i++)
{
    cin>>a[i];
}
cout<<"enter the numbers of frames"<<endl;
cin>>no;
for(i=0;i<no;i++)
frame[i]=-1;
j=0;
cout<<"page frame\n";
for(i=1;i<=n;i++)
{
    avail=0;
    for(k=0;k<no;k++)
    if(frame[k]==a[i])
    avail=1;
    if(avail==0)
    {
        frame[j]=a[i];
        j=(j+1)%no;
        count++;
        for(k=0;k<no;k++)
        cout<<"   "<<frame[k];
    }

    cout<<("\n");
    cout<<"page result is\n"<<count;
    return 0;
}
}
