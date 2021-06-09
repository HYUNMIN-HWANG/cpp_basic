// 멤버함수 : compare, insert
// compare : 문자열 객체와 매개변수 문자열 객체와 같은가를 비교한다. 만약 기분 문자열이 크면 1, 같으면 0, 매개변수 문자열이 크면 -1을 반환한다. 
// insert : 문자열 객체에서 지정한 문자열을 지정한 위치에 삽입해서 반환한다.

#include <iostream>
#include<string>
using namespace std;

int main()
{
	string str1 = "CAB", str2 = "CAB";
	cout << "CAB와 CAB 비교 ==>  " << str1.compare(str2) << endl;

	string str3 = "CAB", str4 = "DBC";
	cout << "CAB와 DBC 비교 ==> " << str3.compare(str4) << endl;

	string str5 = "DBC", str6 = "CAB";
	cout << "DBC와 CAB 비교 ==> " << str5.compare(str6) << endl;

	str5 = "AACAB";

	cout << "AACAB의 2번째 3개의 문자와 CAB => " << str5.compare(2, 3, str6) << endl;
	cout << "AACAB의 0번째 3개의 문자와 CAB => " << str5.compare(0, 3, str6) << endl;

	str1 = "AAAA";
	str2 = "BBBB";

	cout << "str1 : " << str1 << endl;
	str1.insert(0, str2);
	cout << "After insert str1 : " << str1 << endl;

	str1.insert(4, 3, 'C');
	cout << "str1 : " << str1 << endl;

	return 0;

}

//CAB와 CAB 비교 ==> 0
//CAB와 DBC 비교 ==> -1
//DBC와 CAB 비교 ==> 1
//AACAB의 2번째 3개의 문자와 CAB = > 0
//AACAB의 0번째 3개의 문자와 CAB = > -1
//str1 : AAAA
//After insert str1 : BBBBAAAA
//str1 : BBBBCCCAAAA