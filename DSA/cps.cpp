#include<iostream>
using namespace std;
void enter_input(int n,int m,int a[][100])
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
	}
}
void add(int n,int m,int a[][100],int b[][100])
{
	int c[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			c[i][j] = a[i][j] + b[i][j];
			cout<<c[i][j]<<" ";
		}
		cout<<endl;
	}
}
void subtract(int n,int m,int a[][100],int b[][100])
{
	int c[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			c[i][j] = b[i][j] - a[i][j];
			cout<<c[i][j]<<" ";
		}
		cout<<endl;
	}
}
void multiply(int n,int m,int a[][100],int b[][100])
{
	int c[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			c[i][j] = a[i][j] * b[i][j];
			cout<<c[i][j]<<" ";
		}
		cout<<endl;
	}
}
void displaymatrix(int n,int m,int a[][100])
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
int main()
{
	int n,m;
	cout<<"Enter number of rows: ";
	cin>>n;
	cout<<"Enter number of columns: ";
	cin>>m;
	int a[100][100],b[100][100];
	cout<<"Enter 1st matrix values\n";
	enter_input(n,m,a);
	cout<<"Enter 2nd matrix values\n";
	enter_input(n,m,b);
	cout<<"The 1st matrix is\n";
	displaymatrix(n,m,a);
	cout<<"The 2nd matrix is\n";
	displaymatrix(n,m,b);
	cout<<"The resultant matrix after adding\n";
	add(n,m,a,b);
	cout<<"The resultant matrix after subtracting\n";
	subtract(n,m,a,b);
	cout<<"The resultant matrix after multiplying\n";
	multiply(n,m,a,b);
	return 0;
}
