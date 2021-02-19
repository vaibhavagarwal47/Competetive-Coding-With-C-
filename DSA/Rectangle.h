//it is rectangle.h class declaration file
#ifndef RECTANGLE_H
#define RECTANGLE_H
class Rectangle
{
private:
	double length;
	double width;
public:
	bool setlength(double);
	bool setwidth(double);
	double getlength();
	double getwidth();
	double getarea();
};
#endif