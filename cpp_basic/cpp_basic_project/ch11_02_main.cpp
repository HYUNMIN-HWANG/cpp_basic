#include "ch11_02_circle.h"

int main()
{
	PFigure cir1;

	cout << cir1.GetColor() << endl;	// ����Ʈ "white" ���� -> ���

	cir1.setColor("Yellow");
	cout << cir1.GetColor() << endl;

	Circle cir2;	// ������ �Լ��� ���ؼ� r�� area�� 0���� �ʱ�ȭ��

	cout << cir2.GetArea() << endl;

	return 0;
}

//white
//Yellow
//0