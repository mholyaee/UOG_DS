#include<iostream>
using namespace std;

void hanoi(int n,char f, char t, char h)
{
	if (n==1)
	{
	cout<<f<<"-->"<<t<<"\n"; 
	return;
	}
	hanoi(n-1,f,h,t);
	cout<<f<<"-->"<<t<<"\n";
	hanoi(n-1,h,t,f);
}
int main()
{
	char a='A',b='B',c='C';
	int n;
	cout<<"Enter number of Disks:";
	cin>>n;
	hanoi(n,a,c,b);
}
