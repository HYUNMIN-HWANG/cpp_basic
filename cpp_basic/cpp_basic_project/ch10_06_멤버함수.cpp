// ����Լ� : empty, substr, swap
// empty : ���ڿ� ��ü�� �ƹ� ���뵵 �����ϰ� ���� ������ true,  �ƴϸ� false�� ��ȯ�Ѵ�.
// substr : ���ڿ� ��ü�� ������ ��ġ���� �ش� ������ŭ�� ���ڷ� �̷���� ���ڿ��� ��ȯ�Ѵ�.
// swap : ���޹��� �Ű������� ���ڿ� ��ü�� ��ȯ�Ѵ�.

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str1 ("ComputerScience");

	cout << "str1 : " << str1 << endl;
	cout << "substr : " << str1.substr(0, 8) << endl;	// 0���� 8��° ���� ���

	string str2("Interesting!!!");

	cout << "str1 : " << str1 << endl;
	cout << "str2 : " << str2 << endl;

	cout << "*********************" << endl;

	str1.swap(str2);	//str1�� str2 ���� ��ȯ

	cout << "str1 : " << str1 << endl;
	cout << "str2 : " << str2 << endl;

	return 0;
}

//str1: ComputerScience
//substr : Computer
//str1 : ComputerScience
//str2 : Interesting!!!
//*********************
//str1 : Interesting!!!
//str2 : ComputerScience