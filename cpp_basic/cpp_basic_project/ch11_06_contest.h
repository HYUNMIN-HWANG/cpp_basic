#ifndef _ch11_06_CONTEST_H_
#define _ch11_06_CONTEST_H_
#include <iostream>
using namespace std;

class CON1
{
public :
	CON1();	//持失切
	~CON1();//社瑚切
};

class CON2 : public CON1
{
public :
	CON2();
	~CON2();
};

#else
#endif // !"_ch11_06_CONTEST_H_
