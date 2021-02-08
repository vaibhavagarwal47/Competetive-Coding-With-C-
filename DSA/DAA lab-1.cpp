
//INSERTION SORT
#include <iostream>
using namespace std;
int main() 
{
    int n,key;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<n;i++)
    {
        key = a[i];
        int j = i-1;
        while(j>=0 && a[j]>key)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}

//sequential search
#include <iostream>
using namespace std;
int main() 
{
    int n,key,flag=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>key;
    for(int i=0;i<n;i++){
        if(a[i]==key){
            flag=1;
            break;
        }
        else{
            flag=0;
        }
    }
    if(flag==1){
         cout<<"element is present "<<endl;
    }
    else{
         cout<<"element not found"<<endl;
    }
    return 0;
}
