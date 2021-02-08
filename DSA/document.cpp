#include<iostream>
using namespace std;
int main(){
    long long int n;
	int a[1000],i=0,flag=0;
	cin>>n;
	while(n>0){
		a[i] = n%10;
		n =n/10;
		i++;
	}
	for(int j=0;j<i;j++){
		for(int k=j+1;k<i;k++){
			if(a[j]==a[k]){
				flag=1;
				break;
			}
		}
	}
	if(flag==0){
		cout<<"all the numbers are unique"<<endl;
	}
	else if(flag==1){
		cout<<"more than 1 elements are same"<<endl;
    }
	return 0;
}