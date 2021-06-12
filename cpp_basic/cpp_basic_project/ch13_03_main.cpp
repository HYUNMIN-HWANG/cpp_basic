#include "ch13_03_ImaginaryNumber.h"

int main()
{
	ImaginaryNumber ima1(4.2, 5.1);
	ImaginaryNumber ima2;
	ImaginaryNumber ima3;

	ima2.SetA(7.2);
	ima2.SetB(9.6);

	//ima3 = ima1.AddImaginary(ima2);	//ima1 + ima2 = ima3 ('+' 연산이 선언되어 있지 않기 때문에 이 형태로는 사용할 수 없다. // 오버로딩해야 함
	ima3 = ima1.operator+(ima2);

	cout << "(" << ima1.GetImaginaryNumber() << ") + ";
	cout << "(" << ima2.GetImaginaryNumber() << ") = ";
	cout << ima3.GetImaginaryNumber() << endl;

	return 0;
}

//(4.2 + 5.1i) + (7.2 + 9.6i) = 11.4 + 14.7i
