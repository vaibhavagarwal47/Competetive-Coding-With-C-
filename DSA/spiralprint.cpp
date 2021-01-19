#include<iostream>
using namespace std;
void spiral_print(int n,int m,int a[1000][1000]){
	int sr=0,er=m-1,sc=0,ec=n-1;
	while(sr<=er && sc<=ec){
		for(int i=sc;i<=ec;i++){
			cout<<a[sr][i]<<" ";
		}
		sr++;
		for(int i=sr;i<=er;i++){
			cout<<a[i][ec]<<" ";
		}
		ec--;
		if(er>sr){
		for(int i=ec;i>=sc;i--){
			cout<<a[er][i]<<" ";
		}
        
		er--;
        }
		if(ec>sc){
		for(int i=er;i>=sr;i--){
			cout<<a[i][sc]<<" ";
		}
        
		sc++;
        }
		}
	}
int main(){
	int n,m,a[1000][1000];
	cin>>n;
	cin>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
	spiral_print(n,m,a);
return 0;
}
