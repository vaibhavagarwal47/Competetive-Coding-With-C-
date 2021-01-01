#include<iostream>
#include<iomanip>

using namespace std;

int main(){
  
  int x;
  float amt,balance;
  cin>>x>>amt;

  if(x%5==0){

    if(x<amt-0.50)
      balance = amt-x-0.50;
    else
      balance = amt;
    }
  else{
    balance = amt;
    }
    cout<<fixed<<setprecision(2)<<balance;
  
  return 0;
}
