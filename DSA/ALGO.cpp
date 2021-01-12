#include<iostream>
using namespace std;
linear_search(int arr[],int size){
	int k;
	cout<<"\n enter to be searched";
	cin>>k;
	for(int i=0;i<size;i++){
		if(arr[i]==k){
			cout<<a[i]<<"element is present at this location"<<i;
		}
	}
}
int main(){
int n,arr[100],size;
cout<<"enter the size of array";
cin>>size;
cout<<"\nenter the array";
for(int i=0;i<=size;i++){
	cin>>arr[i];
}
system("cls");
cout<<"1. perform linear search";

cin>>n;
switch(n){
	case 1:linear_search(arr,size);
	
}
return 0;
}