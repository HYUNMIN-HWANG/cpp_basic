// NULL'\0' ���ڿ��� �������� ��Ÿ���� ����
// ���ڿ� ����� �����ϸ� �ڵ����� �Բ� �Էµȴ�.
// ���ڿ��� ù ���� ��ġ�� �˸�, 
// ���ڿ��� ���� �迭�� �������� ��� ��ҿ� ����ǹǷ� ù ���� ��ġ���� �� ���ڸ� ���� ������ ��� ��ҿ� ����� ���ڸ� ����ϸ� �ȴ�.

#include <iostream>
using namespace std;

int main()
{
	char string[30] = "computer";
	int i = 0;

	cout << string << endl;	// ���� �迭�� �̸��� string�� ���� �迭�� ù ��° ��� ����� �ּ�, '\0'�� ��Ÿ���� ������ ���� ó���Ѵ�.

	for (i = 0; string[i] != '\0'; i++)
		cout << string[i];

	cout << endl;

	return 0;
}

//computer
//computer