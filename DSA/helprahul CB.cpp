#include<iostream>
using namespace std;
int find_key(int a[],int n,int key)
{
int start,mid,end;
start = 0;
	end = n-1;
	while(start<=end)
	{
	    mid = (start + end)/2;
	    if(a[mid]==key)
        {
		    return mid;
	    }
	    else if(a[start]<=a[mid])
        {
			if(key>=a[start] && key<=a[mid])
            {
				end = mid -1;
			}
			else
            {
				start = mid + 1;
			}
	    }
	    else
        {
		    if(key>=a[mid] && key<=a[end])
            {
			start = mid + 1;
		    }
		    else
            {
			end = mid -1;
		    }
	    }
	}
    return -1;
}
int main() 
{
	int n,key;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
    {
		cin>>a[i];
	}
	cin>>key;
    cout<<find_key(a,n,key);
	return 0;
}