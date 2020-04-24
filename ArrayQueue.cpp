#include<iostream>
#include<cstdlib>
#include<conio.h>
using namespace std;

class Queue
{
	private:
		int *q;
		int Maxsize;
		int front;
		int rear;	
		
	public:
		Queue(int);
		int Isfull();
		int Isempty();
		void insert(int);
		int remove();
		void show();
};
Queue::Queue(int m)
{
	q=new int(m);
	Maxsize=m;
	front=-1;
	rear=0;
}
int Queue:: Isfull()
{
	if(rear==Maxsize-1)
		{	cout<<"\n Isfull\n";
			return 1;
		}
	return 0;
}
int Queue::Isempty()
{
	if (front+1==rear)
		{
			cout<<"\nEmpty\n";
			return 1;
		}
	return 0;
}
void Queue::insert(int m)
{
	if (!Isfull())
	{
		q[rear++]=m;
		cout<<"\nrear="<<rear;
	}
	else
		cout<<"\nQueue is full!\n";
}
int Queue::remove()
{
	if(!Isempty())
	{
		cout<<"\nfront="<<front;
		return q[++front];
		
	}
	else
	{
		cout<<"\nThe Queue is empty\n";
		return -1;
	}
}
void Queue::show()
{
	int ind=front+1;
	cout<<"\nThe current elements:\n";
	while(ind<rear)
		cout<<q[ind++]<<"\t";
}

int main()
{
	int m;
	cout<<"To terminate the program input 0\n";
	cout<<"Size of Queue:";
	cin>>m;
	class Queue Q(m);
	while (true)
	{
		int r=rand();
		if(r%2==0)
		{
			cout<<"\nInput a number to insert:\n";
			cin>>m;
			if(m==0) break;
			Q.insert(m);
			Q.show();		}
		else
		{
			if(!Q.Isempty())
				cout<<"\ndelete:"<<Q.remove();
		}
	}
	Q.show();	
}
