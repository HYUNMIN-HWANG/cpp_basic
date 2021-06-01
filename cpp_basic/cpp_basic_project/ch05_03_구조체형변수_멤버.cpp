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
		struct POINT LeftTop;		// ����ü�� POINT
		struct POINT RightBottom;	// ����ü�� POINT
		int area;
	};

	struct RECT a;

	a.LeftTop.x = 10;
	a.LeftTop.y = 100;

	a.RightBottom.x = 50;
	a.RightBottom.y = 20;

	a.area = (a.RightBottom.x - a.LeftTop.x) * (a.LeftTop.y - a.RightBottom.y);

	cout << "���簢�� ���� : " << a.area << endl;

	return 0;
}

//���簢�� ���� : 3200