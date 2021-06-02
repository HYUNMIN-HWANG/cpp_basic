// AAA
/*
(1) AAA가 정의되어 있다면

#ifdef AAA
#else
#endif


(2) AAA가 정의되어 있지 않다면

#ifndef AAA
#else
#endif
*/

#include <iostream>
#define TEST
using namespace std;

int main()
{
	cout << "************" << endl;

#ifdef TEST	// TEST가 이미 정의되어 있음 '참'이므로 아래 'else'는 실행되지 않는다.
	cout << " TESTSTESTSETEST" << endl;

#else 
	cout << "+++++++++++++++" << endl;

#endif

	return 0;
}

//#define TEST 했을 때, 
//************
//TESTSTESTSETEST

//#define TEST 안 했을 때.
//************
//++++++++++++++ +

