/*
#include <iostream> 
using namespace std; 
deletion(int arr[10],int x,int n){
	for(int i=0;i<n;i++){
		if(arr[i]==x){
			for(int j=i;j<n-1;j++){
				arr[j]=arr[j+1];
				break;
				i--;
				n--;
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
int main() 
{ 
    int arr[100] = { 0 }; 
    int i, x, n = 10; 
    for (i = 0; i < 10; i++) 
       cin>>arr[i];
    for (i = 0; i < n; i++) 
        cout << arr[i] << " "; 
    cout << endl; 
    cin>>x; 
    deletion(arr,x,n); 
    return 0; 
}

*/
#include<iostream>
using namespace std;
int main()
{
    int arr[10], size=10, i, elem, j, found=0;
    cout<<"Enter 10 Array Elements: ";
    for(i=0; i<size; i++)
        cin>>arr[i];
    cout<<"\nEnter Element to Delete: ";
    cin>>elem;
    for(i=0; i<size; i++)
    {
        if(arr[i]==elem)
        {
            for(j=i; j<(size-1); j++)
                arr[j] = arr[j+1];
            found++;
            i--;
            size--;
        }
    }
    if(found==0)
        cout<<"\nElement doesn't found in the Array!";
    else
        cout<<"\nElement Deleted Successfully!";
    cout<<endl;
    for(int i=0;i<size;i++){
    	cout<<arr[i]<<" ";
    }
    return 0;
}