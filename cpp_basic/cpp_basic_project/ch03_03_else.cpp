#include <iostream>
using namespace std;

int main()
{
	int a;

	cout << "a ������ �Է��ϼ��� : ";
	cin >> a;

	if (a > 100)
		cout << a << "�� 100���� ũ��." << endl;
	else
	{
		if (a < 100)
			cout << a << "�� 100���� �۴�." << endl;
		else
			cout << a << "�� 100�̴�." << endl;
	}
		

	return 0;
}

//a ������ �Է��ϼ��� : 20
//20�� 100���� �۴�.

//a ������ �Է��ϼ��� : 300
//300�� 100���� ũ��.

//a ������ �Է��ϼ��� : 100
//100�� 100�̴�.