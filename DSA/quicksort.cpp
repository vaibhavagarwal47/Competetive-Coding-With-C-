#include<iostream>
using namespace std;
int partition(int x[],int w,int r)
{
	int pivot = x[r];
	int i = w-1;
	int j = w;
	for(;j<=r-1;)
	{
		if(pivot>=x[j])
		{
			i++;
			int temp;
			temp = x[i];
			x[i] = x[j];
			x[j] = temp;
		}
		j++;
	}
	swap(x[i+1],x[r]);
	return i+1;
}
void quicksort(int a[],int s,int e)
{
	if(s>=e)
	{
		return;
	}
	int p = partition(a,s,e);
	quicksort(a,s,p-1);
	quicksort(a,p+1,e);
}
int main() 
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	quicksort(a,0,n-1);
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}