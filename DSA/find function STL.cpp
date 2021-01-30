#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int key;
	cin>>key;
	auto fin = find(a,a+n,key);
	int value = fin - a;
	if(value==n){
		cout<<"element not present";
	}
	else{
	cout<<value;
	}
	return 0;
}