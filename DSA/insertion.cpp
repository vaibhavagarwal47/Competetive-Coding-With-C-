/*
#include<iostream>
using namespace std;
void insert(int a[10],int n,int pos,int val){
	for(int i=n;i>pos;i--){
		a[i]=a[i-1];
	}
	a[pos-1]=val;
	cout<<"the new array is";
	for(int i=0;i<n;i++){
		cout<<a[i];
	}
}
int main(){
	int n,pos,val;
	int a[100];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"enter the position where the element is to be inserted";
	cin>>pos;
	cout<<"enter value";
	cin>>val;
	insert(a,n,pos,val);
	return 0;
}
*/

#include <iostream> 
using namespace std; 
int* insertX(int n, int arr[],int x, int pos) 
{ 
    int i; 
    // increase the size by 1 
    n++; 
    // shift elements forward 
    for (i = n; i >= pos; i--) 
        arr[i] = arr[i - 1]; 
    // insert x at pos 
    arr[pos - 1] = x; 
    return arr; 
} 
int main() 
{ 
    int arr[100] = { 0 }; 
    int i, x, pos, n = 10; 
    for (i = 0; i < 10; i++) 
       cin>>arr[i];
    for (i = 0; i < n; i++) 
        cout << arr[i] << " "; 
    cout << endl; 
    cin>>x;
    cin>>pos; 
    insertX(n, arr, x, pos); 
    for (i = 0; i < n + 1; i++) 
        cout << arr[i] << " "; 
    cout << endl; 
    return 0; 
}