// ���� Ŭ���� : ���α׷� �ڵ忡�� �־��� ó���� ������ �� ������ �߻��Ͽ��ٸ�
// ���� ������ �ƴ� ���� �߻� ���ο� ���� �޽����� ���� ������ Ȯ���Ҽ� �ִ� �ڵ带 ������ �� �ֵ��� �ϴ� ��

#include <iostream>
using namespace std;

int main()
{
	int number1, number2;
	int quotient, reminder;

	cout << "�� 1 : ";
	cin >> number1;

	cout << "�� 2 : ";
	cin >> number2;

	quotient = number1 / number2;
	reminder = number1 % number2;

	cout << "�� : " << quotient << endl;
	cout << "������ : " << reminder << endl;

	return 0;
}

//�� 1 : 45
//�� 2 : 7
//�� : 6
//������ : 3


// �� ��° ���� '0'�� ������ ���α׷��� ������ �����Ű�� ���Ѵ�. (�������� 0���� ���� �� ����.)
//�� 1 : 45
//�� 2 : 0
//C : \Users\user\source\repos\CPP_BASIC\Debug\CPP_BASIC.exe(���μ��� 15592��)��(��) ����Ǿ����ϴ�(�ڵ�: -1073741676��).


// �̷� ������ �����ϱ� ���� ó�� ��Ʈ�� �ۼ��ؾ� �Ѵ�.