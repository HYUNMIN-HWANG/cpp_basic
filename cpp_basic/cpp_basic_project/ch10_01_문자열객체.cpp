//문자열 객체 생성
//문자열 클래스 명 string
//string s_name;


#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s_name;	//스트링 클래스의 객체 생성
	s_name = "문자열";		// 대입문으로 직접 문자열 할당 가능

	cout << s_name << endl;
	cout << "문자열 길이 : " << s_name.length() << endl;

	//s_name = s_name + "클래스"; // 문자열 연산자 사용 가능
	s_name.append("클래스");

	cout << s_name << endl;
	cout << "문자열 길이 : " << s_name.length() << endl;

	return 0;
}

//문자열
//문자열 길이 : 6
//문자열클래스
//문자열 길이 : 12