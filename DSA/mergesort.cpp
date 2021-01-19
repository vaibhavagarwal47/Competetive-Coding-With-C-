// A A A
/*
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
*/

// A A D
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
	for(int i=m;i>=0;i--){
		cin>>a2[i];
	}
	merge_sort(n,m,a1,a2,a3,x);
	return 0;

}