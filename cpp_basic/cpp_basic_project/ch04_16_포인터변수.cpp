//모든 포인터변수의 크기 4바이트

#include <iostream>
using namespace std;

int main()
{
	int* pi;
	char* pc;
	float* pf;
	double* pd;

	cout << "정수형 포인터 크기 : " << sizeof(pi) << endl;
	cout << "문자형 포인터 크기 : " << sizeof(pc) << endl;
	cout << "실수형 포인터 크기 : " << sizeof(pf) << endl;
	cout << "배정도형 포인터 크기 : " << sizeof(pd) << endl;

	return 0;
}

//정수형 포인터 크기 : 4
//문자형 포인터 크기 : 4
//실수형 포인터 크기 : 4
//배정도형 포인터 크기 : 4