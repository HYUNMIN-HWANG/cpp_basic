// ���� �� ��ȯ : ���� �� �־��� ��ȫ�� �°� �� ��ȯ�� �����ϴ� ���� �ǹ���
// �̹� ������ ��ü�� Ŭ������ ��ȯ�ϴ� ��
// ��ü�� �����͸� ��ȯ�� ���ϴ� Ŭ������ �����ͷ� �Ҵ������ν� ����ȴ�.
// dynamic_cast ������ Ȱ����

// Upcasting : �Ļ� Ŭ���� ������ ��� Ŭ������ ��ȯ�ϴ� ��, dynamic_cast�� ������� �ʾƵ� �ȴ�.
// Downcasting : ��� Ŭ���� ������ �Ļ� Ŭ������ ��ȯ�ϴ� ��, �ݵ�� dynamic_cast�� ����ؾ� ��


// Upcasting�� ��� :
#include "ch12_05_GeometricObject.h"

int main()
{
	GeometricObject* p1 = new Isosceles(9, 15); //Upcasting, ���� ����ȯ
	Isosceles* p2 = new Isosceles(5, 6);

	cout << "p1 : " << p1->GetLine1() << endl;
	cout << "p2 : " << p2->GetLine1() << endl;

	return 0;
}

//p1: 9
//p2 : 5