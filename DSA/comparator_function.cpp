#include <iostream>
#include<algorithm>
using namespace std;
bool compare(int x,int y){
    return x > y;
}
int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n,compare);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
