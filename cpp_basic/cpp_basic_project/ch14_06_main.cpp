#include "ch14_06_sung.h"

int main()
{
	try
	{
		Sung p1(10, 30, -10);	// ����° �Ű������� ���� -> GetTotal���� throw�� �����
		cout << "���� : " << p1.GetTotal() << endl;
		cout << "��� : " << p1.GetAver() << endl;
	}
	catch (SungException &e)
	{
		cout << e.what() << endl;
		cout << "���޵� ���� : " << e.GetTotal() << endl;
		cout << "���޵� ���� �� : " << e.GetNum() << endl;
	}
	return 0;
}

//�߸��� �μ� ��
//���޵� ���� : 0
//���޵� ���� �� : 3