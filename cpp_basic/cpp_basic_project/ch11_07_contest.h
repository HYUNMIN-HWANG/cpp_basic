#pragma once
#ifndef _ch11_07_CONTEST_H_
#define _ch11_07_CONTEST_H_
#include <iostream>
using namespace std;

class CON1
{
public:
	CON1(const int c);	//������
	~CON1();//�Ҹ���
protected :
	int c;	// ��� ���� �߰�
};

class CON2 : public CON1
{
public:
	CON2();
	~CON2();
};

#else
#endif // !"_ch11_07_CONTEST_H_
