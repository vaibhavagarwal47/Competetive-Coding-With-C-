#include<iostream>
using namespace std;
void enter_input(int n,int m,int a[100][100])
{
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
}
void spiral_print(int n,int m,int a[100][100]){
	int sr=0,er=n-1,sc=0,ec=m-1;
	while(sr<=er and sc<=ec)
	{
		for(int i=sc;i<=ec;i++)
		{
			cout<<a[sr][i]<<" ";
		}
		sr++;
		for(int i=sr;i<=er;i++)
		{
			cout<<a[i][ec]<<" ";
		}
		ec--;
		if(er>sr)
		{
			for(int i=ec;i>=sc;i--)
			{
				cout<<a[er][i]<<" ";
			}
			er--;
        }
		if(ec>sc)
		{
			for(int i=er;i>=sr;i--)
			{
				cout<<a[i][sc]<<" ";
			}
			sc++;
        }
	}
}
int main(){
	int n,m,a[100][100];
	cout<<"Enter the number of rows: ";
	cin>>n;
	cout<<"Enter the number of columns: ";
	cin>>m;
	cout<<"Enter the matrix\n";
	enter_input(n,m,a);
	cout<<"The spiral form is\n";
	spiral_print(n,m,a);
	return 0;
}