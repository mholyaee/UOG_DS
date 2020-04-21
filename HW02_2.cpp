#include<iostream>
using namespace std;
// Finding common numbers between two arrays
int main()
{
	int a[10],b[10];
	cout<<"Enter 10 numbers for the first list:\n";
	for(int i=0; i<10;i++)
	{
		cout<<"a["<<i<<"]:";
		cin>>a[i];
	}
	cout<<"Enter 10 numbers for the second list:\n";
	for(int i=0; i<10;i++)
	{
		cout<<"b["<<i<<"]:";
		cin>>b[i];
	}
	cout<<"THe common numbers are:"
	for(int i=0; i<10;i++)
		for(int j=0;j<10;j++)
			if(a[i]==b[j])
				cout<<a[i]<<"\t";
// Hence, its time complexity is O(n^2)
}
