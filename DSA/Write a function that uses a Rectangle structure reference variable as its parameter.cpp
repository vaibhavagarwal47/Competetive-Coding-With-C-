//Write a function that uses a Rectangle structure reference variable as its parameter
//and stores the user's input in the structure's members.
#include<iostream>
using std::cin;
using std::cout;
using std::endl;
struct rectangle
{
	double length;
	double width;
};
rectangle setdimension()
{	
	rectangle rect;
	cout<<"Enter the length";
	cin>>rect.length;
	cout<<"Enetr the width";
	cin>>rect.width;
	return rect;
}
void getdimensions(const rectangle& r)
{
	cout<<"the length is "<<r.length;
	cout<<"the width is "<<r.width;
}
int main()
{
	rectangle r1;
	r1 = setdimension();
	getdimensions(r1);
}