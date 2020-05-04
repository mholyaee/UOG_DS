// Link Lists
#include<iostream>
using namespace std;

struct node
{
	int data;
	struct node* link;
};
class LinkList
{
	private:
		struct node* start;// refers to the first node of list
	public:
		LinkList();
		int IsEmpty();
		void insert_First(int);
		void insert_Last(int);
		void insert_after(struct node *,int d);
		struct node* search(int);
		void remove_First();
		void remove_Last();
		void remove_after(struct node *);
		void remove(int);//Your Homework!
		int ListSize();
		~LinkList();
		void show();
};
LinkList::LinkList()
{
	start=NULL;
}
int LinkList::IsEmpty()
{
	if(start==NULL)
	return 1;
	return 0;
}
void LinkList::insert_First(int d)
{
	struct node *temp=new (struct node);
	if(temp)
	{
		temp->data=d;
		temp->link=NULL;
		if (IsEmpty())
			start=temp;
		else
		{
			temp->link=start;
			start=temp;	
		}
	}
}
void LinkList::insert_Last(int d)
{
	struct node *temp=new (struct node);
	if(temp)
	{
	temp->data=d;
		temp->link=NULL;
		if (IsEmpty())
			start=temp;
		else
		{
			struct node *next;
			next=start;
			while(next->link)
			next=next->link;
			
			next->link=temp;	
		}
	}
}
struct node* LinkList::search(int d)
{
	if(!IsEmpty())
	{
		struct node *temp=start;
		while(temp)
		{
			if(temp->data==d)
			{
				return temp;
			}
			temp=temp->link;
		}
	}
	return NULL;
}
void LinkList::insert_after(struct node *p, int d)
{
	if (p)
	{
		struct node *q,*temp;
		q=p->link;
		temp=new (struct node);
		if(temp)
		{
			temp->data=d;
			p->link=temp;
			temp->link=q;
		}
	}
}
void LinkList::remove_First()
{
	if(!IsEmpty())
	{
		struct node *q;
		q=start->link;
		delete(start);
		start=q;
	}
	
}
void LinkList::remove_Last()
{
	if(!IsEmpty())
	{
		if(!start->link)
		{
			delete(start);
			start=NULL;
		}
		else
		{
		struct node *p,*q;
		p=start;
		q=p->link;
		while(q->link)
		{
			p=q;
			q=q->link;	
		}
		delete(q);
		p->link=NULL;
		}
	}
}
void LinkList::remove_after(struct node *p)
{
	struct node *q;
	if(p && p->link)
	{
		q=p->link;
		p=p->link->link;
		delete(q);
	}
}
int LinkList::ListSize()
{
	if(IsEmpty())
	return 0;
	int L=0;
	struct node *p=start;
	while(p)
	{
	L++;
	p=p->link;	
	}	
return L;
}

void LinkList::show()
{
	if(!IsEmpty())
	{
		struct node *p=start;
		cout<<"\n";
		while(p)
		{
			cout<<p->data<<"\t";
			p=p->link;
		}
	}
	else
	cout<<"List is Empty";
}
LinkList::~LinkList()
{
	if(!IsEmpty())
	{
		struct node *p=start,*q;
		while(p)
		{
			q=p->link;
			delete(p);
			p=q;
		}
	}	
}
int main()
{
	class LinkList L;
	struct node *p=NULL;
	int m,n,e,flag=0;
	cout<<"\n"<<1<<" :IsEmpty";
	cout<<"\n"<<2<<" :insert_First";
	cout<<"\n"<<3<<" :insert_Last";
	cout<<"\n"<<4<<" :search";
	cout<<"\n"<<5<<" :remove_First";
	cout<<"\n"<<6<<" :remove_Last";
	cout<<"\n"<<7<<" :ListSize";
	cout<<"\n"<<8<<" :show";
	cout<<"\n"<<9<<" :Exit";

	while(true)
	{
	cout<<"\nSelect:";
	cin>>m;
	switch(m)
	{
	case 1:
		e=L.IsEmpty();
		if (e==1)
		cout<<"\nList is empty";
		else
		cout<<"\nThere are some elemets!";
		break;
	case 2:
		cout<<"Enter number:";
		cin>>n;
		L.insert_First(n);
		break;
	case 3:
		cout<<"Enter number:";
		cin>>n;
		L.insert_Last(n);
		break;
	case 4:
		cout<<"Enter number:";
		cin>>n;
		p=L.search(n);
		if(p)
		  cout<<"\nYes! there is!";
		else
		  cout<<"\nNo! there isnt!";
		break;
	case 5:
		L.remove_First();
		L.show();
		break;
	case 6:
		L.remove_Last();
		L.show();
		break;		
	case 7:
		n=L.ListSize();
		cout<<"\nNumber of elements:"<<n;
		break;
	case 8:
		L.show();
		break;
	case 9:
		flag=1;	
	}
	if(flag==1)
		break;
}
}




