#include "ch13_01_ImaginaryNumber.h"

int main()
{
	ImaginaryNumber ima1(4.2, 5.1);
	ImaginaryNumber ima2;
	ImaginaryNumber ima3;

	ima2.SetA(7.2);
	ima2.SetB(9.6);

	ima3 = ima1.AddImaginary(ima2);	//ima1 + ima2 = ima3 ('+' ������ ����Ǿ� ���� �ʱ� ������ �� ���·δ� ����� �� ����. // �����ε��ؾ� ��
	
	cout << "(" << ima1.GetImaginaryNumber() << ") + ";
	cout << "(" << ima2.GetImaginaryNumber() << ") = ";
	cout << ima3.GetImaginaryNumber() << endl;

	return 0;
}

//(4.2 + 5.1i) + (7.2 + 9.6i) = 11.4 + 14.7i

// Imaginary Number�� int, float, double �� ���� �⺻ �ڷ����� �ƴϹǷ� �Ϲ����� ������ ���� ǥ��δ� ������ ǥ������ ���Ѵ�.
// ������ �����ε��� Ȱ���� �� �� ���ϰ� ������ �� �� �ִ�.