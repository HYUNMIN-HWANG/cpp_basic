// ch14_01_����.cpp ���� ����

#include <iostream>
using namespace std;

int main()
{
	int number1, number2;
	int quotient, reminder;

	cout << "�� 1 : ";
	cin >> number1;

	cout << "�� 2 : ";
	cin >> number2;

	// ���� ó�� : ���α׷��Ӱ� ���α׷� ���� �� �߻��� �� �ִ� ��� ��Ȳ�� ����ؼ� �������� ���� ��Ȳ�� ���� ó�� ��ƾ�� �ٷ��.
	if (number2 == 0)	
	{
		cout << number1 << "�� 0���� ���� �� �����ϴ� !!" << endl;
		return 01;
	}

	quotient = number1 / number2;
	reminder = number1 % number2;

	cout << "�� : " << quotient << endl;
	cout << "������ : " << reminder << endl;

	return 0;
}

//�� 1 : 45
//�� 2 : 7
//�� : 6
//������ : 3
/////////////
//�� 1 : 45
//�� 2 : 0
//45�� 0���� ���� �� �����ϴ� !!