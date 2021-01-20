#include<iostream>
#include<cstring>
using namespace std;
/*
int main(){
	char a[50];
	cin.getline(a,50,'$');
	for(int i=0;i<strlen(a);i++){
		if(a[i]>='a' && a[i]<='z'){
			a[i]= a[i] -32;
		}
		else if(a[i]>='A' && a[i]<='Z'){
			a[i]= a[i] +32;
		}
	}
	for(int i=0;i<strlen(a);i++){
	cout<<a[i];
}
	return 0;
}
*/

/*

int main(){
	char a[100];
	int count=0;
	cin.getline(a,100,'$');
	for(int i=0;i<strlen(a);i++){
		if(a[i]=='a'){
			count++;
		}
		else if(a[i]=='e'){
			count++;
		}
		else if(a[i]=='i'){
			count++;
		}
		else if(a[i]=='o'){
			count++;
		}
		else if(a[i]=='u'){
			count++;
		}
	}
	cout<<count;
	return 0;
}
*/

/*
int main(){
	char a[100];
	int count_l=0,count_u=0,count_s=0,count_sp=0,count_n=0;
	cin.getline(a,100,'.');
	for(int i=0;i<strlen(a);i++){
		if(a[i]>='a' && a[i]<='z'){
			count_l++;
		}
		else if(a[i]>='A' && a[i]<='Z'){
			count_u++;
		}
		else if(a[i]>='0' && a[i]<='9'){
			count_n++;
		}
		else if(a[i]==' '){
			count_sp++;
		}
		else {
			count_s++;
		}

	}
	cout<<"lowercase are= "<<count_l<<"\nuppercase are= "<<count_u<<"\nspaces are= "<<count_sp<<"\nnumbers are= "<<count_n<<"\nspecial ch are= "<<count_s;
	return 0;
}
*/
