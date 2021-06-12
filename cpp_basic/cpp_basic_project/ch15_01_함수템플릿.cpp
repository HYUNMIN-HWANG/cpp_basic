// 템플릿 : 함수나 클래스에서 사용되는 처리 대상을 일반화한 표현
// 한 번의 정의로 여러 형의 자료에 대응해서 사용될 수 있게 한다.

// 함수 템플릿
// 함수에 전달되는 매개변수를 일반화된 유형으로 정의해서 상황에 따라 적절한 자료형에 대응해서 사용할 수 있게 한다.
// template<typename 일반화 유형 이름>

#include <iostream>
using namespace std;

template<typename T>	// 힘스 템플릿, 일반화된 유형

T MaxValue(const T num1, const T num2)	// int, double 자료형을 표기했던 곳에 'T'를 넣는다.
{
	if (num1 > num2)
		return num1;
	else
		return num2;
}

int main()
{
	cout << "정수 비교 결과 : " << MaxValue(3, 5) << endl;
	cout << "배정도 비교 결과 : " << MaxValue(9.1, 4.5) << endl;

	return 0;
}

//정수 비교 결과 : 5
//배정도 비교 결과 : 9.1
