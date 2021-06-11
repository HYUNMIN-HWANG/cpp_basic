#pragma once
#ifndef _ch11_07_CONTEST_H_
#define _ch11_07_CONTEST_H_
#include <iostream>
using namespace std;

class CON1
{
public:
	CON1(const int c);	//생성자
	~CON1();//소멸자
protected :
	int c;	// 멤버 변수 추가
};

class CON2 : public CON1
{
public:
	CON2();
	~CON2();
};

#else
#endif // !"_ch11_07_CONTEST_H_
