#include<iostream>
#include<cstdlib>
#include<conio.h>
using namespace std;
class stack{
	private:
		char *s;
		int top;
		int maxsize;
	public:
		stack(int m);
		int IsFull();
		int IsEmpty();
		int ElementNumbers();
		char pop();
		void push(char );
		void show();	
};
stack::stack(int m)
{
	s=new char[m];
	maxsize=m;
	top=-1;	
}
int stack::IsFull()
{
	if (top==maxsize-1)
		return 1;
	return 0;
}
int stack::IsEmpty()
{
	if(top==-1)
		return 1;
	return 0;
}
char stack::pop()
{
	if(!IsEmpty())
		return s[top--];
	else
		{
			cout<<"Stack is empty!\n";
			return '\0';
		}
}
void stack::push(char m)
{
	if(!IsFull())
	{
		s[++top]=m;
	}
}
void stack::show()
{
	int copy=top;
	cout<<"\nCurrent elements are:\n";
	while(copy>=0)
	{
		cout<<"\n"<<s[copy];
		copy--;
	}
}
int main()
{
	char ch;
	int m;
	cout<<"To terminate the program input 0\n";

	class stack st(10);
	while (true)
	{
		int r=rand();
		//cout<<"\nrand number is:"<<r<<"\n";
		if(r%2==0)
		{
			cout<<"\nInput a char measure to push:\n";
			ch=getche();
			if(ch=='0') break;
			st.push(ch);
			st.show();		}
		else
		{
			if(!st.IsEmpty())
				cout<<"\nPop:"<<st.pop();
			else
				cout<<"Stack is empty\n";
		}
	}
	st.show();
	
}
