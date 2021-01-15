#include<iostream>
#include<math.h>
using namespace std;
/*
ques 1.

int main(){
	int n,a[1000],sum=0;
	cout<<"enter the no of elements";
	cin>>n;
	cout<<"enter the array elements";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		if(a[i]%2==0){
			sum = sum +a[i];
		}
	}
	cout<<sum;
return 0;
}
*/
/*
ques 2.

int main(){
	int n,a[1000],sum=0;
	cout<<"enter the no of elements";
	cin>>n;
	cout<<"enter the array elements";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		if(a[i]%2!=0){
			sum = sum +a[i];
		}
	}
	cout<<sum;
	return 0;
}
*/
/*
ques 3.

int main(){
	int n,a[1000],sum=0;
	cout<<"enter the no of elements";
	cin>>n;
	cout<<"enter the array elements";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		if(i%2==0){
			sum = sum +a[i];
		}
	}
	cout<<sum;
	return 0;
}
*/
/*
ques 4.

int main(){
	int n,a[1000],sum=0;
	cout<<"enter the no of elements";
	cin>>n;
	cout<<"enter the array elements";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		if(i%2!=0){
			sum = sum +a[i];
		}
	}
	cout<<sum;
	return 0;
}
*/
/*
ques 5.

int main(){
	int n,a[1000];
	cout<<"enter the no of elements";
	cin>>n;
	cout<<"enter the array elements";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=n-1;i>=0;i--){
		cout<<a[i];
	}
	return 0;
}
*/
/*
ques 6.

int main(){
	int n,a[1000],flag=0;
	cout<<"enter the no of elements";
	cin>>n;
	cout<<"enter the array elements";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		if(a[i]%5==0 && a[i]%7==0){
			flag=1;
			cout<<a[i]<<",";
		}
		else if(flag==0){
			cout<<"element not found;";
		}
	}
	return 0;
}
*/
/*
ques 7.

int main(){
	int n,a[1000],small;
	cout<<"enter the no of elements";
	cin>>n;
	cout<<"enter the array elements";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	small=a[0];
	for(int i=0;i<n;i++){
		if(a[i]<small){
			small=a[i];
		}
	}
	cout<<small;
	return 0;
}
*/
/*
ques 8.

int main(){
	int n,a[1000],count=0;
	cout<<"enter the no of elements";
	cin>>n;
	cout<<"enter the array elements";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		if(a[i]<0){
			count++;
		}
	}
	cout<<count;
	return 0;
}
*/
/*
ques 9.

int main(){
	int n,a[1000],large;
	cout<<"enter the no of elements";
	cin>>n;
	cout<<"enter the array elements";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	large=a[0];
	for(int i=0;i<n;i++){
		if(a[i]>large){
			large=a[i];
		}
	}
	cout<<large;
	return 0;
}
*/
/*
ques 10.

int main(){
	int n,a[1000],large,seclarge;
	cout<<"enter the no of elements";
	cin>>n;
	cout<<"enter the array elements";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	large=a[0];
	seclarge=a[1];
	for(int i=0;i<n;i++){
		if(a[i]>large){
			large=a[i];
		}
	}
	for(int i=0;i<n;i++){
		if(a[i]!=large && a[i]>seclarge){
			seclarge=a[i];
		}
	}
	cout<<seclarge;
	return 0;
}
*/
/* 
ques 11.
problem in this ques.

int main(){
	int n,a[1000],x=0;
	cout<<"enter the no of elements";
	cin>>n;
	cout<<"enter the array elements";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		x = x + a[i] * pow(10,i);
	}
	cout<<x;
	return 0;
}
*/
/*
ques 12.

int main(){
	int n,a[1000],flag=0;
	cout<<"enter the no of elements";
	cin>>n;
	cout<<"enter the array elements";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]==a[j] && i!=j){
				cout<<"element found at positions:"<<i<<"&"<<j;
				flag=1;
			}

		}
		}
		if(flag==0){
			cout<<"no duplicates";
	}
	return 0;
}
*/

