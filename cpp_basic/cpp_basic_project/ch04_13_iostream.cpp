// iostream : �����Ϸ��� �̸� ���ǵǾ� �ִ� ���, ǥ���Լ�, ǥ�� ���̺귯��
// �Է��� ���ڿ��� �� �ٸ� ���� �迭�� �����ϴ� ����� ������.

#include <iostream>
using namespace std;

//int main()
//{
//	char s_str[30] = "", d_str[30] = "";
//	int i = 0;
//
//	cout << "�ֹε�Ϲ�ȣ �Է� : ";
//	cin >> s_str;
//
//	for (i = 0; s_str[i] != '\0'; i++)
//		d_str[i] = s_str[i];
//	d_str[i] = s_str[i];
//
//	cout << s_str << endl;
//	cout << (int)s_str << endl;
//	cout << d_str << endl;
//	cout << (int)d_str << endl;
//
//	return 0;
//}

//�ֹε�Ϲ�ȣ �Է� : 970212
//970212
//15726520
//970212
//15726480

///////////////////////////////////////////

int main()
{
	char s_str[30] = "", d_str[30] = "";
	int i = 0;

	cout << "�ֹε�Ϲ�ȣ �Է� : ";
	cin >> s_str;

	//strcpy(d_str, s_str); //������� ���.
	strcpy_s(d_str, s_str);

	cout << s_str << endl;
	cout << (int)s_str << endl;
	cout << d_str << endl;
	cout << (int)d_str << endl;

	return 0;
}

//�ֹε�Ϲ�ȣ �Է� : 970212
//970212
//20183576
//970212
//20183536