#include "ch11_03_str.h"

int main()
{
	StringCharArray one;
	char t_str[50];

	one.assign("sample");	// one에 sample 설정함, string 클래스에 멤버 함수를 바로 사용할 수 있다.
	one.toCharArray(t_str);

	cout << one << endl;
	cout << t_str << endl;

	return 0;
}

//sample
//sample