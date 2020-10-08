#include<iostream>
#include<conio.h>

using namespace std;

void UI(){
    system("cls");
    int n1, a1[], n2, a2[];
    cout<<"\n\n Q1. Find the Union and Intersection of the two sorted arrays.";
    cout<<"\n\n     Enter the size of array 1: ";
    cin>>n1;
    cout<<"\n\n     Enter the elements: ";
    for (int i = 0; i < n1; i++)
    {
        cin>>a1[i];
    }
    cout<<"\n\n     Enter the size of array 2: ";
    cin>>n2;
    cout<<"\n\n     Enter the elements of array: ";
    for (int i = 0; i < n2; i++)
    {
        cin>>a2[i];
    }
    cout<<"\n\n  The Union of array is : ";
    int a[], u = n1+n2;
    
    


}

void Questions(){
    system("cls");
    int t, n, a[100];
    cout<<"\t\t Array 2 ";
    // cout<<"\n\n Enter the size of array: ";
    // cin>>n;
    // cout<<"\n\n Enter the elements of array: ";
    // for (int i = 0; i < n; i++)
    // {
    //     cin>>a[i];
    // }
    system("cls");
    cout<<"\n\n Q1. Find the Union and Intersection of the two sorted arrays.";
    cout<<"\n\n     Enter the choice: ";
    cin>>t;

    switch (t)
    {
    case 1:
        UI();
        break;
    
    default:
        break;
    }
}

void main(){

    system("cls");
    Questions();
    
}