#include<iostream>
#include<windows.h>
#include<algorithm>
using namespace std;
bool compare(int a,int b){
	return a<=b;
}
int main(){
	HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE);
	int n;
	cin>>n;
	int money[] = {1,2,5,10,20,50,100,200,500,2000};
	while(n>0){
	int lower = lower_bound(money,money+10,n,compare) - money - 1;
	int m = money[lower];
	SetConsoleTextAttribute(screen,3);
	cout<<m<<endl;
	n = n-m;
	}
	SetConsoleTextAttribute(screen,7);
	return 0;
}