#include "ch11_05_geo.h"

int main()
{
	GeometricFigure obj1;

	cout << "obj1의 색 : " << obj1.GetColor() << endl;
	obj1.SetColor("Green");
	cout << "obj1의 색 : " << obj1.GetColor() << endl;

	return 0;
}

//obj1의 색 : white
//obj1의 색 : Green