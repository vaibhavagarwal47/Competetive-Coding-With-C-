#include <iostream>
#include "Rectangle.h"
using namespace std;
int main()
{
	Rectangle rect1;
	double reclen,recwid;
	cout<<"Enter the length: ";
	cin>>reclen;
	cout<<"Enter the width";
	cin>>recwid;
	if(!rect1.setlength(reclen))
	{
		cout<<"Length is invalid";
	}
	else if(!rect1.setwidth(recwid))
	{
		cout<<"Width is invalid";
	}
	else
	{
		cout<<rect1.getlength()<<endl;
		cout<<rect1.getwidth()<<endl;
		cout<<rect1.getarea();
	}
	return 0;
}