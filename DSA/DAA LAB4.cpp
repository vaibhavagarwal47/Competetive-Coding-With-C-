
#include<iostream>
using namespace std;
int decimaltobinary(int n)
{
	if(n<=0)
	{
		return 0;
	}

	return (n%2)+ 10*(decimaltobinary(n/2));
}
int main()
{
	int decimalnumber;
	cout<<"Enter the number: ";
	cin>>decimalnumber;
	cout<<"The binary number is: ";
	cout<<decimaltobinary(decimalnumber);
}

/*
#include<iostream>
using namespace std;
void hanoi(int n,char a,char b,char c)
{
	if(n==0)
	{
		return;
	}
	hanoi(n-1,a,c,b);
	cout<<"Moving disk "<<n<<" from "<<a<<" to "<<c<<endl;
	hanoi(n-1,b,a,c);
}
int main()
{
	int n;
	cin>>n;
	hanoi(n,'A','B','C');

	return 0;
}
*/