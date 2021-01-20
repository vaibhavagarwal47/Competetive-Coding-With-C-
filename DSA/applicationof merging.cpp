#include<iostream>
using namespace std;
void app_merge(int n,int m,int a1[],int a2[],int a3[]){
	int zl=0,zr=n+m-1;
	for(int i=0;i<m;i++){
		if(a1[i]%2==0){
			
		}
	}

}
int main(){
	int n,m,a1[1000],a2[1000],a3[1000];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a1[i];
	}
	cin>>m;
	for(int i=0;i<m;i++){
		cin>>a2[i];
	}
	app_merge(n,m,a1,a2,a3);
	return 0;
}