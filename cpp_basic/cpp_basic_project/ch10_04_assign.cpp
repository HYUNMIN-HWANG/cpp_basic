// assign() : ���ڿ� ��ü�� ���� �����ϴ� ��� �Լ�

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	str.assign("Ineresting");
	cout << "str :" << str << endl;

	str.assign("ComputerScience", 8, 7);
	cout << "str : " << str << endl;

	str.assign("ComputerScicene", 8);
	cout << "str : " << str << endl;

	str.assign(10, 'Y');
	cout << "str : " << str << endl;

	return 0;
}

//str:Ineresting
//str : Science
//str : Computer
//str : YYYYYYYYYY