//���ڿ� ��ü ����
//���ڿ� Ŭ���� �� string
//string s_name;


#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s_name;	//��Ʈ�� Ŭ������ ��ü ����
	s_name = "���ڿ�";		// ���Թ����� ���� ���ڿ� �Ҵ� ����

	cout << s_name << endl;
	cout << "���ڿ� ���� : " << s_name.length() << endl;

	//s_name = s_name + "Ŭ����"; // ���ڿ� ������ ��� ����
	s_name.append("Ŭ����");

	cout << s_name << endl;
	cout << "���ڿ� ���� : " << s_name.length() << endl;

	return 0;
}

//���ڿ�
//���ڿ� ���� : 6
//���ڿ�Ŭ����
//���ڿ� ���� : 12