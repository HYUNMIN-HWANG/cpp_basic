//eof : ���Ͽ��� ������ �о�� ��� ������ �������ΰ��� Ȯ���ϴ� ��� �Լ�
//End of File
//������ �������� �ƴϸ� ������ false�� ��ȯ, �������̸� true ��ȯ

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ofstream output;	//��� ���� ��ü ����
	char cont = 'y';
	char word[50] = { 0, };

	output.open("ch10_13_text.txt"); //��� ���� ����

	if (output.fail())
		return 1;


	while (cont == 'y' || cont == 'Y')
	{
		cout << "�ܾ� �Է� : ";
		cin >> word;	// ǥ�� �Է���ġ - Ű����� �ڷ� �Է�

		output << word << endl; //��� ���Ͽ� ���� ��� --> �ܾ ���Ͽ� ����ϰ� �̾ Ŀ���� ���� �ٷ� ���� endl�� ��½�Ŵ

		cout << "����Ͻðڽ��ϱ�? [y/n] ";
		cin >> cont;
	}

	output.close();

	return 0;

}

//�ܾ� �Է� : science
//����Ͻðڽ��ϱ� ? [y / n] y
//�ܾ� �Է� : korean
//����Ͻðڽ��ϱ� ? [y / n] y
//�ܾ� �Է� : computer
//����Ͻðڽ��ϱ� ? [y / n] y
//�ܾ� �Է� : english
//����Ͻðڽ��ϱ� ? [y / n] y
//�ܾ� �Է� : keyboard
//����Ͻðڽ��ϱ� ? [y / n] n