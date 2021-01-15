#include<iostream>
using namespace std;
void insertion(int n,int a[],int val){
	n++;
	for(int i=0;i<n;i++){
		if(a[i]>val){
			for(int j=n-1;j>=i;j--){
			a[j]=a[j-1];
			}
			a[i]=val;
			break;
		}
	}
		cout<<"the updated array is";
			for(int i=0;i<n;i++){
			cout<<a[i];
			}
}
int main(){
int n,a[1000],val;
cout<<"enter the size of array\n";
cin>>n;
cout<<"enter elements of array\n";
for(int i=0;i<n;i++){
cin>>a[i];
}
cout<<"enter the value\n";
cin>>val;
insertion(n,a,val);
	return 0;
}