#include <iostream>
using namespace std;

int main()
{
	int weight[5] = { 68, 35, 77, 89, 99 };
	int s[5] = { 0, };	//나머지는 모두 0으로 초기화
	int a[5] = { 1,2, };//나머지는 모두 0으로 초기화
	int i = 0;

	for (i = 0; i < 5; i++)
		cout << "weight[" << i << "] : " << weight[i] << endl;

	cout << "************************" << endl;

	for (i = 0; i < 5; i++)
		cout << "s[" << i << "] : " << s[i] << endl;

	cout << "************************" << endl;

	for (i = 0; i < 5; i++)
		cout << "a[" << i << "] : " << a[i] << endl;

	return 0;

}

//weight[0] : 68
//weight[1] : 35
//weight[2] : 77
//weight[3] : 89
//weight[4] : 99
//* ***********************
//s[0] : 0
//s[1] : 0
//s[2] : 0
//s[3] : 0
//s[4] : 0
//* ***********************
//a[0] : 1
//a[1] : 2
//a[2] : 0
//a[3] : 0
//a[4] : 0