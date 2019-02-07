#include<iostream>
#define max 10
using namespace std;

int f=0;int e=5;int s=1; int a[max];
int wait(int s)
{
return(--s);	
}
int signal(int s)
{
	return(++s);
}
void produce()
{
	cout<<"enter the element\n"<<cout<<"f is "<<f<<"\n";
	cin>>a[f];
	cout<<"element are";
	for(int i=0;i<f;i++)
	cout<<a[i];
}
void consume()
{
  a[f]=0;
	cout<<"\nConsuming an item  "<<endl;
	cout<<"f is "<<f<<"\n"<<"E is "<<e<<"\n";
	cout<<"Remaining elements are\n";
	for(int i=0;i<f;i++)
	 cout<<a[i]<<"  ";
	cout<<endl;

}
void producer()
{
	
	e=wait(e);
	s=wait(s);
	producer();
	s=signal(s);
	f=signal(f);
}
void consumer()
{
	f=wait(f);
	s=wait(s);
	consumer();
	s=signal(s);
	e=signal(e);
}
main()
{
	while(1)
	{
		int option;
		cout<<"enter the choice\n 1.producer\n 2.consumer\n 3.exit\n";
		cin>>option;
		switch(option)
		{
		case 1: if((s=1 && f!=0))
		producer();
		else
		cout<<"buffer is full";
		break;
		case 2: if((s==1 && (f!=0)))
		consumer();
		else
		cout<<"buffer empty";
		break;
		case 3:
		exit(0);
		break;	
		}
	}
}
