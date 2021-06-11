#include "ch11_05_geo.h"

GeometricFigure::GeometricFigure()
{
	color = "white";
}

void GeometricFigure::SetColor(const string color)
{
	this->color = color;
}

bool GeometricFigure::IsPaint()
{
	if (color == "white")
		return false;
	else
		return true;
}

string GeometricFigure::GetColor()
{
	return color;
}