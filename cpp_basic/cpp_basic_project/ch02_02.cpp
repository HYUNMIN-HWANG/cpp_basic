// 자료형과 연산자
// 자료형의 저장 크기 확인

#include <iostream>
using namespace std;

int main()
{
	cout << "int형 변수의 크기 : " << sizeof(int) << "바이트" << endl;
	cout << "char형 변수의 크기 : " << sizeof(char) << "바이트" << endl;
	cout << "float형 변수의 크기 : " << sizeof(float) << "바이트" << endl;
	cout << "double형 변수의 크기 : " << sizeof(double) << "바이트" << endl;

	return 0;
}


//int형 변수의 크기 : 4바이트
//char형 변수의 크기 : 1바이트
//float형 변수의 크기 : 4바이트
//double형 변수의 크기 : 8바이트
