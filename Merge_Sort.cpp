// Implementaion of Merge Sort
// mh.olyaee@gmail.com
#include<iostream>
using namespace std;

void Merge(int arr[], int l,int m, int r)
{
	
	int *c=new(int[r-l+1]);
	int i=l,j=m+1,k=0;
	while(i<=m && j<=r)
	{
		if (arr[i]==arr[j])
		{
			c[k++]=arr[i++];
			c[k++]=arr[j++];
		}
		else if(arr[i]>arr[j])
			c[k++]=arr[j++];
		else
			c[k++]=arr[i++];		
	}
	for(;i<=m;i++)c[k++]=arr[i];
	for(;j<=r;j++)c[k++]=arr[j];
	k=0;
	for(i=l;i<=r;i++)
		arr[i]=c[k++];
	delete(c);
}
void Merge_Sort(int arr[],int l, int r)
{
	if (l<r)
	{
		int m=(l+r)/2;
		Merge_Sort(arr,l, m);
		Merge_Sort(arr,m+1, r);
		Merge(arr,l,m,r);
	}
}
int main()
{
	int n,i;
	cout<<"Enter size of list:";
	cin>>n;
	int *a=new(int[n]);
	for (i=0;i<n;i++)
	{
		cout<<"a["<<i<<"]:";
		cin>>a[i];
	}
	Merge_Sort(a,0, n-1);
	for(i=0;i<n;i++)
	cout<<a[i]<<"\t";
	delete(a);
}
