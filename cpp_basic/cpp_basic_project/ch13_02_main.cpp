#include "ch13_01_ImaginaryNumber.h"

int main()
{
	ImaginaryNumber ima1(4.2, 5.1);
	ImaginaryNumber ima2;
	ImaginaryNumber ima3;

	ima2.SetA(7.2);
	ima2.SetB(9.6);

	ima3 = ima1.AddImaginary(ima2);	//ima1 + ima2 = ima3 ('+' 연산이 선언되어 있지 않기 때문에 이 형태로는 사용할 수 없다. // 오버로딩해야 함
	
	cout << "(" << ima1.GetImaginaryNumber() << ") + ";
	cout << "(" << ima2.GetImaginaryNumber() << ") = ";
	cout << ima3.GetImaginaryNumber() << endl;

	return 0;
}

//(4.2 + 5.1i) + (7.2 + 9.6i) = 11.4 + 14.7i

// Imaginary Number는 int, float, double 과 같은 기본 자료형이 아니므로 일반적인 형태의 수식 표기로는 연산을 표시하지 못한다.
// 연산자 오버로딩을 활용해 좀 더 편리하게 연산을 할 수 있다.