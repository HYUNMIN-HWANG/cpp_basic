#include "ch11_03_str.h"

int main()
{
	StringCharArray one;
	char t_str[50];

	one.assign("sample");	// one�� sample ������, string Ŭ������ ��� �Լ��� �ٷ� ����� �� �ִ�.
	one.toCharArray(t_str);

	cout << one << endl;
	cout << t_str << endl;

	return 0;
}

//sample
//sample