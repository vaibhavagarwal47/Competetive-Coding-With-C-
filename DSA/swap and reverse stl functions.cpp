#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
   // rotate(a,a+m,a+n);
     swap(a[0],a[2]);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
   // next_permutation(a,a+n);
     reverse(a,a+n);
     for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
       cout<<endl<<max(a[0],a[4])<<endl<<min(a[1],a[8]);
    return 0;
}