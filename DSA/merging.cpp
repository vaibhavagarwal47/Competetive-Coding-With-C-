/*
#include<iostream>
using namespace std;
void merging(int n1,int n2,int m,int a1[],int a2[],int a3[],int index){
m=n1+n2;
for(int i=0;i<n1;i++){
	a3[index]=a1[i];
	index++;
}
for(int i=0;i<n2;i++){
	a3[index]=a2[i];
	index++;
}
for(int i=0;i<m;i++){
	cout<<a3[i]<<" ";
}
}

int main(){
int n1,n2,m,a1[1000],a2[1000],a3[1000],index=0;
cout<<"enter the size of array 1-\n";
cin>>n1;
cout<<"enter elements of array 1-\n";
for(int i=0;i<n1;i++){
cin>>a1[i];
}
cout<<"enter the size of array 2-\n";
cin>>n2;
cout<<"enter elements of array 2-\n";
for(int i=0;i<n2;i++){
cin>>a2[i];
}
	merging(n1,n2,m,a1,a2,a3,index);
	return 0;
}
*/


#include<iostream>
using namespace std;
void insertion_sort(int a3[],int m){
    int key,j;
    for(int i=1;i<m;i++){
        key=a3[i];
        j=i-1;
        while(j>=0 && a3[j]>key){
            a3[j+1]=a3[j];
            j=j-1;
        }
        a3[j+1]=key;
    }
    
    for(int i=0;i<m;i++){
        cout<<a3[i]<<" ";
    }
}

void merging(int n1,int n2,int m,int a1[],int a2[],int a3[],int index){
m=n1+n2;
for(int i=0;i<n1;i++){
	a3[index]=a1[i];
	index++;
}
for(int i=0;i<n2;i++){
	a3[index]=a2[i];
	index++;
}cout<<"the sorted and merged array a3 is: ";
insertion_sort(a3,m);
}

int main(){
int n1,n2,m,a1[1000],a2[1000],a3[1000],index=0;
cout<<"enter the size of array 1-\n";
cin>>n1;
cout<<"enter elements of array 1-\n";
for(int i=0;i<n1;i++){
cin>>a1[i];
}
cout<<"enter the size of array 2-\n";
cin>>n2;
cout<<"enter elements of array 2-\n";
for(int i=0;i<n2;i++){
cin>>a2[i];
}
	merging(n1,n2,m,a1,a2,a3,index);
	return 0;
}