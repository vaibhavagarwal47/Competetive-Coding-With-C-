#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n,m,a[1000],l,r,x,sum;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cin>>m;
	sort(a,a+n);
	for(int i=0;i<n;i++){
		l=i;
		r=n-1;	
		sum = m -a[i];	
		for(int j=i;j<n;j++){
			x=i+1;
			while(x<r){
				if(a[x]+a[r]==sum){
					 cout<<a[l]<<","<<" "<<a[x]<<" "<<"and"<<" "<<a[r];
               		 cout<<endl;
				}	
			r--;
			}
		}
	}
	return 0;
}