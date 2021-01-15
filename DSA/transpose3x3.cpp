/*
#include<iostream>
using namespace std;
int main(){
	int a[3][3];
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin>>a[i][j];
		}
	}
	for(int i=0;i<3;i++){
		cout<<endl;
		for(int j=0;j<3;j++){
			cout<<a[j][i]<<" ";
		}
	}
	return 0;
}
*/

/*
#include<iostream>
using namespace std;
int main(){
	int a1[3][3],a2[3][3],a[3][3];
	cout<<"1st matrix";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin>>a1[i][j];
		}
	}
	cout<<"2nd matrix";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin>>a2[i][j];
		}
	}
	for(int i=0;i<3;i++){
		cout<<endl;
		for(int j=0;j<3;j++){
			a[i][j]= a1[i][j] + a2[i][j];
			cout<<a[i][j]<<"\t";
		}
	}
	return 0;
}
*/

#include<iostream>
using namespace std;
void diagonal(int a[3][3]){
	for(int i=0;i<3;i++){
		cout<<endl;
		for(int j=0;j<3;j++){
			if(i==j){
				cout<<"0"<<"\t";
			}
			else if(i<j){
				cout<<"1"<<"\t";
			}
			else if(i>j){
				cout<<"-1"<<"\t";
			}
		}
	}
}
int main(){
	int a[3][3];
	diagonal(a);
	
	return 0;
}