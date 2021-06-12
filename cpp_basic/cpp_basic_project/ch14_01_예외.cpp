// 예외 클래스 : 프로그램 코드에서 주어진 처리를 실행할 때 에러가 발생하였다면
// 실행 에러가 아닌 에러 발생 원인에 대한 메시지나 관련 내용을 확인할수 있는 코드를 포함할 수 있도록 하는 것

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


// 두 번째 수에 '0'을 넣으면 프로그램을 끝까지 실행시키지 못한다. (나눗셈은 0으로 나눌 수 없다.)
//수 1 : 45
//수 2 : 0
//C : \Users\user\source\repos\CPP_BASIC\Debug\CPP_BASIC.exe(프로세스 15592개)이(가) 종료되었습니다(코드: -1073741676개).


// 이런 오류를 방지하기 위한 처리 루트를 작성해야 한다.