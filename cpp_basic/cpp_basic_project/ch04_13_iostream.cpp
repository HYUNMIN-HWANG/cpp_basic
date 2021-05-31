// iostream : 컴파일러에 미리 정의되어 있는 기능, 표준함수, 표준 라이브러리
// 입력한 문자열을 또 다른 문자 배열에 복사하는 기능을 만들어보자.

#include <iostream>
using namespace std;

//int main()
//{
//	char s_str[30] = "", d_str[30] = "";
//	int i = 0;
//
//	cout << "주민등록번호 입력 : ";
//	cin >> s_str;
//
//	for (i = 0; s_str[i] != '\0'; i++)
//		d_str[i] = s_str[i];
//	d_str[i] = s_str[i];
//
//	cout << s_str << endl;
//	cout << (int)s_str << endl;
//	cout << d_str << endl;
//	cout << (int)d_str << endl;
//
//	return 0;
//}

//주민등록번호 입력 : 970212
//970212
//15726520
//970212
//15726480

///////////////////////////////////////////

int main()
{
	char s_str[30] = "", d_str[30] = "";
	int i = 0;

	cout << "주민등록번호 입력 : ";
	cin >> s_str;

	//strcpy(d_str, s_str); //경고문구가 뜬다.
	strcpy_s(d_str, s_str);

	cout << s_str << endl;
	cout << (int)s_str << endl;
	cout << d_str << endl;
	cout << (int)d_str << endl;

	return 0;
}

//주민등록번호 입력 : 970212
//970212
//20183576
//970212
//20183536