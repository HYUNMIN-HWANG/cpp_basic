//구조체의 장점
//구조체형 변수를 사용하면 구조체형에 포함된 멤버를 한 번에 또 다른 구조체의 변수에 할당할 수 있다.

#include <iostream>
#include <string>
using namespace std;

//일반 변수를 사용했을 때, 
//Name, Name1, MPhoneNum, MPhoneNum1을 따로 선언해줘야 한다.
/*
int main()
{
	char Name[30] = "";
	char MPhoneNum[20] = "";

	char Name1[30] = "";
	char MPhoneNum1[20] = "";

	strcpy_s(Name, 30, "김갑돌");
	strcpy_s(MPhoneNum, 20, "010-1234-5678");

	strcpy_s(Name1, 30, Name);
	strcpy_s(MPhoneNum1, 20, MPhoneNum);

	cout << Name << endl;
	cout << MPhoneNum << endl;

	cout << Name1 << endl;
	cout << MPhoneNum << endl;

	return 0;
}
*/

int main()
{
	struct
	{
		char Name[30];
		char MPhoneNum[20];
	} Friend, Friend1;

	strcpy_s(Friend.Name, 30, "김갑돌");
	strcpy_s(Friend.MPhoneNum, 20, "010-1234-5689");

	Friend1 = Friend;

	cout << Friend.Name << endl;
	cout << Friend.MPhoneNum << endl;

	cout << Friend1.Name << endl;
	cout << Friend1.MPhoneNum << endl;

	return 0;
}

//김갑돌
//010 - 1234 - 5689
//김갑돌
//010 - 1234 - 5689