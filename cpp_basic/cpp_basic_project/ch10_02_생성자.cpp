#include <iostream>
#include <string>
using namespace std;

//�����ڸ� ǥ���� �� �ִ� ��� 4����

int main()
{
	string str1;
	string str2("Test2 String");

	char name[80] = "Computer Science";
	string str3(name);
	string str4(10, 'A');	// ��ü�� �����ϰ� ������ ������ŭ ������ ���ڷ� ���ڿ��� ����� �ʱ�ȭ�Ѵ�.

	str1 = "Test1 String";

	cout << "str1 : " << str1 << endl;
	cout << "str2 : " << str2 << endl;
	cout << "str3 : " << str3 << endl;
	cout << "str4 : " << str4 << endl;

	return 0;
}

//str1: Test1 String
//str2 : Test2 String
//str3 : Computer Science
//str4 : AAAAAAAAAA