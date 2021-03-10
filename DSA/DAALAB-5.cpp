//QUICK SORT

#include<iostream>
using namespace std;
int partition(int a[],int s,int e)
{
	int pivot = a[e];
	int i=s-1;
	for(int j=s;j<e;j++)
	{
		if(a[j]<=pivot)
		{
			i++;
			int temp;
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		}
	}
	swap(a[i+1],a[e]);
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

//MERGE SORT

/*#include<iostream>
using namespace std;
void merge(int a[],int s,int e)
{
	int mid = (s+e)/2;
	int i=s;
	int j=mid+1;
	int temp[s+e];
	int k=s;
	while(i<=mid && j<=e)
	{
		if(a[i]<a[j])
		{
			temp[k] = a[i];
			k++;
			i++;
		}
		if(a[i]>a[j])
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
	while(j<=e)
	{
		temp[k] = a[j];
		k++;
		j++;
	}
	for(int x=s;x<=e;x++)
	{
		a[x] = temp[x];
	}
	return;
}
void mergesort(int a[],int s,int e)
{
	int mid = (s+e)/2;
	if(s>=e)
	{
		return;
	}
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
*/