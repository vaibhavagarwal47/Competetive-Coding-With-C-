#include <iostream>
#include<math.h> 
using namespace std;
void factor_m(int m,int b[],int j){
    j=0;
    while (m%2==0) 
	{ 
		b[j]=2;
        j++;
		m = m/2; 
	} 
	for (int i = 3; i <= sqrt(m); i = i + 2) 
	{ 
		while (m % i == 0) 
		{ 
			b[j]=i;
            j++;
			m = m/i; 
		} 
	} 
	if (m > 2) 
		b[j]=m;
        j++;
        for(int i=0;i<j;i++){
            cout<<b[i]<<" ";
        }
} 
void factor_n(int n,int a[],int k){
    k=0;
    	while (n%2==0) 
	{ 
		a[k]=2;
        k++;
		n = n/2; 
	} 
	for (int i = 3; i <= sqrt(n); i = i + 2) 
	{ 
		while (n % i == 0) 
		{ 
			a[k]=i;
            k++;
			n = n/i; 
		} 
	} 
	if (n > 2) 
		a[k]=n;
        k++;
        for(int i=0;i<k;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
}
int main() 
{ 
	int n,m,a[100],b[100],k,j,c[100],count=0;
    cin>>n>>m;
	factor_n(n,a,k);
    factor_m(m,b,j);  
    for(int i=0;i<k;){
        for(int y=0;y<j;){
            if(a[i]==b[y]){
               c[i]=a[i];
               i++;
               y++;
               count++;
            }
        }
    }    
   for(int i=0;i<count;i++){
       cout<<c[i]<<" ";
   }
	return 0; 
} 
