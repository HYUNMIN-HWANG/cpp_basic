// continue :  반복 범위 처음으로 실행 제어를 이동하게 한다.

#include <iostream>
using namespace std;

int main()
{
	int i;
	for (i = 1;i < 10; i++)
	{
		if (i % 2 == 0)
			continue;	// 반복문의 처음으로 이동함
		cout << "i = " << i << endl;

	}
	return 0;
}

//i = 1
//i = 3
//i = 5
//i = 7
//i = 9