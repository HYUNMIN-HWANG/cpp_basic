#include <iostream>
using namespace std;

int main()
{
	int a, i;
	int r = 1;
	char flag = 'y';

	do {
		if (flag == 'n')
			cout << "����� �Է��ϼ���" << endl;
		cout << "���� �Է� : ";
		cin >> a;
		flag = 'n';
	} while (a < 0);

	for (i = 1; i <= a; i++)
		r = r * i;
	cout << a << "! = " << r << endl;

	return 0;
}

//���� �Է� : 5
//5!= 120

//���� �Է� : -3
//����� �Է��ϼ���
//���� �Է� : 0
//0!= 1