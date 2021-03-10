#include<iostream>
using namespace std;
void enterarray(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
}
int printsumpos(int a[],int n)
{
	int sumpos = 0;
	for(int i=0;i<n;i++)
	{
		if(a[i]>=0)
		{
			sumpos += a[i];
		}
		
	}
	return sumpos;
}
int printsumneg(int a[],int n)
{
	int sumneg = 0;
	for(int i=0;i<n;i++)
	{
		if(a[i]<0)
		{
			sumneg += a[i];
		}
		
	}
	return sumneg;
}

void printarray(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
int main()
{
	int n;
	cout<<"Enter the size of array ";
	cin>>n;
	int a[n];
	cout<<"Enter the elements in array ";
	enterarray(a,n);
	cout<<"You entered ";
	printarray(a,n);
	cout<<"\nSUM OF POSITIVE ELEMENTS IS "<<printsumpos(a,n);
	cout<<"\nSUM OF NEGATIVE ELEMENTS IS "<<printsumneg(a,n);
	return 0;
}


/*
#include<iostream>
using namespace std;
void enterarray(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
}
int printsum(int a[],int n)
{
	int sum = 0;
	for(int i=0;i<n;i++)
	{
		sum += a[i];
	}
	return sum;
}
void printarray(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
int main()
{
	int n;
	cout<<"Enter the size of array ";
	cin>>n;
	int a[n];
	cout<<"Enter the elements in array ";
	enterarray(a,n);
	cout<<"You entered ";
	printarray(a,n);
	cout<<"\nSUM IS "<<printsum(a,n);
	return 0;
}
*/




/*
#include<iostream>
using namespace std;
void enterarray(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
}
int printmin(int a[],int n)
{
	int min = a[0];
	for(int i=0;i<n;i++)
	{
		if(a[i]<min)
		{
			min = a[i];
		}
	}
	return min;
}
void printarray(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
int main()
{
	int n;
	cout<<"Enter the size of array ";
	cin>>n;
	int a[n];
	cout<<"Enter the elements in array ";
	enterarray(a,n);
	cout<<"You entered ";
	printarray(a,n);
	cout<<"\nMIN ELEMENT IS "<<printmin(a,n);
	return 0;
}
*/


/*
#include<iostream>
using namespace std;
void enterarray(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
}
int printmax(int a[],int n)
{
	int max = a[0];
	for(int i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max = a[i];
		}
	}
	return max;
}
void printarray(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
int main()
{
	int n;
	cout<<"Enter the size of array ";
	cin>>n;
	int a[n];
	cout<<"Enter the elements in array ";
	enterarray(a,n);
	cout<<"You entered ";
	printarray(a,n);
	cout<<"\nMAX ELEMENT IS "<<printmax(a,n);
	return 0;
}
*/