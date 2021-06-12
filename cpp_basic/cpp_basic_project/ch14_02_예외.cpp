// ch14_01_예외.cpp 에서 보완

#include <iostream>
using namespace std;

int main()
{
	int number1, number2;
	int quotient, reminder;

	cout << "수 1 : ";
	cin >> number1;

	cout << "수 2 : ";
	cin >> number2;

	// 예외 처리 : 프로그래머가 프로그램 실행 중 발생할 수 있는 모든 상황을 고려해서 예측하지 못한 상황에 대한 처리 루틴을 다룬다.
	if (number2 == 0)	
	{
		cout << number1 << "은 0으로 나눌 수 없습니다 !!" << endl;
		return 01;
	}

	quotient = number1 / number2;
	reminder = number1 % number2;

	cout << "몫 : " << quotient << endl;
	cout << "나머지 : " << reminder << endl;

	return 0;
}

//수 1 : 45
//수 2 : 7
//몫 : 6
//나머지 : 3
/////////////
//수 1 : 45
//수 2 : 0
//45은 0으로 나눌 수 없습니다 !!