// AAA
/*
(1) AAA�� ���ǵǾ� �ִٸ�

#ifdef AAA
#else
#endif


(2) AAA�� ���ǵǾ� ���� �ʴٸ�

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

#ifdef TEST	// TEST�� �̹� ���ǵǾ� ���� '��'�̹Ƿ� �Ʒ� 'else'�� ������� �ʴ´�.
	cout << " TESTSTESTSETEST" << endl;

#else 
	cout << "+++++++++++++++" << endl;

#endif

	return 0;
}

//#define TEST ���� ��, 
//************
//TESTSTESTSETEST

//#define TEST �� ���� ��.
//************
//++++++++++++++ +

