// 변수의 자료 범위 - 해당 자료형으로 나타낼 수 있는 값의 범위
// 범위를 넘는다면?

#include <iostream>
using namespace std;

int main()
{
	int a = 23, r = 0;

	r = a + 1;
	cout << a << " + 1 = " << r << endl;

	a = 2147483647;
	r = a + 1;
	cout << a << " + 1 = " << r << endl;
	
	return 0;
}

//23 + 1 = 24
//2147483647 + 1 = -2147483648
//최댓값을 넘는 경우 다시 최솟값부터 진행된다.