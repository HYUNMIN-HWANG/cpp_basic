// ������ ���� �� �Ǵ� ������ �� ������ ������ ���� ����� ������� ǥ���Ͽ� ǥ��

#include <iostream>
using namespace std;

int main()
{
	int jumsu;

	cout << "���� �Է�: ";
	cin >> jumsu;

	if (jumsu > 100 || jumsu < 0)
		cout << "�߸��� �����Դϴ�." << endl;
	else if (jumsu >= 90)
		cout << "����� ������ A�Դϴ�." << endl;
	else if (jumsu >=80 && jumsu <=89)
		cout << "����� ������ B�Դϴ�." << endl;
	else if (jumsu >= 70 && jumsu <= 79)
		cout << "����� ������ C�Դϴ�." << endl;
	else if (jumsu >= 60 && jumsu <= 69)
		cout << "����� ������ D�Դϴ�." << endl;
	else
		cout << "����� ������ F�Դϴ�." << endl;

	return 0;
}

//���� �Է� : 99
//����� ������ A�Դϴ�.

//���� �Է� : 29
//����� ������ F�Դϴ�.

//���� �Է� : 1000
//�߸��� �����Դϴ�.

//���� �Է� : -80
//�߸��� �����Դϴ�.