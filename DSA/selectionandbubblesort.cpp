#include<iostream>
using std::cin;
using std::cout;
using std::endl;

//selection sort
int main()
{
	int number;
	cout<<"Enter the number of elements: ";
	cin>>number;
	int arr[number];
	for(int i=0;i<number;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<number-1;i++)
	{
		int temp;
		for(int j=i+1;j<number;j++)
		{
			if(arr[i]>arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	cout<<"The sorted array is: ";
	for(int i=0;i<number;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}

// Bubblesort
/*
int main()
{	
	int number;
	cout<<"Enter the number of elements: ";
	cin>>number;
	int arr[number];
	for(int i=0;i<number;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<number;i++)
	{
		int temp;
		for(int j=0;j<number-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	cout<<"The sorted array is: ";
	for(int i=0;i<number;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
*/