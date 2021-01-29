#include <iostream>
using namespace std;

int main() {
    int x,a[50];
    cin>>x;
    for(int i=0;i<x;i++){
        int fac = 1;
        cin>>a[i];
        while(a[i]>0){
            fac = fac* a[i];
            a[i]--;
        }
        cout<<fac<<endl;
        }
	return 0;
}
