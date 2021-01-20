#include<iostream>
#include<cstring>
using namespace std;
int main() {
	int flag;
	char a[1000],b;
	cin>>a;
	//strcpy(b,a);
	for(int i=0;i<strlen(a);i++){
		flag=0;
	b = a[i];
	for(int j=0;j<strlen(a);j++){
		if(a[j]==b){
			flag++;
		}
		
	}
	cout<<a[i]<<flag;
	}
	return 0;
}

#include<iostream>
#include<cstring>
using namespace std;
int main() {
	int flag=-1,freq[256]={0};
	char a[1000],b;
	cin>>a;
	for(int i=0;i<strlen(a);i++){
		freq[a[i]]++;
	}
	for(int j=0;j<strlen(a);j++){
		if(flag<freq[a[j]]){
			flag= freq[a[j]];
			b = a[j];
		}
	}
	cout<<b;
	return 0;
}