#include "ch11_05_geo.h"

int main()
{
	GeometricFigure obj1;

	cout << "obj1�� �� : " << obj1.GetColor() << endl;
	obj1.SetColor("Green");
	cout << "obj1�� �� : " << obj1.GetColor() << endl;

	return 0;
}

//obj1�� �� : white
//obj1�� �� : Green