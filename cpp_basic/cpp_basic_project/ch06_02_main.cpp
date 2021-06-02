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

	cout << " ÃÑÁ¡ : " << total << endl;
	cout << " Æò±Õ : " << aver << endl;

	return 0;

}

//ÃÑÁ¡: 421
//Æò±Õ : 70.2