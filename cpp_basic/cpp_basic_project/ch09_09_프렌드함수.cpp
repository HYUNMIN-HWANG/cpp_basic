// ������ �Լ� : �Ϲ��Լ��ʹ� �޸� Ư�� Ŭ������ ���� ģ�� ������ ����� ���� Ư�� Ŭ������ private ����� ������ �� �ִ�.

#include <iostream>
using namespace std;

int CheckTax(const double Income, double& Tax); // �Լ� ����
//int CheckTax2(SaleInf& Obj);	// SaleInf ���� �ִ� private �����鿡 ������ �� ����.

class SaleInf
{
	friend int CheckTax2(SaleInf& Obj);	//������ �Լ� ����

public:
	SaleInf(const double Income);
	double getTax();
private:
	double Income;
	double Tax;
};

SaleInf::SaleInf(const double Income)	// ������
{
	this->Income = Income;
}

double SaleInf::getTax()	// ��� �Լ� ����
{
	CheckTax(Income, Tax);	// �Լ� ȣ��

	return Tax;
}

int CheckTax(const double Income, double& Tax)
{
	if (Income <= 0)
		return 0;

	Tax = 0.03 * Income;
	return 1;
}

int CheckTax2(SaleInf& Obj)
{
	if (Obj.Income <= 0)	// friend �� ������� �ʾ��� ��, Income,Tax ������ private�̱� ������ ������ �� ����.
		return 0;
	Obj.Tax = Obj.Income * 0.03;
	return 1;
}


//int main()
//{
//	SaleInf s1(20.4);
//
//	cout << "���� : " << s1.getTax() << endl;	// getTax �ȿ� �ִ� �Լ� CheckTax ȣ��
//
//	double income = 20.4, tax;
//	CheckTax(income, tax);
//
//	cout << "���� : " << tax << endl;
//
//	return 0;
//
//}

//���� : 0.612
//���� : 0.612

int main()
{
	SaleInf s1(20.4);
	CheckTax2(s1);

	cout << "���� : " << s1.getTax() << endl;

	return 0;
}

//����: 0.612