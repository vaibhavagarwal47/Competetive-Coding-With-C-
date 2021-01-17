/* 
book ques 1.

#include<iostream>
using namespace std;
int main(){
	int a[3][5],sum1,sum2,count=0;
	float avg1,avg2;
	for(int i=0;i<3;i++){
		cout<<"enter the marks of student"<<i+1<<"\n";
		for(int j=0;j<5;j++){
			cin>>a[i][j];
		}
	}
	for(int j=0;j<5;j++){
		sum1 = 0;
		for(int i=0;i<3;i++){
			sum1 = sum1 + a[i][j];
		}

		avg1 = (float)sum1/3;
	cout<<"\nthe average marks of each student in each subject is "<<avg1;
	}
	for(int i=0;i<3;i++){
		sum2 = 0;
		for(int j=0;j<5;j++){
			sum2 = sum2 + a[i][j];
		}
		avg2 = (float)sum2/5;
		cout<<"\nthe average marks of each student is "<<avg2;
		if(avg2 < 50){
			count++;
		}
	}
	cout<<"\nnumber of students who scored less than 50 avg marks are="<<count;
	for(int i=0;i<3;i++){
		cout<<"enter the marks of student"<<i+1<<"\n";
		for(int j=0;j<5;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
*/
/*
book quees 2.

#include<iostream>
using namespace std;
int main(){
	int n,a[100],pair=0;
	cin>>n;
	for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n;i++){
			for(int j=n-1;j>0;j--){
				if(a[i]+a[j]==50 && i!=j){
					pair=1;
					if(i<j){
					cout<<"\nthe pair is"<<a[i]<<"&"<<a[j];
					}
					else if(i>=j){
						break;
					}
				}

			}
		}
		if(pair==0){
					cout<<"there is no pair whose sum is 50";
				}
		return 0;
}
*/
/*
book ques 3.

#include<iostream>
using namespace std;
int main(){
	int n,a[100],temp;
	cin>>n;
	for(int i=0;i<n;i++){
			cin>>a[i];
		}
		if(n>2){
			temp=a[1];
			a[1]=a[n-2];
			a[n-2]=temp;
		}
		else if(n<=2){
			cout<<"interchange not possible";
			return 0;
		}
		for(int i=0;i<n;i++){
			cout<<a[i]<<" ";
		}
		return 0;
}
*/
/*
book ques 4.

#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n,a[100],sum=0;
	cin>>n;
	for(int i=0;i<n;i++){
			cin>>a[i];
		}
	for(int i=0;i<n;i++){
		a[i] = a[i]*a[i];
		sum = sum+a[i];
	}
	cout<<"the sum is "<<sum;
	return 0;
}
*/
/*
book ques 5.

#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n,b,a[100][100],sum=0;
	float mean;
	cin>>n;
	cin>>b;
	for(int i=0;i<n;i++){
		for(int j=0;j<b;j++){
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<b;j++){
			sum = sum+ a[i][j];
		}
	}
	cout<<"the sum is="<<sum<<endl;
	mean = (float)sum/(n*b);
	cout<<mean;
	return 0;
}
*/
/*
book ques 9.

#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n,a[100][100],prod=1;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i<j){
			prod= prod * a[i][j];
			}
		}
	}
	cout<<prod;
	return 0;
}
*/
/*
book ques 10.

#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n,b,a[100][100],count=0;
	float mean;
	cin>>n;
	cin>>b;
	for(int i=0;i<n;i++){
		for(int j=0;j<b;j++){
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<b;j++){
			if(a[i][j]!=0){

			count++;
			}
		}
	}
	cout<<count;
	return 0;
}
*/
/*
book ques 11.

#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n,b,a[100][100],a1[100][100],a2[100][100];
	cin>>n;
	cin>>b;
	for(int i=0;i<n;i++){
		for(int j=0;j<b;j++){
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<b;j++){
			if(a[i][j]%2==0){
				a1[i][j]=a[i][j];
			}
			else if(a[i][j]%2!=0){
				a2[i][j]=a[i][j];
			}
		}
	}
	cout<<"even elements are=\n";
	for(int i=0;i<n;i++){
		for(int j=0;j<b;j++){
			cout<<a1[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"odd elements are=\n";
	for(int i=0;i<n;i++){
		for(int j=0;j<b;j++){
			cout<<a2[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
*/
/*
book ques 12.
#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n1,n2,m,index=0;
	float a1[1000],a2[1000],arr[1000];
	cin>>n1;
	for(int i=0;i<n1;i++){
			cin>>a1[i];
	}
	cin>>n2;
	for(int i=0;i<n2;i++){
			cin>>a2[i];
	}
	for(int i=0;i<n1;i++){
			arr[index]=a1[i];
			index++;
	}
	for(int i=0;i<n2;i++){
			arr[index]=a2[i];
			index++;
	}
	m = n1 + n2;
	for(int i=m-1;i>=0;i--){
			cout<<arr[i]<<" ";
	}
	return 0;
}
*/
/*
book ques 14.  problem aa rhi hai
#include<iostream>
using namespace std;
int main(){
	int p,q,r,a[100][100][100],a1[100][100][100],sum=0,prod=1;
	cin>>p;
	cin>>q;
	cin>>r;
	for(int i=0;i<p;i++){
		for(int j=0;j<q;j++){
			for(int k=0;k<r;k++){
			cin>>a[i][j][k];
			}
		}
	}
	for(int i=0;i<p;i++){
		for(int j=0;j<q;j++){
			for(int k=0;k<r;k++){
				a1[i][j][k]=a[i][j][k];
			cout<<a[i][j][k]<<"\t";
			sum = sum+ a[i][j][k] + a1[i][j][k];
			prod = prod * a[i][j][k] * a1[i][j][k];
			}
		}
	}
	cout<<sum<<endl;
	cout<<prod<<endl;
	for(int i=0;i<p;i++){
		for(int j=0;j<q;j++){
			for(int k=0;k<r;k++){
			cout<<a[j][i][k];
			}
		}
	}
	return 0;
}
*/

#include<iostream>
using namespace std;
void diagonal_sum(int n,int a[100][100],int sum){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==j){
				sum = sum+ a[i][j];
			}
		}
	}
	cout<<sum<<endl;
}
void diagonal_above(int n,int a[100][100],int sum){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i<j){
				sum = sum+ a[i][j];
			}
		}
	}
	cout<<sum<<endl;
}
void diagonal_below(int n,int a[100][100],int sum){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i>j){
				sum = sum+ a[i][j];
			}
		}
	}
	cout<<sum<<endl;
}

int main(){
	int n,a[100][100],sum=0,x;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	cout<<"enter number to search\n1 for sum of diagonal elements\n2 for sum of diagonal above elements\n3 for sum of diagonal below elements";
	cin>>x;
	switch(x){
		case 1:diagonal_sum(n,a,sum);
		break;
		case 2:diagonal_above(n,a,sum);
		break;
		case 3:diagonal_below(n,a,sum);
		break;
	}
	return 0;
}