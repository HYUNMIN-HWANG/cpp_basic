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

//y���̃�5� ?  ?			<<- \0�� �ִ� ������ �޸𸮸� �����ϱ� ������ �̻��� ���ڵ��� �Բ� ǥ�õȴ�. ���� ���·� ��ȯ ���� ���� �� �� ���ϴ�.
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