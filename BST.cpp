// This function finds an input number in a list by applying binary search strategy
// mh.olyaee@gmail.com
#include<iostream>
using namespace std;
 int BST(int arr[], int l, int r, int x)
 {
 	if (l>r)
 		return -1;
 	int mid= (l+r)/2;
 	if (arr[mid]==x) 
	 	return mid;
 	else if (arr[mid]<x)
 		BST(arr,mid+1,r,x);
 	else
 		BST(arr,l,mid-1,x);
 }
 int main()
 {
 	int a[10];
 	cout<< "Enter 10 sorted number:\n";
 	for (int i=0;i<10;i++)
 	{
 		cout<< "a["<<i<<"]:";
 		cin>>a[i];
 	}
 	cout<<"\nX=";
 	int x;
 	cin>>x;
 	int m=BST(a,0,9,x);
 	if(m==-1)
 		cout<<"\nX is not exist!!";
 	else
 		cout<<"\nX was found in:"<<m;
 }
