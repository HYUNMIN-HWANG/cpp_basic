#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str = "Computer";

	cout << "str : " << str << endl;

	str.append(" Science");
	cout << "str : " << str << endl;

	str.append(str, 0, 8);	// 객체에 전달한 매개변수인 문자열에서 해당 '시작 위치'부터 지정한 '개수'만큼의 문자열을 덧붙인다.
	cout << "str : " << str << endl;

	str.append(5, '!');	// 객체에 지정한 개수만큼 해당 문자를 덧붙인다.
	cout << "str : " << str << endl;

	return 0;
}

//str: Computer
//str : Computer Science
//str : Computer ScienceComputer
//str : Computer ScienceComputer!!!!!