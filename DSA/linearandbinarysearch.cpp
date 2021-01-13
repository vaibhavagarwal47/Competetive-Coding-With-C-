#include<iostream>
using namespace std;
void linear_search(int arr[],int size){
	int k;
	cout<<"\n Enter to be searched:- ";
	cin>>k;
	for(int i=0;i<size;i++){
		if(arr[i]==k){
			cout<<arr[i]<<"Element is present at this location:- "<<i;
		}
	}
}
void binary_search(int arr[],int size){
	int mid,start,end;
	int k;
	cout<<"\n Enter to be searched:- ";
	cin>>k;
	start=arr[0];
	end=arr[size-1];
	while(start<=end){
		
	mid = (start+end)/2;
		if(k==mid){
			cout<<"Element is present at location:-  "<<mid-1;
			break;
		}
		else if(k<mid){
			end= mid-1;
		}
		else if(k>mid){
			start= mid+1;
		}
	}                      
}
int main(){
int n,arr[100],size;
cout<<"Enter the size of array:- ";
cin>>size;
cout<<"\nEnter the array:- ";
for(int i=0;i<=size-1;i++){
	cin>>arr[i];
}
system("cls");
cout<<"1. Perform linear search\n2. Perform binary search\n";
cout<<"Enter the choice:- ";
cin>>n;
switch(n){
	case 1:linear_search(arr,size);
	case 2:binary_search(arr,size);
}
return 0;
}