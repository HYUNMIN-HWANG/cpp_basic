// continue :  �ݺ� ���� ó������ ���� ��� �̵��ϰ� �Ѵ�.

#include <iostream>
using namespace std;

int main()
{
	int i;
	for (i = 1;i < 10; i++)
	{
		if (i % 2 == 0)
			continue;	// �ݺ����� ó������ �̵���
		cout << "i = " << i << endl;

	}
	return 0;
}

//i = 1
//i = 3
//i = 5
//i = 7
//i = 9