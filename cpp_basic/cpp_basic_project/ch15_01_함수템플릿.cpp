// ���ø� : �Լ��� Ŭ�������� ���Ǵ� ó�� ����� �Ϲ�ȭ�� ǥ��
// �� ���� ���Ƿ� ���� ���� �ڷῡ �����ؼ� ���� �� �ְ� �Ѵ�.

// �Լ� ���ø�
// �Լ��� ���޵Ǵ� �Ű������� �Ϲ�ȭ�� �������� �����ؼ� ��Ȳ�� ���� ������ �ڷ����� �����ؼ� ����� �� �ְ� �Ѵ�.
// template<typename �Ϲ�ȭ ���� �̸�>

#include <iostream>
using namespace std;

template<typename T>	// ���� ���ø�, �Ϲ�ȭ�� ����

T MaxValue(const T num1, const T num2)	// int, double �ڷ����� ǥ���ߴ� ���� 'T'�� �ִ´�.
{
	if (num1 > num2)
		return num1;
	else
		return num2;
}

int main()
{
	cout << "���� �� ��� : " << MaxValue(3, 5) << endl;
	cout << "������ �� ��� : " << MaxValue(9.1, 4.5) << endl;

	return 0;
}

//���� �� ��� : 5
//������ �� ��� : 9.1
