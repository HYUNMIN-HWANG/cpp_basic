#include "ch11_02_circle.h"

PFigure::PFigure()
{
	this->color = "white";
}

void PFigure::setColor(const string color)
{
	this->color = color;
}

string PFigure::GetColor()
{
	return color;
}

Circle::Circle()
{
	this->r = 0;
	this->area = 0;
}

void Circle::setR(const double r)
{
	this->r = r;
}

double Circle::GetArea()
{
	area = r * r * 3.14;
	return area;
}