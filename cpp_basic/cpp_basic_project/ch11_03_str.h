#ifndef _CH11_03_STR_H_
#define _CH11_03_STR_H_

#define MAX 50
#include <iostream>
#include <string>
using namespace std;

// ���ڿ��� ���� �迭 ���·� ��ȯ
class StringCharArray : public string	// ���ڿ� Ŭ���� class�� ����Ѵ�.
{
public :
	void toCharArray(char* str);
};

#else
#endif
