// ������ �����ε�
// ���ڿ� Ŭ���� ���� ������ �����ε� ó���� �Ǿ� �־� ���ڿ� �����Ͽ� ������ ���Թ��̳� ���ڿ� ������ �������� ǥ�� ����


#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str1 = "Computer", str2 = "Science";	//���ڿ� �ʱ�ȭ
	int i;

	for (i = 0; i < (int)str1.length(); i++)
		cout << str1[i] << endl;

	cout << "str1 : " << str1 << endl;
	cout << "str2 : " << str2 << endl;

	str1 = str1 + "-" + str2;	//append�Լ� ��� �����ڸ� �̿��ؼ� ���ڿ� �߰�

	cout << "*****************" << endl;
	cout << "str1 : " << str1 << endl;
	cout << "str2 : " << str2 << endl;

	if (str1 > str2)
		cout << str1 << endl;
	else
		cout << str2 << endl;

	return 0;

}

//C
//o
//m
//p
//u
//t
//e
//r
//str1 : Computer
//str2 : Science
//* ****************
//str1 : Computer - Science
//str2 : Science
//Science