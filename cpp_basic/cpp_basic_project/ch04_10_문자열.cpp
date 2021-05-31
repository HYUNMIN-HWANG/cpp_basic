// NULL'\0' 문자열의 마지막을 나타내는 문자
// 문자열 상수를 지정하면 자동으로 함께 입력된다.
// 문자열의 첫 시작 위치만 알면, 
// 문자열은 문자 배열로 연속적인 기억 장소에 저장되므로 첫 시작 위치에서 널 문자를 만날 때까지 기억 장소에 저장된 문자를 출력하면 된다.

#include <iostream>
using namespace std;

int main()
{
	char string[30] = "computer";
	int i = 0;

	cout << string << endl;	// 문자 배열의 이름인 string은 문자 배열의 첫 번째 기억 장소의 주소, '\0'이 나타나기 전까지 값을 처리한다.

	for (i = 0; string[i] != '\0'; i++)
		cout << string[i];

	cout << endl;

	return 0;
}

//computer
//computer