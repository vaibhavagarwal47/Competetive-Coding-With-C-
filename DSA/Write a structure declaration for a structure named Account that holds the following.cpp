/*
Write a structure declaration for a structure named Account that holds the following
data about a savings account. Include a constructor that allows data values to be
passed in for all four members.
*/
#include<iostream>
#include<string>
using namespace std;
struct account
{
		string accnumber;
		double accbalance;
		double interest;
		double avgbalance;

		account()
		{
			accnumber = "unknown";
			accbalance = 0.00;
			interest = 0.00;
			avgbalance = 0.00;
		}
};
account am()
{
	account person;

	cin>>person.accnumber;
	cin>>person.accbalance;
	cin>>person.interest;
	cin>>person.avgbalance;

	return person;
}
void pm(account& a1)
{
	cout<<a1.accnumber<<endl;
	cout<<a1.accbalance<<endl;
	cout<<a1.interest<<endl;
	cout<<a1.avgbalance<<endl;

}
int main()
{	
	int n;
	cin>>n;
	account a[n];
	for(int i=0;i<n;i++)
	{
		a[i] = am();
		pm(a[i]);
	}
}