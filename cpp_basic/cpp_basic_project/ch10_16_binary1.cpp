//���� ������ �����
//fstream ��ü �̸�.write(char *, ����Ʈ ��) --> write() ���Ͽ��� ����� ��
//fstream ��ü �̸�.read(char *, ����Ʈ ��) --> read() ���Ͽ��� �о�� ��

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	fstream fp;
	int score[5] = { 78, 96, 100, 25, 96 };

	fp.open("ch10_16_text.txt", ios::out | ios::binary); //�������Ϸ� ���
	fp.write((char*)score, 20);	// 20 ����Ʈ�� ���
	fp.close();

	return 0;
}

//"ch10_16_text.txt" ������ , �Ʒ��� ����� ����
//N   `   d      `   