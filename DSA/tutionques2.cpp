/*
ques 1.

#include<iostream>
using namespace std;
void frequency_n(int n,int a[],int count,int ele){
	for(int i=0;i<n;i++){
		if(a[i]==ele){
			count++;
		}
	}
	cout<<count;
}
int main(){
	int n,a[1000],count=0,ele;
	cin>>n;
		for(int i=0;i<n;i++){
		cin>>a[i];
		}
		cout<<"enter the element";
		cin>>ele;
		frequency_n(n,a,count,ele);
	return 0;
}
*/

/*
#include<iostream>
using namespace std;
void pos_ele(int n,int a[],int pos,int ele,int flag){
	for(int i=0;i<n;i++){
		if(a[i]==ele){
			pos=i;
			flag=1;
			cout<<"the element is present at positions "<<pos<<endl;
		}
		
	}
	if(flag==0){
			cout<<"-1";
		}
	
}
int main(){
	int n,a[1000],pos,ele,flag=0;
	cin>>n;
		for(int i=0;i<n;i++){
		cin>>a[i];
		}
		cout<<"enter the element";
		cin>>ele;
		pos_ele(n,a,pos,ele,flag);
	return 0;
}
*/

/*
#include<iostream>
using namespace std;
void change_half(int n,int a[],int a1[],int mid){
	for(int i=0;i<mid;i++){
		a1[i]=a[i];
	}
	for(int i=mid;i<n;i++){
		a[i-mid]=a[i];
	}
	for(int i=mid;i<n;i++){
		a[i]=a1[i-mid];
	}
	for(int i=0;i<n;i++){
		cout<<a[i];
		}
}
int main(){
	int n,a[1000],a1[1000],mid;
	cout<<"enter even number";
	cin>>n;
		for(int i=0;i<n;i++){
		cin>>a[i];
		}
		mid = n/2;
		change_half(n,a,a1,mid);
	return 0;
}
*/

/*
#include<iostream>
using namespace std;
void interchange_ele(int n,int a[],int temp){
	for(int i=0;i<n;i=i+2){
		temp=a[i];
		a[i]=a[i+1];
		a[i+1]=temp;
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
		}
}
int main(){
	int n,a[1000],temp;
	cout<<"enter even number";
	cin>>n;
		for(int i=0;i<n;i++){
		cin>>a[i];
		}
		interchange_ele(n,a,temp);
	return 0;
}
*/

/*
#include<iostream>
using namespace std;
int checkPrime(int num){
    if (num <= 1){
     return 0; 
 }
   for (int j = 2; j <= num/2; j++){
      if (num % j == 0){
         return 0;
      }
      return 1;
   }
}
int main(){
   int n,arr[1000];
   int count=0;
   int isprime=0;
   cin>>n;
   for(int i=0;i<n;i++){
		cin>>arr[i];
		}
   for(int i=0;i<n;i++){
      isprime=checkPrime(arr[i]);
      if(isprime==1)
         count++;
   }
   cout<<"Count of number of primes in array : "<<count;
   return 0;
}
*/

/*
#include<iostream>
using namespace std;
void rev_arr(int x,int rem,int reverse,int a[],int i){  
	x=a[i]; 
  while(x!=0)    
  {    
     rem=x%10;      
     reverse=reverse*10+rem;    
     x=x/10;    
  }  
  a[i]=reverse;  
}
int main(){
   int n,a[1000],x,reverse=0,rem,i;
   cin>>n;
   for(int i=0;i<n;i++){
		cin>>a[i];
		}
	for(int i=0;i<n;i++){
		if(a[i]>9){
			rev_arr(x,rem,reverse,a,i);
		}
		cout<<a[i]<<" ";
	}
   return 0;
}
*/