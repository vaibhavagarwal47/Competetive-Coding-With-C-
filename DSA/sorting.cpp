#include<iostream>
using namespace std;
void selection_sort(int a[],int size){
    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            if(a[i]>a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for(int i=0;i<size;i++){
        cout<<a[i]<<",";
    }
}
void bubble_sort(int a[],int size){
    for(int i=0;i<size;i++){
        for(int j=0;j<size-i-1;j++){
            if(a[j]>a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    for(int i=0;i<size;i++){
        cout<<a[i]<<",";
    }
}
void insertion_sort(int a[],int size){
    int key,j;
    for(int i=1;i<size;i++){
        key=a[i];
        j=i-1;
        while(j>=0 && a[j]>key){
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=key;
    }
    for(int i=0;i<size;i++){
        cout<<a[i]<<",";
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
cout<<"1. Perform selection sort\n2. Perform bubble sort\n3. insertion sort\n";
cout<<"Enter the choice:- ";
cin>>n;
switch(n){
	case 1:selection_sort(arr,size);
	case 2:bubble_sort(arr,size);
    case 3:insertion_sort(arr,size);
}
return 0;
}