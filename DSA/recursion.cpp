//print increasing and decreasing numbers using recursion
/*
#include <iostream>
using namespace std;
void increasing(int n)
{
	if(n==0)
	{
		return;
	}
	increasing(n-1);
	cout<<n<<" ";
}
void decreasing(int n)
{
	if(n==0)
	{
		return;
	}
	cout<<n<<" ";
	return decreasing(n-1);
}
int main()
{
	int n;
	cin>>n;
	cout<<"The increasing order is: ";
	increasing(n);
	cout<<"\nThe decreasing order is: ";
	decreasing(n);
}
*/
//check whether the array is sorted or not by recursion
/*
#include<iostream>
using namespace std;
bool sortcheck(int a[],int n)
{
	if(n==0 or n==1)
	{
		return true;
	}
	if(a[0]<=a[1] and sortcheck(a+1,n-1))
	{
		return true;
	}
	return false;
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
	cout<<sortcheck(a,n);
}
*/
//binary search using recursion
/*
#include<iostream>
using namespace std;
bool binarysearch(int a[],int n,int k)
{
	int start = 0,end=n;
	int mid = (start+end)/2;
	if(k==a[mid])
	{
		return true;
	}
	return false;

	if(k<a[mid] and binarysearch(a,n/2,k))
	{
		return true;
	}
	if(k>a[mid] and binarysearch(a+mid,n/2,k))
	{
		return true;
	}
	
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
	int key;
	cin>>key;

	cout<<binarysearch(a,n,key);
}
*/
//print the result of power of n
/*
#include <iostream>
using namespace std;
int power(int n,int a)
{
	if(a==0)
	{
		return 1;
	}
	return n*power(n,a-1);
}
int main()
{
	int n,a;
	cin>>n;
	cin>>a;
	cout<<power(n,a);
}
*/
//print the multiplication of two numbers without use of * operator
/*
#include <iostream>
using namespace std;
int multiply(int x,int y)
{
	if(y==0)
	{
		return 0;
	}
	return x+multiply(x,y-1);
}
int main()
{
	int a,b;
	cin>>a>>b;

	cout<<multiply(a,b);
}
*/
//find the first occurence of the element
/*
#include<iostream>
using namespace std;
int firstoccurence(int a[],int n,int k)
{
	int i;
	if(n==0)
	{
		return -1;
	}
	if(k== *a)
	{
		return 0;
	}
	i = firstoccurence(a+1,n-1,k);
	if(i==-1)
	{
		return -1;
	}
	return i+1;

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
	int key;
	cin>>key;
	cout<<firstoccurence(a,n,key);
}
*/
//perform linear search using recursion
/*
#include<iostream>
using namespace std;

int linearsearch(int a[],int n,int k,int i)
{
	if(i==n)
	{
		return -1;
	}
	if(k==a[i])
	{
		return i;
	}
	return linearsearch(a,n,k,i+1);
}
int main()
{
	int n,i=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int key;
	cin>>key;
	cout<<linearsearch(a,n,key,i);
}
*/
//print the last occurence index using recursion
/*
#include<iostream>
using namespace std;
int lastoccurence(int a[],int n,int k)
{
	int i;
	if(n==0)
	{
		return -1;
	}
	if(k== *a)
	{
		return 0;
	}
	i = lastoccurence(a-1,n-1,k);
	if(i==-1)
	{
		return -1;
	}
	return i+1;

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
	int key;
	cin>>key;
	int x = lastoccurence(a+n,n,key);
	cout<<n-x;
}
*/
//print all the occurences of a number in array
/*
#include<iostream>
using namespace std;
void alloccurence(int a[],int i,int n,int k)
{
	if(i==n)
	{
		return;
	}
	if(a[i]==k)
	{
		cout<<i;
	}
	alloccurence(a,i+1,n,k);
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
	int key;
	cin>>key;
	int i=0;
	alloccurence(a,i,n,key);
}
*/
//print answer of a^b using recursion
/*
#include<iostream>
using namespace std;
int fastpower(int x,int y)
{
	if(y==0)
	{
		return 1;
	}
	if(y%2==0)
	{
		return fastpower(x,y/2)*fastpower(x,y/2);
	}
	return x*fastpower(x,y/2)*fastpower(x,y/2);
}
int main()
{
	int a,b;
	cin>>a>>b;
	cout<<fastpower(a,b);
}
*/
//merge sort
/*
#include <iostream>
using namespace std;
void mergearray(int a[],int s,int e)
{
	int mid = (s+e)/2;
	int i=s,j=mid+1,k=s;
	int temp[s+e];
	while(i<=mid && j<=e)
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
			j++;
			k++;
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

	mergearray(a,s,e);

}
int main()
{
	int n,start,end;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	start = 0;
	end = n-1;
	mergesort(a,start,end);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
*/
//print number to spellings using recursion
/*
#include<iostream>
using namespace std;
void extract(int x)
{
	switch(x)
	{
	case 1:cout<<"One ";
			break;
	case 2:cout<<"Two ";
			break;
	case 3:cout<<"Three ";
			break;
	case 4:cout<<"Four ";
			break;
	case 5:cout<<"Five ";
			break;
	case 6:cout<<"Six ";
			break;
	case 7:cout<<"Seven ";
			break;
	case 8:cout<<"Eight ";
			break;
	case 9:cout<<"Nine ";
			break;
	default:cout<<"Zero ";
			break;
	}
}
void numtowords(int n)
{
	int i;
	if(n==0)
	{
		return;
	}
	i = n % 10;
	numtowords(n/10);
	extract(i);
	return;
}
int main()
{
	int number;
	cin>>number;
	numtowords(number);
}
*/
//print the string as number
/*
#include<iostream>
#include <string.h>
using namespace std;
int stringtointeger(char a[],int n)
{
	if(n==0)
	{
		return 0;
	}
	int digit = a[n-1] - '0'; 
	int ans = stringtointeger(a,n-1);
	return ans*10+digit;
}
int main()
{
	char name[1000];
	cin>>name;
	int len = strlen(name);
	int x = stringtointeger(name,len);
	cout<<x;
}
*/
//pi replacement recursion
/*
#include <iostream>
using namespace std;
void pireplacement(char a[],int i)
{
	if(a[i]=='\0')
	{
		return;
	}
	if(a[i]=='p' and a[i+1]=='i')
	{
		int j = i+2;
		while(a[j]!='\0')
		{
			j++;
		}
		while(j>=i+2)
		{
			a[j+2] = a[j];
			j--;
		}
		a[i] = '3';
		a[i+1] = '.';
		a[i+2] = '1';
		a[i+3] = '4';
		pireplacement(a,i+4);
	}
	else{
	pireplacement(a,i+1);
	}
	return;
}
int main()
{
	char word[1000];
	cin>>word;
	pireplacement(word,0);
	cout<<word;
}
*/