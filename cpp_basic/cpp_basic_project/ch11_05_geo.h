#ifndef _CH11_05_GEO_H_
#define _CH11_05_GEO_H_

#include <iostream>
#include <string>
using namespace std;

class GeometricFigure
{
public :
	GeometricFigure();
	void SetColor(const string color);
	bool IsPaint();
	string GetColor();
protected:
	string color;
};

#else
#endif // !_CH11_05_GEO_H_
