#include "ch06_config.h"

int main()
{
	int s[6] = { 100, 90, 78, 50, 15, 88 };
	int total;
	float aver;

	total = TotalCalculation(s, 6);
	if (total == -1)
		return -1;

	aver = total / (float)6;
	aver = Round(aver, 2);

	cout << " ���� : " << total << endl;
	cout << " ��� : " << aver << endl;

	return 0;

}

//����: 421
//��� : 70.2