// 실습
// 키와 몸무게를 입력받아 표준 몸무게를 계산하여 '저체중', '정상체중', '과체중'인가를 표기하자.

// 멤버 변수 : 키, 몸무게, 체중상태
// 멤버 함수 : 
	// 매개변수로 키를 받음, 매개변수르 몸무게를 전달받음, 함수의 반환값(키, 몸무게, 체중 상태)를 외부에 전달, 표준몸무게 산출

#include "ch08_04_weight.h"

// "Weight::"를 넣음으로써 정의된 각 멤버 함수는 클래스의 범위에 있다는 것을 나타냄

void Weight::setHeight(const double h)
{
	height = h;	// Weight에 포함되어 있는 멤버 변수를 사용할 수 있다.
}

void Weight::setWeight(const double h)
{
	weight = h;
}

double Weight::getHeight()
{
	return height;
}

double Weight::getWeight()
{
	return weight;
}

int Weight::StdWeight()
{
	double sw = (height - 110) * 0.9;

	if (sw + 0.5 < weight)
		WeightStatus = 1;
	else if (sw - 0.5 > weight)
		WeightStatus = -1;
	else 
		WeightStatus = 0;

	return 1;
}

int Weight::getWeightStatus()
{
	StdWeight();
	return WeightStatus;
}

