
#include<iostream>
using namespace std;
void printpattern(int n)
{
	for(int row=0;row<n;row++)
	{
		for(int col=0;col<n-row+1;col++)
		{
			cout<<" * ";
		}
		cout<<endl;
	}
}
int main()
{
	int rownumber;
	cout<<"Enter the number of rows: ";
	cin>>rownumber;
	printpattern(rownumber);
	return 0;
}
/*
#include <iostream>
using namespace std;
void printtriangle(int a)
{
	for(int row=0;row<a;row++)
	{
		for(int col=0;col<=row;col++)
		{
			cout<<col;
		}
		cout<<endl;
	}
}
int main()
{
	int rownumber;
	cout<<"Enter the number of rows: ";
	cin>>rownumber;
	printtriangle(rownumber);

	return 0;
}
*/
/*
#include<iostream>
using namespace std;
void printfibonacci(int num)
{
	int a=0,b=1,c,count=2;
	cout<<a<<" "<<b<<" ";
	while(count<num)
	{
		c = a + b;
        cout<<c<<" ";
		a = b;
		b = c;
        count++;
	}
}
int main()
{
	int number;
	cout<<"Enter the number upto which you want to print the fibonacci series: ";
	cout<<endl;
    cin>>number;

	printfibonacci(number);
	return 0;
}
*/
/*
#include<iostream>
using namespace std;
int printfibonacci(int num)
{	
	if((num==0)||(num==1))
	{
		return num;
	}
	return printfibonacci(num-1)+printfibonacci(num-2);
}
int main()
{
	int number,range=0;
	cout<<"Enter the number upto which you want to print the fibonacci series: ";
	cin>>number;
	while(range<number)
	{
		cout<<printfibonacci(range)<<" ";
		range++;
	}
	return 0;
}
*/