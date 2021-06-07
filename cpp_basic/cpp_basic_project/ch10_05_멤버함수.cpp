//멤버함수 : at, length, size, clear, erase
// at : 문자열 객체에서 지정한 위치의 문자를 반환한다.
// length, size : 문자열 객체가 저장한 문자열 길이를 반환한다.
// clear : 객체를 빈 문자열로 초기화한다.
// erase : 지정된 위치로부터 해당 개수만큼 문자를 삭제한다.

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str = "COMPUTER";
	int i;

	for (i = 0; i < (int)str.length(); i ++ )
	{
		cout << i << "번째 문자 : " << str.at(i) << endl;	// 문자열 객체 값에서 지정된 위치의 문자를 표시
	}

	cout << "Programming 문자열 길이 : " << str.length() << endl;
	cout << "Programming 문자열 길이 : " << str.size() << endl;

	str.erase(6, 2); //문자열 6번째부터 2개 문자 삭제
	cout << "str의 erase 실행 결과 : " << str << endl;

	str.assign("COMPUTER");
	cout << "문자열 : " << str << endl;
	str.clear();	//문자열 모두 삭제
	cout << "문자열 : " << str << endl;

	return 0;
}

//0번째 문자 : C
//1번째 문자 : O
//2번째 문자 : M
//3번째 문자 : P
//4번째 문자 : U
//5번째 문자 : T
//6번째 문자 : E
//7번째 문자 : R
//Programming 문자열 길이 : 8
//Programming 문자열 길이 : 8
//str의 erase 실행 결과 : COMPUT
//문자열 : COMPUTER
//문자열 :