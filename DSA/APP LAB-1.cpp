#include <iostream>
using namespace std;
int main() {
    int a,b;
    cin>>a>>b;
    if(a>b){
        cout<<a<<" is greater";
    }
    else 
    cout<<b<<" is greater";
    return 0;
}



#include <iostream>
using namespace std;
int main() {
    int a;
    cin>>a;
    if(a%2==0){
        cout<<a<<" is even";
    }
    else 
    cout<<a<<" is odd";
    return 0;
}



#include <iostream>
using namespace std;
int main() {
    int a,mul;
    cin>>a;
    for(int i=1;i<=10;i++){
        mul = 0;
        mul = a*i;
        cout<<a<<" * "<<i<<" = "<<mul<<endl;

    }
    return 0;
}



#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int i=0;i<=n;i++){
        if(i%2==0){
       cout<<i<<endl;
        }
    }
    return 0;
}



#include <iostream>
using namespace std;
int main() {
    int n,fac=1;
    cin>>n;
    while(n>0){
        fac = fac * n;
        n--;
    }
    cout<<fac;
    return 0;
}



#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}



#include <iostream>
using namespace std;
int main() {
    int n,flag=0;
    cin>>n;
    if(n<2 && n>=0){
        flag = 1;
        cout<<"number is not prime";
    }
    for(int i=2;i<n/2;i++){
        if(n%i==0){
            flag = 1;
            cout<<"number is not prime";
            break;
        }
    }
        if(flag==0){
            cout<<"number is prime";
    }
    return 0;
}



#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int k=n-i;k>0;k--){
            cout<<" ";
        }
        for(int j=0;j<i;j++){
            cout<<" *";
        }
        cout<<endl;
    }
    return 0;
}