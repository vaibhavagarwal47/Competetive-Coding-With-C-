//   Ques What is an Array. What are the various basic operations on Arrays?
//   -->  Array: Arrays are collections of similar datatype stored in contagious memory locations.
//        Various operations on arrays: 
//        1. Traverse: Printing array.
//        2. Searching
//        3. Sorting.
//        4. deletion.
//        5. Update.
//        6. Merging.

//        Below Programs how these all works -->

//------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#include<iostream>
#include<conio.h>

using namespace std;

int main();

int traverse(int n, int a[100]){
    cout<<"\n\n Traverse of array is: ";
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
   
    cout<<" \n\n Main Screen?(y/n): ";
    char d;
    cin>>d;
    if (d =='Y' || d =='y')
    {
        main();
    }
    return 0;
}
 
int Search(int n, int a[100]){
    cout<<"\n\n Enter the element to search: ";
    int search;
    cin>>search;
    for (int i = 0; i < n; i++)
    {
        if(search == a[i]){
            cout<<"\n\nElememt is present at location: "<<i+1;
            break;
        }
    }
    cout<<" \n\n Main Screen?(y/n): ";
    char d;
    cin>>d;
    if (d =='Y' || d =='y')
    {
        main();
    }
    return 0;
}
int Sort(int n, int a[100]){
    cout<<"Sorted array is: ";
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(a[i]>a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<" \n\n Main Screen?(y/n): ";
    char d;
    cin>>d;
    if (d =='Y' || d =='y')
    {
        main();
    }
    return 0;
    
}
int deletion(int n, int a[100]){
    cout<<"\n\n Enter the number you want to delete: ";
    int del;
    cin>>del;
    for (int i = 0; i < n; i++)
    {
        if(del == a[i]){
            int temp = a[i];
            for (int j = i; j < n; j++)
            {
                a[j] = a[j+1];
            }
            n--;
        }
    }
    cout<<"\n\n After the deletion: ";
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
        cout<<" \n\n Main Screen?(y/n): ";
    char d;
    cin>>d;
    if (d =='Y' || d =='y')
    {
        main();
    }
    return 0;
    
    
}

int main(){
    system("cls");
    int n, a[100];
    cout<<"\t\t Arrays"<<endl;
    cout<<"\n\n Enter the size of array: ";
    cin>>n;
    cout<<"\n\n Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    system("cls");
    
    cout<<"\n 1. Traverse";
    cout<<"\n 2. Searching";
    cout<<"\n 3. Sorting.";
    cout<<"\n 4. deletion.";
    cout<<"\n 5. Update.";
    cout<<"\n 6. Merging.";
    cout<<"\n\n Enter the option: ";
    int t;
    cin>>t;

    switch (t)
    {
    case 1:
        traverse(n, a);
        break;
    case 2:
        Search(n, a);
        break;
    case 3:
        Sort(n, a);
        break;
    case 4:
        deletion(n, a);
        break;
    default:
        break;
    }
    return 0;
}