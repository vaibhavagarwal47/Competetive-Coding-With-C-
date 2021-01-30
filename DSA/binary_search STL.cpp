#include <iostream>
#include<algorithm>
using namespace std;
int main() {
    int n,key;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>key;
    bool bin_sh = binary_search (a,a+n,key);
    if(bin_sh==1){
    cout<<"element is present";
    }
    else 
    {
        cout<<"not present";
    }
    auto lower = lower_bound(a,a+n,40);
    cout<<lower-a<<endl;
    auto upper = upper_bound(a,a+n,40);
    cout<<upper-a<<endl;
    cout<<"occurence of the element is "<<upper-lower;
    return 0;
}
