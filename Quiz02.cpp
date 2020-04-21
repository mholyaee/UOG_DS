#include<iostream>
using namespace std;

int main()
{
	int a[10],b[10];
	cout<<"Enter 10 ordered numbers for the first list:";
	for(int i=0; i<10;i++)
		cin>>a[i];
	cout<<"Enter 10 ordered numbers for the second list:";
	for(int i=0; i<10;i++)
		cin>>b[i];
	int i=0,j=0,k=0;
	cout<<"The common numbers are:";
	while(i<10 && j<10)
	{
		if(a[i]==b[j])
		{
			cout<<a[i]<<"\n";
			i++;j++;
		}
		else if(a[i]<b[j])
		{
			i++;
		}
		else
		{
			j++;
		}
	}
	cout<<"\nYou can see that its time order is linear! O(n)";
}
