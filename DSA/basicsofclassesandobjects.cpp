//print the area of desired number of circles
/*
#include<iostream>
using std::cin;
using std::cout;
class Circle{
private:
	double radiusofcircle;
public:
	double setradius(double r){
		radiusofcircle = r;
		return radiusofcircle;
	}
	double getarea(){
		return (radiusofcircle*radiusofcircle*3.14);
	}
};
int main()
{
	int test;
	cout<<"enter the number of circles you wish to calculate = ";
	cin>>test;
	double radius;
	for(int i=0;i<test;i++){
		cin>>radius;
		Circle circle1;
		circle1.setradius(radius);
		cout<<"the area of "<<i+1<<" circle is "<<circle1.getarea()<<std::endl;
	}
	return 0;
}
*/
//print the area of circles by defining the class functions outside the class
/*
#include<iostream>
using std::cin;
using std::cout;
class Circle{
private:
	double radiusofcircle;
public:
	double setradius(double);
	double getarea();
};
double Circle::setradius(double r)
{
	radiusofcircle = r;
	return radiusofcircle;
}
double Circle::getarea()
{
	return (radiusofcircle*radiusofcircle*3.14);
}
int main()
{
	int test;
	cout<<"enter the number of circles you wish to calculate = ";
	cin>>test;
	double radius;
	for(int i=0;i<test;i++){
		cin>>radius;
		Circle circle1;
		circle1.setradius(radius);
		cout<<"the area of "<<i+1<<" circle is "<<circle1.getarea()<<std::endl;
	}
	return 0;
}
*/
//print the area of rectangles using classes and objects
/*
#include<iostream>
using std::cin;
using std::cout;
using std::endl;
class Rectangle{
private:
	double length;
	double width;
public:
	double getlength();
	double getwidth();
	double setlength();
	double setwidth();
	double getarea();
};
double Rectangle::setlength()
{
	double l;
	cout<<"Enter length: ";
	cin>>l;
	length = l;
	return length;
}
double Rectangle::setwidth()
{
	double w;
	cout<<"Enter width: ";
	cin>>w;
	width = w;
	return width;
}
double Rectangle::getlength()
{
	return length;
}
double Rectangle::getwidth()
{
	return width;
}
double Rectangle::getarea()
{
	return length*width;
}
int main()
{
	int test;
	cout<<"Enter the number of rectangles: ";
	cin>>test;
	Rectangle rect[test];
	for(int i=0;i<test;i++)
	{
		rect[i].setlength();
		rect[i].setwidth();
		cout<<"The length is: "<<rect[i].getlength()<<endl;
		cout<<"The width is: "<<rect[i].getwidth()<<endl;
		cout<<"The area of Rectangle "<<i+1<<" is:"<<rect[i].getarea()<<endl;
	}
	return 0;
}
*/
//to study dafault constructor and parameterized conastructor
/*
#include<iostream>
using std::cin;
using std::cout;
using std::endl;
class Sale{
private:
	double taxrate;
public:
	Sale(){	//default constructor
		taxrate = 1.5;
	}
	Sale(double rate){	//do not use datatype for constructor
		taxrate = rate;
	}
	double totalcost(double cost){
		double total = cost + (cost*taxrate);
		return total;
	}
};
int main()
{
	Sale item1(2.5);
	Sale item2;
	cout<<" 1st one is "<<item1.totalcost(50)<<endl;
	cout<<" 2nd one is "<<item2.totalcost(50)<<endl;
	return 0;
}
*/
//calculate the price of a carpet using nested class
#include<iostream>
using std::cin;
using std::cout;
using std::endl;
class Rectangle
{
private:
	double length;
	double width;
public:
	double setlength();
	double setwidth();
	double getlength();
	double getwidth();
	double getarea();
};
double Rectangle::setlength()
{
	double l;
	cout<<"Enter length of the carpet: ";
	cin>>l;
	length = l;
	return length;
}
double Rectangle::setwidth()
{
	double w;
	cout<<"Enter width of the carpet: ";
	cin>>w;
	width = w;
	return width;
}
double Rectangle::getlength()
{
	return length;
}
double Rectangle::getwidth()
{
	return width;
}
double Rectangle::getarea()
{
	return length*width;
}
class Carpet
{
private:
	double priceperyard;
	Rectangle size;
public:
	double setpriceperyard(double p)
	{
		priceperyard = p;
		return priceperyard;
	}
	void getdimensions()
	{
		size.setlength();
		size.setwidth();
	}
	double getpriceperyard()
	{
		return (size.getarea()*priceperyard);
	}
};
int main()
{
	Carpet purchase;
	double price;
	cout<<"Enter the price to set: ";
	cin>>price;
	purchase.setpriceperyard(price);
	purchase.getdimensions();
	cout<<"The price of carpet is: "<<purchase.getpriceperyard()<<endl;
	return 0;
}