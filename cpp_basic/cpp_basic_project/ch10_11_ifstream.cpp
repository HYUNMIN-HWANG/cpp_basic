//ifstram : ������ �о�� �� ��� (cin ��� ���)

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream input;	// ���� �Է��� �˸��� ����
	char message[80];

	input.open("ch10_10_text.txt");

	input >> message;	// ��ĭ ���� ���ڿ��� �����Ѵ�. // "��ſ� ���α׷���!!" �� ��, "��ſ�"�� ��µ�
	cout << message << endl;

	input.close();

	return 0;
}

// ��ſ�