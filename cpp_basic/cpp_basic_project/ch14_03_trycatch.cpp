//try : 예외가 발생하였는가를 확인하는 내용
//예외가 발생하면 throw을 통해서 catch 블록으로 제어를 이동한다.
//catch : 에러가 발생했을 때 수행하는 내용


// 장점 : 모든 예외를 일일이 예외 처리 코드로 작성하지 않아도 된다., 여러 항복에 대한 예외 처리가 가능하다.

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

	try {
		if (number2 == 0)	//예외가 발생하면 throw 명령에 의해 제어가 catch로 이동
			throw number1;

		quotient = number1 / number2;
		reminder = number1 % number2;

		cout << "몫 : " << quotient << endl;
		cout << "나머지 : " << reminder << endl;

	}

	catch (int e_num)	// number1가 e_num으로 받는다.
	{
		cout << e_num << "은 0으로 나눌 수 없습니다 !!" << endl;
	}
	

	return 0;
}

//수 1 : 46
//수 2 : 0
//46은 0으로 나눌 수 없습니다 !!