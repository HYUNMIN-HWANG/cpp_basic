#ifndef _CH11_02_CIRCLE_H_
#define _CH11_02_CIRCLE_H_

#include <iostream>
#include <string>
using namespace std;

class PFigure
{
public:
	PFigure();
	void setColor(const string color);
	string GetColor();
private:
	string color;
};

class Circle : public PFigure
{
public :
	Circle();
	void setR(const double r);
	double GetArea();
private :
	double r, area;
};
#else
#endif // !_CH11_02_CIRCLE_H_
