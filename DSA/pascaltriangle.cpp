#include<iostream>
using namespace std;
int main(){
	int a[100][100],r=0,c=0,n;
	cout<<"enter the number of rows";
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			cin>>a[i][j];
		}
	}
	cout<<"the array is";
	for(int i=0;i<r;i++){
		cout<<"\n";
		for(int j=0;j<c;j++){
			cout<<a[i][j]<<"\t";
		}
	}
	return 0;
}