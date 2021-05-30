#include <iostream>
using namespace std;

int main()
{
	int b = 300;
	int* pb = &b;

	cout << b << endl;
	cout << pb << endl;

	b = 200;

	cout << *pb << endl;
	cout << &b << endl;

	return 0;
}

//300
//00EFFDD0
//200
//00EFFDD0