#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
	
}
void BubbleSort(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
	int flag=0;
	for(int j=0;j<n-i-1;j++)
	if (arr[j]>arr[j+1]) 
	{
		swap(&arr[j],&arr[j+1]);
		flag=1;
	}
	if (flag==0)
	return;
}
}
int main()
{
	int list[10];
	cout<<" Fill the list:";
	for (int i=0;i<10;i++)
	cin>>list[i];
	BubbleSort(list,10);
	for (int i=0;i<10;i++)
	cout<<list[i]<<'\t';
}
