#include<iostream>
using namespace std;
void bubble_sort(int a[],int size){
	for(int i=0;i<size;i++){
		int temp;
		for(int j=0;j<size-i-1;j++){
		if(a[j]>a[j+1]){
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
		}
	}
	for(int i=0;i<size;i++){
		cout<<a[i];
	}
}
int main(){
	int n,a[1000];
	cout<<"enter the size of array";
	cin>>n;
	int size;
	cout<<"enter the elements of array";
	for(int i=0;i<n;i++){
	cin>>a[i];
	}
	bubble_sort(a,size);
	return 0;
}