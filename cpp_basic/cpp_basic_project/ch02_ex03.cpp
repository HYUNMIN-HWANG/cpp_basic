//�Ǽ��� �ݿø��� �ڸ����� �Է��Ͽ� �ݿø� ���� ���ϴ� ���α׷�

#include <iostream>
using namespace::std;

int main()
{
	float su;
	int n, i, imsi;

	cout << "�Ǽ� �Է� : ";
	cin >> su;

	cout << "�ݿø� �ڸ��� �Է� : ";
	cin >> n;

	for (i = 0; i < n; i++)
		su = su * 10;	// 10�� n �� �����ش�.

	su = su + 5;			// �ݿø��� �����ϱ� ���ؼ� 5�� �����ش�.
	imsi = (int)su / 10;	// �ݿø��� �ڸ����� �̵��Ѵ�.
	su = (float)imsi;

	for (i = 0; i < n - 1; i++)
		su = su / 10;

	cout << "�ݿø� ����� : " << su << endl;

	return 0;
}