#include <iostream>
#include <fstream>	// ���ϰ� ���õ� �����
using namespace std;

int main()
{
	//�������
	//ofstream ��ü�̸�;
	ofstream output;
	output.open("ch10_10_text.txt");
	output << "��ſ� ���α׷���!!!" << endl;
	//output : open���� ���� ���Ͽ� "��ſ� ���α׷���!!!"�� ���
	//endl : Ŀ���� ���� �ٷ� �̵�
	output.close();
	//������ �ݴ´�.

	return 0;
}