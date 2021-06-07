#include <iostream>
#include <string>
using namespace std;

//생성자를 표현할 수 있는 방법 4가지

int main()
{
	string str1;
	string str2("Test2 String");

	char name[80] = "Computer Science";
	string str3(name);
	string str4(10, 'A');	// 객체가 생성하고 지정한 개수만큼 전달한 문자로 문자열을 만들어 초기화한다.

	str1 = "Test1 String";

	cout << "str1 : " << str1 << endl;
	cout << "str2 : " << str2 << endl;
	cout << "str3 : " << str3 << endl;
	cout << "str4 : " << str4 << endl;

	return 0;
}

//str1: Test1 String
//str2 : Test2 String
//str3 : Computer Science
//str4 : AAAAAAAAAA