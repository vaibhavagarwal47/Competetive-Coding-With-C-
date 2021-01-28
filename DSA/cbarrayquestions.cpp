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


#include<iostream>
using namespace std;
int main() {
	int x,n;
	cin>>x;
	for(int i=0;i<x;i++){
		int currentsum=0,maxsum=0;
		cin>>n;
		int a[n];
		for(int j=0;j<n;j++){
			cin>>a[j];
		}
	for(int i=0;i<n;i++){
		currentsum = currentsum +a[i];
		if(currentsum<0){
			currentsum = 0;
		}
		maxsum = max(currentsum,maxsum);	
	}
	cout<<maxsum<<endl;
	}
	return 0;
}


#include<iostream>
using namespace std;
int main() {
	int x,n,currentsum=0,tempsum,maxsum=0,b=-1,sum=0,a[1000];
	cin>>x;
	for(int i=0;i<x;i++){
	cin>>n;
	for(int j=0;j<n;j++){
		cin>>a[j];
	}
	for(int i=0;i<n;i++){
		currentsum = currentsum +(a[i]*b);
		if(currentsum<0){
			currentsum = 0;
		}
		maxsum = max(currentsum,maxsum);
		
	}
	tempsum = maxsum;
	for(int i=0;i<n;i++){
		sum = sum + a[i];
	}
	maxsum = sum + tempsum;
	cout<<maxsum<<endl;
	}
	return 0;
}





#include<iostream>
using namespace std;
void bitonic(int arr[], int n)
{
    int inc[n]; // Length of increasing subarray ending at all indexes
    int dec[n]; // Length of decreasing subarray starting at all indexes
    int i, max;

    // length of increasing sequence ending at first index is 1
    inc[0] = 1;

    // length of increasing sequence starting at first index is 1
    dec[n-1] = 1;

    // Step 1) Construct increasing sequence array
    for (i = 1; i < n; i++)
    inc[i] = (arr[i] >= arr[i-1])? inc[i-1] + 1: 1;

    // Step 2) Construct decreasing sequence array
    for (i = n-2; i >= 0; i--)
    dec[i] = (arr[i] >= arr[i+1])? dec[i+1] + 1: 1;

    // Step 3) Find the length of maximum length bitonic sequence
    max = inc[0] + dec[0] - 1;
    for (i = 1; i < n; i++)
        if (inc[i] + dec[i] - 1 > max)
            max = inc[i] + dec[i] - 1;

    cout<<max<<endl;
}
int main(){
	int arr[10000],n,x;
	cin>>x;
	for(int i=0;i<x;i++){
		cin>>n;
		for(int j=0;j<n;j++){
			cin>>arr[j];
		}
		bitonic(arr,n);
	}
	
	return 0;
}




#include<iostream>
using namespace std;
int main() {
	int n,x,a[1000],b[1000],c[1000],c_len;
	cin>>x;
	for(int i=0;i<x;i++){
		cin>>a[i];
	}
	cin>>n;
	for(int j=0;j<n;j++){
		cin>>b[j];
	}
	int a_len = sizeof(a)/sizeof(a[0]);
	int b_len = sizeof(b)/sizeof(b[0]);
	if(a_len>b_len){
	c_len = a_len;
	}
	else 
	c_len = b_len;
	for(int r=c_len-1;r>=0;r--){
	for(int i=x-1,j=n-1;i>=0,j>=0;i--,j--){
		c[r] = a[i] + b[j];
	}
	}
	for(int r=0;r<c_len;r++){
		cout<<c[r];
	}
	return 0;
}