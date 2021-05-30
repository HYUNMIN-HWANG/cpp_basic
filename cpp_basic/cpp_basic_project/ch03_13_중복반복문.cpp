// 반복문 안에 반복문

#include <iostream>
using namespace std;

int main()
{
	int i, j;

	for (i = 1; i <= 2; i++)
	{
		for (j = 1; j <= 3; j++)
		{
			cout << "i = " << i << "   " ;
			cout << "j = " << j << endl;
		}
		cout << "****************************" << endl;
	}
	return 0;
}

//i = 1   j = 1
//i = 1   j = 2
//i = 1   j = 3
//* ***************************
//i = 2   j = 1
//i = 2   j = 2
//i = 2   j = 3
//* ***************************