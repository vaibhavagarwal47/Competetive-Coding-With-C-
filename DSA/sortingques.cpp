/*
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
*/

/*
insertion sort

#include<iostream>
using namespace std;
void insertion_sort(int n,int a[]){
	for(int i=0;i<n;i++){
		int temp = a[i];
		int j=i-1;
		while(temp<a[j] && j>=0){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
int main(){
	int n,a[1000];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	insertion_sort(n,a);
	return 0;
}
*/

#include<iostream>
using namespace std;
void merge_sort(int n,int m,int a1[],int a2[],int a3[],int x){
	int i=0,j=0,z=0;
	while(i<m && j<m){
		if(a1[i]<a2[j]){
			a3[z] = a1[i];
			i++;
			z++;
		}
		else{
			a3[z] = a2[j];
			j++;
			z++;
			}
	
	}
	if(i==n){
		while(j<m){
			a3[z] = a2[j];
			j++;
			z++;
		}
	}
	else if(j==m){
		while(i<n){
			a3[z] = a1[i];
			i++;
			z++;
		}
	}
	x = n+m;
	for(int i=0;i<x;i++){
		cout<<a3[i]<<" ";
	}
}
int main(){
	int n,m,a1[1000],a2[1000],a3[1000],x;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a1[i];
	}
	cin>>m;
	for(int i=0;i<m;i++){
		cin>>a2[i];
	}
	merge_sort(n,m,a1,a2,a3,x);
	return 0;

}
