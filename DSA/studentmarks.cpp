#include<iostream>
using namespace std;
int main(){
	int a[5][3],max;
	for(int i=1;i<=5;i++){
		for(int j=0;j<3;j++){
			cin>>a[i][j];
		}
	}
	for(int j=0;j<3;j++){
		max=-1;
		for(int i=1;i<=5;i++){
			if(a[i][j]>max){
				max=a[i][j];
			}
		}
		cout<<"the maximum marks are:"<<max;
	}
	return 0;
}