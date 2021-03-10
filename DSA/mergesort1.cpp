#include<iostream>
using namespace std;
void merge(int a[],int x,int y)
{
	int mid = (x+y)/2;
	int i=x;
	int j=mid+1;
	int k=x;
	int temp[1000];
	while(i<=mid && j<=y)
	{
		if(a[i]<a[j])
		{
			temp[k] = a[i];
			k++;
			i++;
		}
		else
		{
			temp[k] = a[j];
			k++;
			j++;
		}
	}
	while(i<=mid)
	{
		temp[k] = a[i];
		k++;
		i++;
	}
	while(j<=y)
	{
		temp[k] = a[j];
		k++;
		j++;
	}
	for(int g=x;g<=y;g++)
	{
		a[g] = temp[g];
	}
}
void mergesort(int a[],int s,int e)
{
	if(s>=e)
	{
		return;
	}
	int mid = (s+e)/2;

	mergesort(a,s,mid);
	mergesort(a,mid+1,e);

	merge(a,s,e);
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
	mergesort(a,0,n-1);
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}