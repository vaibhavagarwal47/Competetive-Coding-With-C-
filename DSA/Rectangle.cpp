//this is rectangle.h class rectangle implementation file
#include "Rectangle.h"
bool Rectangle::setlength(double len)
{
	bool validlen = true;
	if(len>=0)
	{
		length = len;
	}
	else
	{
		validlen = false;
	}
	return validlen;
}
bool Rectangle::setwidth(double w)
{
	bool validwid = true;
	if(w>=0)
	{
		width = w;
	}
	else
	{
		validwid = false;
	}
	return validwid;
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