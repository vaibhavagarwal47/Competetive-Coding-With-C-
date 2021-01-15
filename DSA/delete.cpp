/*
#include<iostream>
using namespace std;
void deletion(int n,int a[],int pos){
	n--;
	for(int i=pos;i<=n-1;i++){
		a[i]=a[i+1];
	}
	for(int i=0;i<n;i++){
cout<<a[i]<<" ";
}

}
int main(){
int n,a[1000],pos;
cout<<"enter the size of array\n";
cin>>n;
cout<<"enter elements of array\n";
for(int i=0;i<n;i++){
cin>>a[i];
}
cout<<"enter the position from where the element is to be deleted \n";
cin>>pos;
deletion(n,a,pos);
	return 0;
}
*/

#include<iostream>
using namespace std;
void deletion(int n,int a[],int num){
	n--;
	for(int i=0;i<=n;i++){
		if(a[i]==num){
			for(int j=i;j<n;j++){
			a[j]=a[j+1];
			}
		}
	}
	for(int i=0;i<n;i++){
	cout<<a[i]<<" ";
	}
}

int main(){
int n,a[1000],num;
cout<<"enter the size of array\n";
cin>>n;
cout<<"enter elements of array\n";
for(int i=0;i<n;i++){
cin>>a[i];
}
cout<<"enter the element to be deleted \n";
cin>>num;
deletion(n,a,num);
	return 0;
}