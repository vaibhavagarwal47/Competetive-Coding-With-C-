#include <iostream> 
using namespace std; 
  
void insert(int a[], int size, int element)
{
  size++;
  for(int i=0;i<size;i++)
  { 
    if(a[i]>element)
    {
      for(int j=size; j>=i; j--)
	a[j] = a[j-1];
      a[i] = element;
      break;
    }
  }
  cout<<endl;
  for(int i=0;i<size;i++)
    cout<<a[i]<<" ";
}

int main() 
{
  int arr[100], size, element;
  cout<<"Enter the size of array:- ";
  cin>>size;
  cout<<"\nEnter the array:- ";
  for(int i=0;i<size;i++)
  {
    cin>>arr[i];
  }
  cout<<"\nEnter element you want to insert:- ";
  cin>>element;

  insert(arr, size, element);
  
    return 0; 
}