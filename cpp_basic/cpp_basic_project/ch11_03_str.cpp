#include "ch11_03_str.h"

void StringCharArray::toCharArray(char* str)
{
	int i, len = this->length();
	// length() : string 클래스의 멤버함수이므로 파생함수에서 바로 사용할 수 있다.

	for (i = 0; i < len; i++)
		*(str + i) = this->at(i);

	//문자의 마지막을 알리는 NULL
	*(str + i) = '\0';
}
