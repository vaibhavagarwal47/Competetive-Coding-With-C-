/*
#include <iostream>
using namespace std;
int main()
{
	int num1,num2,num3,min,max;
	cout<<"Enter number 1: ";
	cin>>num1;
	cout<<"Enter number 2: ";
	cin>>num2;
	cout<<"Enter number 3: ";
	cin>>num3;
    cout<<"THE BIGGEST NUMBER IS: ";
    if(num1>num2 && num1>num3)
    {
    	max=num1;
    	cout<<num1;
    }
    else if(num2>num3)
    {
    	max=num2;
    	cout<<num2;
    }
    else
    {
    	max=num3;
    	cout<<num3;
    }
    cout<<"\nTHE SMALLEST NUMBER IS: ";
    if(num1<num2 && num1<num3)
    {
    	min=num1;
    	cout<<num1;
    }
    else if(num2 < num3)
    {
    	min=num2;
    	cout<<num2;
    }
    else
    {
    	min=num3;
    	cout<<num3;
    }
    cout<<endl;
    if(max%2==0)
    {
    	cout<<max<<" is even."<<endl;
    }
    else
    {
    	cout<<max<<" is odd."<<endl;
    }
    if(min%2==0)
    {
    	cout<<min<<" is even."<<endl;
    }
    else
    {
    	cout<<min<<" is odd."<<endl;
    }
}
*/
/*
#include <iostream>
using namespace std;
int main()
{
	int number,digit1,digit4,sum;
	cout<<"Enter a 4 digit number: ";
	cin>>number;
	digit1 = number%10;
	digit4 = number/1000;
	sum = digit1 + digit4;
	cout<<"The sum of 1st and 4th digit is: ";
	cout<<sum;
}
*/
/*
#include <iostream>
using namespace std;
int main()
{
	char character;
	cout<<"Enter a character: ";
	cin>>character;
	if(character>=65 && character<=90)
	{
		cout<<character<<" is Capital Letter";
	}
	else if(character>=97 && character<=122)
	{
		cout<<character<<" is Small Letter";
	}
	else if(character>=48 && character<=57)
	{
		cout<<character<<" is a Number";
	}
	else if(character>=33 && character<=47)
	{
		cout<<character<<" is Special Symbol";
	}
	else
	{
		cout<<"Invalid";
	}
	return 0;
}
*/




/*
int hcf(int a,int b)
{	
	int rem;
	while(a!=0)
	{
		rem = b%a;
		b = a;
		a = rem;
	}
	return b;
}
int lcm(int x,int y)
{		
	int max;
	if(x>y)
	{
		max = x;
	}
	else
	{
		max = y;
	}
	while(true)
	{
		if(max%x==0 && max%y==0)
		{
			return max;
		}
		max++;
	}
}
int main()
{
	int num1,num2;
	cout<<"Enter number 1: ";
	cin>>num1;
	cout<<"Enter number 2: ";
	cin>>num2;
	cout<<"The HCF of 2 numbers is: "<<hcf(num1,num2)<<endl;
	cout<<"The LCM of 2 numbers is: "<<lcm(num1,num2)<<endl;
	return 0;
}
*/