#include <iostream>
using namespace std;

int main()
{
	char s_string[100] = "C++ programming is very intersting!";
	char d_string[100];

	cout << "s_string = " << s_string << endl;	// s_string = C++ programming is very intersting!

	strcpy_s(d_string, _countof(d_string), s_string);
	// strcpy_s : s_str을 d_str에 복사한다.
	// _countof : 배열에 할당된 크기를 구하는 매크로 함수
	cout << "d_string = " << d_string << endl;	// d_string = C++ programming is very intersting!

	strncpy_s(d_string, _countof(d_string), s_string, 3);
	// strncpy_s : s_str의 3바이트를 복사한다.
	cout << "d_string = " << d_string << endl;	// d_string = C++

	strcat_s(d_string, _countof(d_string), "*******");
	// strcat_s : d_str에 "*******"을 붙인다.
	cout << "d_string = " << d_string << endl;	// d_string = C++*******

	strncat_s(d_string, _countof(d_string), s_string, 3);
	// strncat_s : s_str의 3바이트 내용을 덧붙인다.
	cout << "d_string = " << d_string << endl;	// d_string = C++*******C++

	return 0;
}
