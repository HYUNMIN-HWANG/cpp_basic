//포인터 : 기억 장소의 주소
//포인터 변수 : 그 주소를 기억하는 변수
//vs.일반변수 : 자료 자체를 저장하기 위해 사용

#include <iostream>
using namespace std;

int main()
{
	int a = 100;

	cout << "a에 저장된 값 : " << a << endl;
	cout << "a의 주소 : " << &a << endl;

	return 0;
}

//a에 저장된 값 : 100
//a의 주소 : 012FFB50 <- 16진법으로 표기된다.