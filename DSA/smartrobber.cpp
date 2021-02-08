#include<iostream>
using namespace std;
int main() {
	int test,number,sum1=0,sum2=0;
	cin>>test;
	cin>>number;
	int a[number];
	for(int i=0;i<number;i++){
		cin>>a[i];
	}
		for(int j=0;j<number;j = j+2){
		sum1 = sum1 +a[j];
		}
		for(int j=1;j<number;j = j+2){
		sum2 = sum2 +a[j];
		}
	if(sum1>sum2){
		cout<<sum1<<endl;
	}
	else{
		cout<<sum2<<endl;
	}
	return 0;
}