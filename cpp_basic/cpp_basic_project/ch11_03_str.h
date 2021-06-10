#ifndef _CH11_03_STR_H_
#define _CH11_03_STR_H_

#define MAX 50
#include <iostream>
#include <string>
using namespace std;

// 문자열을 문자 배열 형태로 변환
class StringCharArray : public string	// 문자열 클래스 class를 상속한다.
{
public :
	void toCharArray(char* str);
};

#else
#endif
