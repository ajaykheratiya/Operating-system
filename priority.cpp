#include<iostream>
using namespace std;
#define max 100
int main()
{
    int i,j,n,t,bt[max],wt[max],pr[max],tat[max],pos;
    float awt=0,atat=0;
    cout<<"enter the number of process"<<endl;
    cin>>n;
    cout<<"enter the burst time of the process"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>bt[i];
    }
    cout<<"enter the priority of the process"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>pr[i];
    }
    for(i=0;i<n;i++)
    {
        pos=i;
        for(j=i+1;j<n;j++)
        {
            if(pr[j]<pr[pos])
            {
                pos=j;
            }
        }
        t=pr[i];
        pr[i]=pr[pos];
        pr[pos]=t;

        t=bt[i];
        bt[i]=bt[pos];
        bt[pos]=t;
    }
    wt[0]=0;
    cout<<"process\tburst time\tpriorit\twaiting time\tturn arount time\n";
    for(i=0;i<n;i++)
    {
        wt[i]=0;
        tat[i]=0;
        for(j=0;j<i;j++)
        {
            wt[i]=wt[i]+bt[i];
        }
        tat[i]=wt[i]+bt[i];
        awt=awt+wt[i];
        atat=atat+tat[i];
        cout<<"\t"<< i+1 <<"\t"<< bt[i] <<"\t"<< pr[i] <<"\t"<< wt[i] <<"\t"<< tat[i] <<endl;
    }
    awt=awt/n;
    atat=atat/n;
    cout<<"avarage waiting time"<<awt<<endl;
    cout<<"avarage turn around time"<<atat<<endl;
}
