//protected : ���� ������
//�ڱ� �ڽŰ� �Ļ� Ŭ������ ��쿡�� ������ �� ������ �ܺο����� ������ ������� �ʴ´�.

#include "ch11_04_a.h"

void A::SetVar(const int proVar_A, const int priVar_A)
{
	this->proVar_A = proVar_A;
	this->priVar_A = priVar_A;
}

void A::ShowVar()
{
	cout << "proVar_A = " << proVar_A << endl;
	cout << "priVar_A = " << priVar_A << endl;
}

void B::Show()
{
	b = 30;
	cout << "b = " << b << endl;
	proVar_A = 200;	//proVar_A�� protected ���� �Ӽ��� ���� ��� �Լ��̱� ������ �Ļ� Ŭ�������� ������ �� �ִ�.
	cout << "proVar_A = " << proVar_A << endl;	
}