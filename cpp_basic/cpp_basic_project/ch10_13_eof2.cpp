//txt ������ �ҷ��ͼ� �� �پ� �о ȭ�鿡 ����ϴ� ������ �����غ���.
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream input;	// �Է� ���� ��ü ����
	char word[50] = { 0, };

	input.open("ch10_13_text.txt");	// ���� ����

	if (input.fail())
		return 1;

	while (input.eof() == false)	// ���� �� ���� ������ ������ ������ ���� �ƴϹǷ� false
		//! input.eof() �� ������
	{
		input >> word;
		cout << word << endl;
	}

	input.close();

	return 0;
}

//science
//korean
//computer
//english
//keyboard
