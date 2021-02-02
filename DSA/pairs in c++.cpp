#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    pair<int,int> p;
    cin>>p.first;
    cin>>p.second;
    cout<<p.first<<endl<<p.second<<endl;
    pair<pair<pair<int,int>,string>,string> x;
    x.first.first.first = 101;
    x.first.first.second = 99;
    x.first.second = " is = ";
    x.second = "mrp ";
    cout<<x.second<<x.first.second<<x.first.first.first<<x.first.first.second<<endl;

    return 0;
}