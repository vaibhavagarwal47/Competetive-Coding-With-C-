#include<iostream>
#include<conio.h>

using namespace std;
int main();
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

void reverse(int n, int a[10]){
    system("cls");
    cout<<"\n\n Q3 Find the minimum and maximum element in an array.";
    cout<<"\n\n Answers.";
    cout<<"\n";

    int start = 0, end = n-1;
    while(start<end){
        int temp = a[start];
        a[start] = a[end];
        a[end]   = temp;
        start ++;
        end --;

    }

    cout<<"reverse array is : ";
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
    cout<<"\n\n";
    
}

void sort(int n, int a[10]){
    system("cls");
    cout<<"\n\n Q5 Write a program to sort the given array.";
    cout<<"\n\nAnswer. ";
    string decision;
    for (int i = 0; i < n; i++)
    {   
        for (int j = i+1; j < n+1; j++)
        {
            if(a[j]<a[i]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
        
    }
    cout<<" The sorted array is : ";
    for (int k = 0; k < n; k++)
    {
        cout<<a[k]<<" ";
    }   
    cout<<"\n\n"; 
}
void kthelement(int n, int a[10]){
    sort(n, a);
    system("cls");
    int k;
    cout<<"\n\n Q6 Find the Kth largest and Kth smallest number in an array.";
    cout<<"\n\nAnswer.";
    cout<<" Enter the kth largest value: ";
    cin>>k;
    cout<<"\n The Value of kth largest element: "<<a[k];

    cout<<"\n\n Enter the kth smallest value: ";
    cin>>k;
    cout<<"\n The Value of kth largest element: "<<a[k];

    cout<<"\n\n";
}
void occurence(int n, int a[10]){
    system("cls");
    cout<<"\n\n Q7 Given an number n. Find the number of occurrences of n in the array.";
    cout<<"\n\nAnswers: ";
    cout<<"  Enter the number you want to find appereances: ";
    int occ, flag=0;
    cin>>occ;

    for (int i = 0; i < n; i++)
    {
        if(a[i]== occ)
            flag++;
    }
    cout<<"\n\n      The value "<<occ<<" appear in the array for "<<flag<<" times.";
    cout<<"\n\n";
    
}
/*void sorted(int n, int a[10]){
    system("cls");
    cout<<"\n\n Q8 Given an array which consists of only 0, 1 and 2. Sort the array without using any sorting algorithm.";
    cout<<"\n\nAnswers: ";
    cout<<"\n\n         Enter the elements: ";
    for (int i = 0; i < 3; i++)
    {
        cin>>a[i];
    }
    if(a[0]<a[1]){
        if(a[0]<a[2])
        {
            int temp = 
        }
    }
       
}*/


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
    cout<<"\n\n Q7 Given an number n. Find the number of occurrences of n in the array.";
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
    case 4:
        reverse(n, a);
    case 5:
        sort(n, a);
        break;
    case 6:
        kthelement(n, a);
        break;
    case 7:
        occurence(n, a);
        break;
    case 8:
        sorted(n, a);
        break;
    default:
        main();
        break;
    }
    return 0;
}