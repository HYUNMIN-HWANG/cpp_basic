//try : ���ܰ� �߻��Ͽ��°��� Ȯ���ϴ� ����
//���ܰ� �߻��ϸ� throw�� ���ؼ� catch ������� ��� �̵��Ѵ�.
//catch : ������ �߻����� �� �����ϴ� ����


// ���� : ��� ���ܸ� ������ ���� ó�� �ڵ�� �ۼ����� �ʾƵ� �ȴ�., ���� �׺��� ���� ���� ó���� �����ϴ�.

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

	try {
		if (number2 == 0)	//���ܰ� �߻��ϸ� throw ��ɿ� ���� ��� catch�� �̵�
			throw number1;

		quotient = number1 / number2;
		reminder = number1 % number2;

		cout << "�� : " << quotient << endl;
		cout << "������ : " << reminder << endl;

	}

	catch (int e_num)	// number1�� e_num���� �޴´�.
	{
		cout << e_num << "�� 0���� ���� �� �����ϴ� !!" << endl;
	}
	

	return 0;
}

//�� 1 : 46
//�� 2 : 0
//46�� 0���� ���� �� �����ϴ� !!