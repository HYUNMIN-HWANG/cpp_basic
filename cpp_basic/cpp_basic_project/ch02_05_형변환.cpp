// 한 번 정해진 자료형을 변환하자

# include <iostream>
using namespace std;

int main()
{
	int a = 20, b = 3;
	float c, d;

	c = a / 3.5f;	// 암묵적 형 변환 : 정수와 실수의 연산을 수행하게 될 떄 자동으로 형 변환이 실수로 결정됨
	//d = a / b;
	//d = (float)a / b;	// (1) 정수형인 a를 일시적으로 실수형으로 변환할 수 있다.
	d = static_cast<float>(a) / b;	// (2) 명시적 형변환 : 일시적으로 형을 변환시키는 방법

	cout << "연산 결과 : 정수형 = " << c << endl;
	cout << "연산 결과 : 실수형 = " << d << endl;

	return 0;
}

//연산 결과 : 정수형 = 5.71429
//연산 결과 : 실수형 = 6

