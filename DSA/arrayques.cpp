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
/* 
book ques 15,16,17,18,19,20			problem aa rhi hai

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
void isuppertriangle(int n,int a[100][100]){
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			if(i>j && a[i][j]==0)
		
	
	cout<<"1";
}
void islowertriangle(int n,int a[100][100]){
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			if(i<j && a[i][j]==0)
				cout<<"1";
}
void summetric(int n,int a[100][100]){
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			if(a[i][j]==a[j][i])
				cout<<"symmetric";
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
		case 4:isuppertriangle(n,a);
		break;
		case 5:islowertriangle(n,a);
		break;
		case 6:summetric(n,a);
		break;
	}
	return 0;
}
*/

/*
book ques 21.

#include<iostream>
using namespace std;
int main(){
	int a,arr1[100][100],arr2[100][100];
	cin>>a;
	for(int i=0;i<a;i++){
		for(int j=0;j<a;j++){
		cin>>arr1[i][j];
		}
	}
	for(int i=0;i<a;i++){
		for(int j=0;j<a;j++){
		cin>>arr2[i][j];
		}
	}
	int x=2,y=3;
	for(int i=0;i<a;i++){
		for(int j=0;j<a;j++){
		arr1[i][j]= x * arr1[i][j];
		arr2[i][j]= y * arr2[i][j];
		}
	}
	for(int i=0;i<a;i++){
		for(int j=0;j<a;j++){
			cout<<arr1[i][j]+arr2[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
*/
/*
book ques 23
#include<iostream>
using namespace std;
int main(){
	int n,a[100],r,rem;
	cin>>n;
	r= sizeof(n);
	for(int i=0;i<r;i++){
	rem = n%10;
	a[i]=rem;
	cout<<a[i]<<endl;
	n=n/10;
	}
	return 0;
}
*/
/*
binary search

#include<iostream>
using namespace std;
int main(){
	int n,a[1000],start,end,mid,val,flag=0;;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cin>>val;
	start = a[0];
	end = a[n-1];
	while(start<=end){
		mid = (start + end)/2;
		if(val==mid){
			cout<<"element found";
			flag=1;
			break;
		}
		else if(val<mid){
			end  = mid-1;
		}
		else if(val>mid){
			start = mid+1;
		}
	}
	if(flag==0){
		cout<<"element not found";
	}

	return 0;
}
*/
/* 
linear search

#include<iostream>
using namespace std;
int main(){
	int n,a[1000],val,flag=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cin>>val;
	for(int i=0;i<n;i++){
		if(a[i]==val){
			flag=1;
			cout<<"element found at location "<<i;
			break;
		}
	}
	if(flag==0){
		cout<<"element not found";
	}
	return 0;
}
*/
/*
selection sort

#include<iostream>
using namespace std;
int main(){
	int n,a[1000],temp;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		if(a[i]>a[i+1]){
			temp = a[i];
			a[i]=a[i+1];
			a[i+1]=temp;
		}
	}
	for(int i=0;i<n;i++){
		cout<<a[i];
	}
	return 0;
}
*/
/*
bubble sort

#include<iostream>
using namespace std;
int main(){
	int n,a[1000],temp;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				temp = a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
*/
/*
insertion sort dobara krna hai

#include<iostream>
using namespace std;
int main(){
	int n,a[1000],temp;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		for(int j=1;j<n;j++){
			if(a[i]>a[j] && i!=j){
				temp = a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
*/
/*
maximum sum  of subarrays
#include<iostream>
using namespace std;
int main(){
	int n,a[1000],sum=0,maxsum=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			sum=0;
			for(int k=i;k<=j;k++){
				sum = sum+a[k];
				
			}
			if(sum>maxsum){
				maxsum=sum;
			}
			cout<<sum<<endl;
		}
	}
	cout<<maxsum;
	return 0;
}
*/
/*
wave print of 2d array

#include<iostream>
using namespace std;
int main(){
	int n,m,a[1000][1000];
	cin>>n;
	cin>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
	for(int j=0;j<m;j++){
		if(j%2==0){
			for(int i=0;i<n;i++){
				cout<<a[i][j]<<" ";
			}
		}
		else 
			for(int i=n-1;i>=0;i--){
				cout<<a[i][j]<<" ";
		}
	}
	return 0;
}
*/

/*
#include<iostream>
using namespace std;
void spiral_print(int n,int m,int a[1000][1000]){
	int sr=0,er=m-1,sc=0,ec=n-1;
	while(sr<=er && sc<=ec){
		for(int i=sc;i<=ec;i++){
			cout<<a[sr][i]<<" ";
		}
		sr++;
		for(int i=sr;i<=er;i++){
			cout<<a[i][ec]<<" ";
		}
		ec--;
		if(er>sr){
		for(int i=ec;i>=sc;i--){
			cout<<a[er][i]<<" ";
		}
        
		er--;
        }
		if(ec>sc){
		for(int i=er;i>=sr;i--){
			cout<<a[i][sc]<<" ";
		}
        
		sc++;
        }
		}
	}
int main(){
	int n,m,a[1000][1000];
	cin>>n;
	cin>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
	spiral_print(n,m,a);
return 0;
}
*/

/*
CB STRING QUES 1. 
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main(){
  char a[10];
  cin>>a;
  for(int i=0; i<strlen(a)-1;i++)
  {
    cout<<a[i];
    cout<<a[i+1] - a[i]; 
  }
  cout<<a[strlen(a)-1];
  return 0;
  }

*/
/*
CB STRING QUES 1. 

#include<iostream>
#include<string>

using namespace std;

int main(){
  char a[10];
  cin>>a;
  int i=0;
  for(i=0;a[i+1]!='\0' ; i++)
  {
    int diff = a[i+1]-a[i];
    cout<<a[i]<<diff;
  }
  cout<<a[i];
  return 0;
  }
  */

