//print number by pass by value
/*
#include <iostream>
using namespace std;
int referenceparameter(int num){
	num = num*5;
	cout<<num<<endl;
	return num;
}
int main(){
	int value;
	cin>>value;
	cout<<value<<endl;
	referenceparameter(value);
	cout<<value;
	return 0;
}
*/
//print number by pass by reference
/*
#include <iostream>
using namespace std;
int referenceparameter(int &num){
	num = num*5;
	cout<<num<<endl;
	return num;
}
int main(){
	int value;
	cin>>value;
	cout<<value<<endl;
	referenceparameter(value);
	cout<<value;
	return 0;
}
*/
/*
#include <iostream>
using namespace std;
void getnum(int &num1,int &num2){
	cin>>num1;
	cin>>num2;
}
void setnum(int num1,int num2){
	int temp;
	if(num1>num2){
		temp = num1;
		num1 = num2;
		num2 = temp;
	}
	cout<<"small one is "<<num1<<endl<<"big one is "<<num2<<endl;
}
int main()
{	
	int n,m;
	getnum(n,m);
	setnum(n,m);
	cout<<n<<endl<<m<<endl;
	return 0;
}
*/
// OPERATOR OVERLOADING
/*
#include<iostream>
using namespace std;
double square(double answer)
{
	answer = 100;
	return answer;
}
int square(int n,int m)
{
	n = n*2;
	m = m*3;
	int x = n+m;
	return x;
}
int main()
{
	int big,small;
	double ans;
	cin>>big>>small;
	cout<<square(big,small)<<endl;
	cout<<square(ans);
	return 0;
}
*/
/*
//to show the use of exit function
#include<iostream>
#include<cstdlib> //needed to use exit function
using namespace std;
void function(int n){
	cout<<n<<endl;
	cout<<"hi there"<<endl;
	exit(0);
	cout<<"bye!";
}
int main()
{
	int number;
	cin>>number;
	function(number);
	return 0;
}
*/
