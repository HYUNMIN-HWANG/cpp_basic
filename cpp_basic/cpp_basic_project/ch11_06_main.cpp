#include "ch11_06_contest.h"

int main()
{
	CON2* p_TEST = new CON2;

	delete p_TEST;

	return 0;
}

//***CON1 생성자***
//*** CON2 생성자***
//*** CON2 소멸자***
//*** CON1 소멸자***

// 생성자는 Con1 -> con2 순서 (기반 -> 파생)
// 소멸자는 con2 -> conv1 순서 (파생 -> 기반)