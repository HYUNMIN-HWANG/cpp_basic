#include "ch11_06_contest.h"

int main()
{
	CON2* p_TEST = new CON2;

	delete p_TEST;

	return 0;
}

//***CON1 ������***
//*** CON2 ������***
//*** CON2 �Ҹ���***
//*** CON1 �Ҹ���***

// �����ڴ� Con1 -> con2 ���� (��� -> �Ļ�)
// �Ҹ��ڴ� con2 -> conv1 ���� (�Ļ� -> ���)