#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int n,a[1000][1000];
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n;i++){
		int sc=0,ec=n-1;
		while(sc<ec){
			swap(a[i][sc],a[i][ec]);
			sc++;
			ec--;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i<j){
				swap(a[i][j],a[j][i]);
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<a[j][i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}