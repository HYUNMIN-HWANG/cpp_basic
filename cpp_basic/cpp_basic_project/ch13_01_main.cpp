#include "ch13_01_ImaginaryNumber.h"

int main()
{
	ImaginaryNumber ima1(4.2, 5.1);
	ImaginaryNumber ima2;


	ima2.SetA(7.2);
	ima2.SetB(9.6);


	cout << ima1.GetImaginaryNumber() << endl;
	cout << ima2.GetImaginaryNumber() << endl;

	return 0;
}

//4.2 + 5.1i
//7.2 + 9.6i
