#include<iostream>
using namespace std;

int main()
{
	// HW2-1 adding new measure into an ordered list
	int a[10]={0};
	cout<<"Enter 9 ordered numbers\n";
	for(int i=0;i<9;i++)
		cin>>a[i];
	int x,k;
	cout<<"new number:";
	cin>>x;
	k=8;//index of the last number
	while(a[k]>x)//Finding the suitable index O(n)
	{
		a[k+1]=a[k];
		k--;
	}
	a[k]=x;
	for(k=0;k<10;k++)
		cout<<a[k]<<"\t";
}
