// �پ��� for �� ����

#include <iostream>
using namespace std;

int main()
{
	int i;

	i = 1;
	for (; i <= 5;)
	{
		cout << "i = " << i << endl;
		i++;
	}
	//i = 1
	//i = 2
	//i = 3
	//i = 4
	//i = 5

	cout << "****************" << endl;

	i = 1;
	for (;;)	// ������ ��
	{
		cout << "i = " << i << endl;
		i++;
		if (i > 5)
			break;
	}

	//i = 1
	//i = 2
	//i = 3
	//i = 4
	//i = 5

	return 0;
}