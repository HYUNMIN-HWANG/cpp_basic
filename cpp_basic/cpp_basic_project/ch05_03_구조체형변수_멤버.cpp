#include <iostream>
#include <string>
using namespace std;

int main()
{
	struct POINT
	{
		int x;
		int y;
	};

	struct RECT
	{
		struct POINT LeftTop;		// 구조체형 POINT
		struct POINT RightBottom;	// 구조체형 POINT
		int area;
	};

	struct RECT a;

	a.LeftTop.x = 10;
	a.LeftTop.y = 100;

	a.RightBottom.x = 50;
	a.RightBottom.y = 20;

	a.area = (a.RightBottom.x - a.LeftTop.x) * (a.LeftTop.y - a.RightBottom.y);

	cout << "직사각형 면적 : " << a.area << endl;

	return 0;
}

//직사각형 면적 : 3200