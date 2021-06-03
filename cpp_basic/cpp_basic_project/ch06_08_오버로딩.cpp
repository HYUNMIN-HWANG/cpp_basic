// 함수 오버로딩 : 함수 이름은 같은 데 함수의 반환형이나 매개변수가 다르게 함수를 정의하는 것
// 같은 함수 이름으로 여러 개의 함수를 작성하는 것

// 함수를 식별하는 항목 3가지 : 함수 반환형, 함수 이름, 함수 매개변수

#include "ch06_08_compare.h"

int Compare(const int a, const int b)
{
	if (a > b)
		return 1;
	else if (a == b)
		return 0;
	else
		return -1;
}

int Compare(const float a, const float b)
{
	if (a > b)
		return 1;
	else if (a == b)
		return 0;
	else
		return -1;
}

int Compare(const char a, const char b)
{
	if (a > b)
		return 1;
	else if (a == b)
		return 0;
	else
		return -1;
}

int Compare(const char str1[], const char str2[])
{
	int i;

	for (i = 0; str1[i] != '\0' && str2[i] != '\0'; i++)
	{
		if (str1[i] > str2[i])
			return 1;
		else if (str1[i] == str2[i])
			;	// 값이 동일
		else
			return -1;
	}

	if (str1[i] == '\0' && str2[i] != '\0')
		return -1;
	else if (str1[i] != '\0' && str2[i] == '\0')
		return 1;
	else
		return 0;
}