#ifndef _CH14_06_SUNG_H_
#define _CH14_06_SUNG_H_

#include <iostream>
#include <stdexcept>
using namespace std;

class SungException : public logic_error
{
public:
	SungException(const int total, const int num);
	int GetTotal();
	int GetNum();
private:
	int total, num;
};

class Sung
{
public :
	Sung();
	Sung(const int kor, const int eng, const int math);
	int GetTotal();
	double GetAver();
private:
	int kor, eng, math, total;
	double aver;
};

#else
#endif // !_CH14_06_SUNG_H_
