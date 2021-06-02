// (1) 함수 선언 : 함수의 프로토타입을 결정하는 것
// // 컴파일러가 해당 내용이 어떤 형식으로 이루어졌는가를 판단하는 부분
// // 함수가 사용되기 전에 선언되어 있어야 함
// //  함수반환형 함수이름 (매개변수,,,)


// (2) 함수 정의 : 실제 해당 함수에서 실행될 내용을 프로그래밍하는 것

// (3) 함수 호출 : 함수가 제대로 작동하는지 확인, main() 함수에서 작성

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