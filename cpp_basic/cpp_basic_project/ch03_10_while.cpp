#include <iostream>
using namespace std;

int main()
{
	int i;
	i = 1;

	while (i <= 5)
	{
		cout << "i= " << i << endl;
		i++;
	}

	cout << "while문 이후 i의 값 " << i << endl;

	return 0;
}

//i = 1
//i = 2
//i = 3
//i = 4
//i = 5
//while문 이후 i의 값 6