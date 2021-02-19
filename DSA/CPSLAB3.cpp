/*
print the half pyramid
*
**
***
****
*****

#include<iostream>
using namespace std;
void printpyramid(int n)
{
	for(int row=0;row<=n;row++)
	{
		for(int column = 0;column<row;column++)
		{
			cout<<" * ";
		}
		cout<<endl;
	}
}
int main()
{
	int number;
	cout<<"Enter the number of rows: ";
	cin>>number;
	cout<<endl;
	printpyramid(number);
	return 0;
}
*/



/*
print pyramid using numbers

#include <iostream>
using namespace std;
displaytriangle(int n)
{	
	int count=0,a=0;
	for(int i=1;i<=n;i++)
	{
		for(int k=1;k<=n-i;k++)
		{
			cout<<"  ";
			++count;
		}
		for(int j=0;j<(2*i-1);j++)
		{
			if(count<=n-1)
			{
				cout<<i+j<<" ";
				++count;
			}
			else
			{
				++a;
				cout<<j+i-(2*a)<<" ";
			}

		}
		count=0,a=0;
		cout<<endl;
	}
}
int main()
{	
	int number;
	cout<<"Enter the number of rows: ";
	cin>>number;
	cout<<endl;
	displaytriangle(number);
	return 0;
}
*/



/*
print floyd triangle
1
23
456
78910


#include<iostream>
using namespace std;
void floydtriangle(int n)
{	
	int x=1;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<x++<<" ";
		}
		cout<<endl;
	}
}
int main()
{	
	int number;
	cout<<"Enter the number of rows: ";
	cin>>number;
	cout<<endl;
	floydtriangle(number);
	return 0;
}
*/



/*
print the series
1,3,6,10,15,.....,N


#include<iostream>
using namespace std;
void printseries(int x)
{	
	int a=1;
	for(int i=1;i<=x;i++)
	{
		cout<<i<<",";
		i=i+a;
		a++;
	}
}
int main()
{
	int n;
	cout<<"Enter the value of n: ";
	cin>>n;
	printseries(n);
	return 0;
}
*/



/*
#include<iostream>
using namespace std;
float factorial(int fac)
{
	int a=1;
	while(fac>0)
	{
		a = a*fac;
		fac--;
	}
	return a;
}
void sumseries(int x)
{
	float sum=0,rem;
	for(int i=1;i<=x;i++)
	{
		float rem = i/factorial(i);
		sum = sum + rem;
	}
	cout<<"Tthe sum is: "<<sum;
}
int main()
{
	int n;
	cout<<"Enter the value of n: ";
	cin>>n;
	sumseries(n);
	return 0;
}
*/