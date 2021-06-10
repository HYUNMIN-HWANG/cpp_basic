// 연산자 오버로딩
// 문자열 클래스 또한 연산자 오버로딩 처리가 되어 있어 문자열 관련하여 간단한 대입문이나 문자열 연결은 덧셈으로 표현 가능


#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str1 = "Computer", str2 = "Science";	//문자열 초기화
	int i;

	for (i = 0; i < (int)str1.length(); i++)
		cout << str1[i] << endl;

	cout << "str1 : " << str1 << endl;
	cout << "str2 : " << str2 << endl;

	str1 = str1 + "-" + str2;	//append함수 대신 연산자를 이용해서 문자열 추가

	cout << "*****************" << endl;
	cout << "str1 : " << str1 << endl;
	cout << "str2 : " << str2 << endl;

	if (str1 > str2)
		cout << str1 << endl;
	else
		cout << str2 << endl;

	return 0;

}

//C
//o
//m
//p
//u
//t
//e
//r
//str1 : Computer
//str2 : Science
//* ****************
//str1 : Computer - Science
//str2 : Science
//Science