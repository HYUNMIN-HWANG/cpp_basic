// 함수 선언 -> 함수 정의 -> 함수 호출

/*
표준 함수 : 기능이 이미 정의된 함수 ex) strcpy_s()
사용자 정의 함수 : 기능이 정의되어 있지 않아 프로그래머가 필요에 의해 정의한 함수
main()함수 : 프로그램 실행에서 프로그램의 시작과 끝을 담당하는 함수, 프로그램이 실행되려면 하나의 main함수가 반드시 있어야 한다.
*/

// 함수반환값 함수이름(매개변수, ,,,)
//// 함수반환값 : 함수 실행 후 반환하는 값의 자료형, 반환값이 없을 때는 void라 표시한다.
//// 함수이름 : 함수를 식별하는 역할로써 다른 함수의 이름과 중복되면 안된다.
//// 매개변수 : 콤마로 구분, 매개변수가 없을 때는 void, 함수 실행에 필요한 입력 값을 기억하는 변수나 상수


#include <iostream>
using namespace std;

int main()
{
	char Name[50];
	int FunResult;

	FunResult = strcpy_s(Name, 50, "채치수");
	//strcpy_s : 50크기를 갖는 Name에 "채치수" 내용을 복사한다. 호출의 반환값은 0
	//FunResult에 0이 저장된다.

	cout << FunResult << endl;

	cout << Name << endl;

	return 0;
}

//0
//채치수