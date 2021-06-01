//typedef : 이미 정의된 내용을 다시 정의하는 역할

//(1)
//typedef [이미 정의된 내용] [새로 정의해서 사용할 내용];

//(2)
//typedef struct 
//{
//     구조체 멤버 선언;
//} 재정의 이름;

#include <iostream>
#include <string>
using namespace std;

int main()
{
	struct sam
	{
		char Name[30];
		char MPhoneNum[20];
	};

	typedef struct sam SAM; //sam을 SAM으로 재정의

	SAM Friend, Friend1;

	strcpy_s(Friend.Name, 30, "김갑돌");
	strcpy_s(Friend.MPhoneNum, 20, "010-1234-5687");

	Friend1 = Friend;

	cout << Friend.Name << endl;
	cout << Friend.MPhoneNum << endl;

	cout << Friend1.Name << endl;
	cout << Friend1.MPhoneNum << endl;

	return 0;

}