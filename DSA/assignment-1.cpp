#include <iostream>
#include<math.h>
using namespace std;
int main() {
    long long int mod = pow(10,9)+7;
    unsigned long long int number=1;
    int N;
    cin>>N;
    int n= N;
    for(int i=0;i<n;++i){
        number = (number * (pow(N,1+i)));
        --N;
    }
    cout<<number % mod;
    return 0;
}