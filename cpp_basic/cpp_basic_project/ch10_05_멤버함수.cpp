//����Լ� : at, length, size, clear, erase
// at : ���ڿ� ��ü���� ������ ��ġ�� ���ڸ� ��ȯ�Ѵ�.
// length, size : ���ڿ� ��ü�� ������ ���ڿ� ���̸� ��ȯ�Ѵ�.
// clear : ��ü�� �� ���ڿ��� �ʱ�ȭ�Ѵ�.
// erase : ������ ��ġ�κ��� �ش� ������ŭ ���ڸ� �����Ѵ�.

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str = "COMPUTER";
	int i;

	for (i = 0; i < (int)str.length(); i ++ )
	{
		cout << i << "��° ���� : " << str.at(i) << endl;	// ���ڿ� ��ü ������ ������ ��ġ�� ���ڸ� ǥ��
	}

	cout << "Programming ���ڿ� ���� : " << str.length() << endl;
	cout << "Programming ���ڿ� ���� : " << str.size() << endl;

	str.erase(6, 2); //���ڿ� 6��°���� 2�� ���� ����
	cout << "str�� erase ���� ��� : " << str << endl;

	str.assign("COMPUTER");
	cout << "���ڿ� : " << str << endl;
	str.clear();	//���ڿ� ��� ����
	cout << "���ڿ� : " << str << endl;

	return 0;
}

//0��° ���� : C
//1��° ���� : O
//2��° ���� : M
//3��° ���� : P
//4��° ���� : U
//5��° ���� : T
//6��° ���� : E
//7��° ���� : R
//Programming ���ڿ� ���� : 8
//Programming ���ڿ� ���� : 8
//str�� erase ���� ��� : COMPUT
//���ڿ� : COMPUTER
//���ڿ� :