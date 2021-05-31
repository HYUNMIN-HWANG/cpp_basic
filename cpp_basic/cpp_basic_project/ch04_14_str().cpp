#include <iostream>
using namespace std;

int main()
{
	char s_string[100] = "C++ programming is very intersting!";
	char d_string[100];

	cout << "s_string = " << s_string << endl;	// s_string = C++ programming is very intersting!

	strcpy_s(d_string, _countof(d_string), s_string);
	// strcpy_s : s_str�� d_str�� �����Ѵ�.
	// _countof : �迭�� �Ҵ�� ũ�⸦ ���ϴ� ��ũ�� �Լ�
	cout << "d_string = " << d_string << endl;	// d_string = C++ programming is very intersting!

	strncpy_s(d_string, _countof(d_string), s_string, 3);
	// strncpy_s : s_str�� 3����Ʈ�� �����Ѵ�.
	cout << "d_string = " << d_string << endl;	// d_string = C++

	strcat_s(d_string, _countof(d_string), "*******");
	// strcat_s : d_str�� "*******"�� ���δ�.
	cout << "d_string = " << d_string << endl;	// d_string = C++*******

	strncat_s(d_string, _countof(d_string), s_string, 3);
	// strncat_s : s_str�� 3����Ʈ ������ �����δ�.
	cout << "d_string = " << d_string << endl;	// d_string = C++*******C++

	return 0;
}
