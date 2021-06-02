// 구조체 포인터
// (*구조체형 포인터 변수).멤버

#include <iostream>
using namespace std;

typedef struct
{
	char Name[30];
	char MPhoneNum[20];
} SAM;

int main()
{
	SAM a = { "김행복", "010-1234-5678" };
	SAM* pa;
	
	pa = &a;

	cout << "이름 : " << a.Name << endl;
	//cout << "이름 : " << (*pa).Name << endl;
	//중괄호를 쓰기 번거롭다 !!

	cout << "이름 : " << pa->Name << endl;
	cout << "전화번호 : " << pa->MPhoneNum << endl;


	return 0;

}

//이름: 김행복
//이름 : 김행복
//전화번호 : 010 - 1234 - 5678