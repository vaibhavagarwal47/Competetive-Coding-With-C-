#include<iostream>
using namespace std;
int main(){
	int n;
	int start,end,mid,flag=0;
	cin>>n;
	int a[1000];
	for(int i=0;i<n;i++){
	cin>>a[i];
	}
	int ele;
	cout<<"element to be searched";
	cin>>ele;
	start = a[0];
	end = a[n-1];
	while(start<=end){
		mid= (start+end)/2;
	if(ele==mid){
		flag=1;
	cout<<"element found at index"<<mid-1;
	break;
	}
	else if(ele>mid){
	start = mid+1;
	}
	else if(ele<mid){
	end = mid - 1;
	}
	}
	if(flag==0){
		cout<<"element not found";
	}
	return 0;
}
