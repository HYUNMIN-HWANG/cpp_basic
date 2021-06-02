#ifndef _CH06_CONFIG_H_	// 헤더 이름을 대문자로 표시
#define _CH06_CONFIG_H_ // 헤더 이름을 대문자로 표시

#include <iostream>
using namespace std;


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

	for (i = 0; i < digits; i++)
		r_average = r_average * 10;

	r_average = r_average + 5;

	temp = (int)(r_average / 10);
	r_average = (float)temp;

	for (i = 0; i < digits - 1; i++)
		r_average = r_average / 10;

	return r_average;

}

#else
#endif