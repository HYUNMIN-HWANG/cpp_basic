// (1) �Լ� ���� : �Լ��� ������Ÿ���� �����ϴ� ��
// // �����Ϸ��� �ش� ������ � �������� �̷�����°��� �Ǵ��ϴ� �κ�
// // �Լ��� ���Ǳ� ���� ����Ǿ� �־�� ��
// //  �Լ���ȯ�� �Լ��̸� (�Ű�����,,,)


// (2) �Լ� ���� : ���� �ش� �Լ����� ����� ������ ���α׷����ϴ� ��

// (3) �Լ� ȣ�� : �Լ��� ����� �۵��ϴ��� Ȯ��, main() �Լ����� �ۼ�

#include "ch06_config.h"

int TotalCalculation(int jumsu[], int num)
{
	int tot = 0, i;

	if (num < 0)
		return -1;

	for (i = 0; i < num; i++)
	{
		if (jumsu[i] < 0 || jumsu[i]>100)
			return -1;

		tot = tot + jumsu[i];
	}

	return tot;
}

float Round(float average, int digits)
{
	float r_average = average;
	int i, temp;

	for (i = 0; i < digits ; i++)
		r_average = r_average * 10;

	r_average = r_average + 5;

	temp = (int)(r_average / 10);
	r_average = (float)temp;

	for (i = 0; i < digits - 1; i++)
		r_average = r_average / 10;

	return 0;

}