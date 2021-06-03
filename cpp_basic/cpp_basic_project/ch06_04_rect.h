#ifndef _CH06_04_RECT_H_
#define _CH06_04_RECT_H_

#include<iostream>
using namespace std;

int RectArea(const int width, const int height)
{
	if (width <= 0 || height <= 0)
		return 0;
	return width * height;
}

double TriangleArea(const int base, const int height)
{
	if (base <= 0 || height <= 0)
		return 0;

	return (base * height * 0.5);
}


#else
#endif
