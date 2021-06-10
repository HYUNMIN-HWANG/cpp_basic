// fstream = ifstream + ofstream
// fstream�� ��ü.open(���� �̸�, ���� ���)

// ios::in  ���Ͽ��� �о����
// ios::out ���Ͽ� ����ϱ�
// ios::app ���Ͽ� �߰��Ͽ� ����ϱ�
// ios::trunc ������ �̹� �����ϴ� ��� �����ϰ� ���ο� ���Ϸ� �����Ͽ� ���
// ios::binary ���� ���Ϸ� ó���ϱ�

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	fstream fs;	// ���� ��ü ����

	fs.open("ch10_15_text.txt", ios::out);	//��¸��
	if (fs.fail())
		return 0;

	fs << "keyboard" << endl;	//txt ���Ͽ� �����
	fs << "monitor" << endl;

	fs.close();

	fs.open("ch10_15_text.txt", ios::app);	//������
	fs << "desk" << endl;
	fs.close();

	fs.open("ch10_15_text.txt", ios::in);	//�б���
	string temp;

	while (fs >> temp, !fs.eof())
	{
		cout << temp << endl;
	}

	fs.close();

	return 0;
}

//keyboard
//monitor
//desk