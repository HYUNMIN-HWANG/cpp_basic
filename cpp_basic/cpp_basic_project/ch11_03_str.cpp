#include "ch11_03_str.h"

void StringCharArray::toCharArray(char* str)
{
	int i, len = this->length();
	// length() : string Ŭ������ ����Լ��̹Ƿ� �Ļ��Լ����� �ٷ� ����� �� �ִ�.

	for (i = 0; i < len; i++)
		*(str + i) = this->at(i);

	//������ �������� �˸��� NULL
	*(str + i) = '\0';
}
