#include<iostream>
#include <vector>
#include <algorithm>

using namespace std;
//copy and print a vector into another vector
/*
int main()
{
	vector<int> a(10);
	
	for(int i=0;i<10;i++)
	{
		cin>>a[i];
	}
	vector<int> b(a);
	for(int i=0;i<10;i++)
	{
		cout<<b[i]<<" ";
	}
}
*/
//using pushback and size determining function of vector
/*
int main()
{
	vector<int> a;
	int x;
	for(int i=0;i<10;i++)
	{
		cin>>x;
		a.push_back(x);
	}
	vector<int> b(a);
	for(int i=0;i<10;i++)
	{
		cout<<b[i]<<" ";
	}
	int num = b.size();
	cout<<num;
}
*/
//using pop_back and clear function
/*
int main()
{
	vector<int> a;
	int x;
	for(int i=0;i<10;i++)
	{
		cin>>x;
		a.push_back(x);
	}
	vector<int> b(a);
	b.clear();
	for(int i=0;i<10;i++)
	{
		cout<<b[i]<<" ";
	}
	b.pop_back();
	b.pop_back();
	int num = b.size();
	cout<<num;
}
*/
int main()
{
	vector<int> a;
	int x;
	for(int i=0;i<10;i++)
	{
		cin>>x;
		a.push_back(x);
	}
	vector<int> b(a);
	b.clear();
	for(int i=0;i<10;i++)
	{
		cout<<b[i]<<" ";
	}
	if(b.empty())
	{
		cout<<"empty";
	}
	int num = b.size();
	int l = a.capacity();
	cout<<endl<<l;
	cout<<num;
}