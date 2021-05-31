#include <iostream>
using namespace std;

//int main()
//{
//	char ch = 'y', name[30] = "KabDol";
//
//	cout << &ch << endl;
//	cout << name << endl;
//	cout << &name[0] << endl;
//
//	return 0;
//}

//y儆儆꺜5燧 ?  ?			<<- \0이 있는 곳까지 메모리를 접근하기 떄문에 이상한 문자들이 함께 표시된다. 숫자 형태로 변환 시켜 보는 게 더 편하다.
//KabDol
//KabDol

///////////////////////////////////////////

int main()
{
	char ch = 'y', name[30] = "KabDol";

	cout << hex << (int)&ch << endl;
	cout << hex << (int)name << endl;
	cout << hex << (int)&name[0] << endl;

	return 0;
}

//8ff73b
//8ff710
//8ff710