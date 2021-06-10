#include "ch11_02_circle.h"

int main()
{
	PFigure cir1;

	cout << cir1.GetColor() << endl;	// 디폴트 "white" 저장 -> 출력

	cir1.setColor("Yellow");
	cout << cir1.GetColor() << endl;

	Circle cir2;	// 생성자 함수에 의해서 r과 area가 0으로 초기화됨

	cout << cir2.GetArea() << endl;

	return 0;
}

//white
//Yellow
//0