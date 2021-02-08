#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int n,q,b;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cin>>q;
	while(q--){
		cin>>b;
        auto low = lower_bound(a,a+n,b);
		auto up = upper_bound(a,a+n,b)-1;
		if((low-a)==n || (up-a)==n){
			cout<<"-1 -1"<<endl;
		}
		else
		cout<<low-a<<" "<<up-a<<endl;
	}
	//for(int k=0;k<q;k++){
		
	//}
	return 0;
}