#include<iostream>
using namespace std;
linear_search(int arr[],int size){
	int k;
	cout<<"\n enter to be searched";
	cin>>k;
	for(int i=0;i<size;i++){
		if(arr[i]==k){
			cout<<arr[i]<<"element is present at this location"<<i;
		}
	}
}
binary_search(int arr[],int size){
	int mid,start,end;
	int k;
	cout<<"\n enter to be searched";
	cin>>k;
	start=arr[0];
	end=arr[size-1];
	while(start<=end){
		mid = (start+end)/2;
		if(k==mid){
			cout<<"element is present "<<mid;
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
cout<<"enter the size of array";
cin>>size;
cout<<"\nenter the array";
for(int i=0;i<=size;i++){
	cin>>arr[i];
}
system("cls");
cout<<"1. perform linear search\n2. perform binary search\n";

cin>>n;
switch(n){
	case 1:linear_search(arr,size);
	case 2:binary_search(arr,size);

	
}
return 0;
}