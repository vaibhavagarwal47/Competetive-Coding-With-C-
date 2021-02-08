#include<iostream>
#include<windows.h>
using namespace std;
long long int factorial(int num)
{
	long long int fac = 1;
	while(num>0){
		fac = fac*num;
		num--;
	}
	return fac;
}
long long int computenumber(int whole,int select)
{
	return(factorial(whole)/(factorial(select)* factorial(whole - select)));
}
int getlotteryinfo(int &totalnum,int& selectnum)
{	
	
	cout<<"Enter the numbers(1-12) to pick from:"<<endl;
	cin>>totalnum;
	
	cout<<"Enter the numbers you wish to play with:"<<endl;
	cin>>selectnum;
}
int main(){
	HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE);
	int totalnum,selectnum;
	long long waystowin;
	double prob;
	SetConsoleTextAttribute(screen,12);
	getlotteryinfo(totalnum,selectnum);
	waystowin = computenumber(totalnum,selectnum);
	SetConsoleTextAttribute(screen,14);
	cout<<"Your chance of winning the lottery is 1 in "<<waystowin<<endl<<endl;
	prob = 1.0/waystowin;
	SetConsoleTextAttribute(screen,11);
	cout<<"Your probability of winning is: "<<prob<<"%"<<endl;
	Sleep(300);
	SetConsoleTextAttribute(screen,7);
	return 0;
}