#include<iostream>
#include<conio.h>

using namespace std;

void print(int n, int a[10]){
    system("cls");
    
    cout<<"\n\n Q1 Create an Array of size 10 of integers.Take input from the user for these 10 elements and print the entire array after that.";  
    cout<<"\n\n Answer. The elements are = ";
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\n\n";
}

void find(int n, int a[10]){
    system("cls");
    cout<<"\n\n Q2 Check whether n is present in an array of size m or not.";
    cout<<"\n\n    Enter the element you want to find = ";
    int search, location;
    cin>>search;
    cout<<"\n\n    Answer. ";
    for (int i = 0; i < n; i++)
    {
        if (search == a[i])
        {
            location = i;
            break;
        }
        else 
            location = -1;
    }
    if(location != -1)
        cout <<"Element " <<search <<" is present at location "<<location<<"\n\n";
        
}

void maxmin(int n, int a[10]){
    system("cls");
    int max, min;
    cout<<"\n\n Q3 Find the minimum and maximum element in an array.";
    cout<<"\n\n Answer. ";

    max = a[0];
    min = a[0];
    for (int i = 1; i < n; i++)
    {
        if (max<a[i])
        {
            max = a[i];
        }
        
    }
    cout<<"\n  Maximum element in array is = "<<max;
    for (int i = 0; i < n; i++)
    {
        if(min>a[i])
            min = a[i];
    }
    cout<<"\n  Minimum element in array is = "<<min;
    cout<<"\n\n";
}

int main(){
    system("cls");
    int n, a[10], t;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"\nEnter the array: ";

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    system("cls");
    
    cout<<"\n\n Q1 Create an Array of size 10 of integers.Take input from the user for these 10 elements and print the entire array after that.";
    cout<<"\n\n Q2 Check whether n is present in an array of size m or not.";
    cout<<"\n\n Q3 Find the minimum and maximum element in an array.";
    cout<<"\n\n Q4 Write a program to reverse the array.";    
    cout<<"\n\n Q5 Write a program to sort the given array.";
    cout<<"\n\n Q6 Find the Kth largest and Kth smallest number in an array.";
    cout<<"\n\n Q7 Given an	number n. Find the number of occurrences of n in the array.";
    cout<<"\n\n Q8 Given an array which consists of only 0, 1 and 2. Sort the array without using any sorting algorithm.";
    cout<<"\n\n Q9 Find the range of the array. Range means the difference between the maximum and minimum element in the array.";
    cout<<"\n\n Q10 Move all the negative elements to one side of the array.";
    cout<<"\n\n Enter the no you want to know the answers: ";
    cin>>t;

    switch (t)
    {
    case 1:
        print(n, a);
        break;
    case 2:
        find(n, a);
        break;
    case 3:
        maxmin(n, a);
    
    default:
        break;
    }
    return 0;
}