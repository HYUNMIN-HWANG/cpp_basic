// fail : ������ ���� ���θ� Ȯ���ϴ� ��� �Լ�
// ��ü�� ������ �� ���� ���⸦ �����ϰ� ���� ���� ���θ� Ȯ���� ���� �۾��� �����ϸ� ���� ���� �� �߻��� ������ ������ �� �ִ�.
// ������ ������ true, ������ ������ false�� ��ȯ

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream input;	//���� ��ü ����
	input.open("ch10_12_FileTest.txt");	//���� ����
	if (input.fail())
	{
		cout << "������ �������� �ʽ��ϴ� !! " << endl;	//������ ������ true ��ȯ
		return 0;
	}
	else
	{
		cout << "���� ���� �� �����ϼ���." << endl;	// ������ ������ false ��ȯ
		input.close();	//������ �����ٸ� �ݵ�� �ݾƾ� �Ѵ�.
	}

	return 0;
}

//������ �������� �ʽ��ϴ� !!