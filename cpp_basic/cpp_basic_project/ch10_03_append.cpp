#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str = "Computer";

	cout << "str : " << str << endl;

	str.append(" Science");
	cout << "str : " << str << endl;

	str.append(str, 0, 8);	// ��ü�� ������ �Ű������� ���ڿ����� �ش� '���� ��ġ'���� ������ '����'��ŭ�� ���ڿ��� �����δ�.
	cout << "str : " << str << endl;

	str.append(5, '!');	// ��ü�� ������ ������ŭ �ش� ���ڸ� �����δ�.
	cout << "str : " << str << endl;

	return 0;
}

//str: Computer
//str : Computer Science
//str : Computer ScienceComputer
//str : Computer ScienceComputer!!!!!