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
    rotate(a,a+m,a+n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    next_permutation(a,a+n);
     for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}