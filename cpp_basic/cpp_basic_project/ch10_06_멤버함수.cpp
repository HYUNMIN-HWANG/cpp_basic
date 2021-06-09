// 멤버함수 : empty, substr, swap
// empty : 문자열 객체가 아무 내용도 저장하고 있지 않으면 true,  아니면 false를 반환한다.
// substr : 문자열 객체의 지정한 위치에서 해당 개수만큼의 문자로 이루어진 문자열을 반환한다.
// swap : 전달받은 매개변수인 문자열 객체로 교환한다.

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str1 ("ComputerScience");

	cout << "str1 : " << str1 << endl;
	cout << "substr : " << str1.substr(0, 8) << endl;	// 0부터 8번째 문자 출력

	string str2("Interesting!!!");

	cout << "str1 : " << str1 << endl;
	cout << "str2 : " << str2 << endl;

	cout << "*********************" << endl;

	str1.swap(str2);	//str1과 str2 서로 교환

	cout << "str1 : " << str1 << endl;
	cout << "str2 : " << str2 << endl;

	return 0;
}

//str1: ComputerScience
//substr : Computer
//str1 : ComputerScience
//str2 : Interesting!!!
//*********************
//str1 : Interesting!!!
//str2 : ComputerScience