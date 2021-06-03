//구조체형 일반 변수 (call by value)

#include <iostream>
using namespace std;

// 구조체형 PERSON 선언 
typedef struct
{
	char name[30];
	int age;
} PERSON;

// 함수 선언 : TEST1의 매개변수가 PERSON형 일반 변수 인 것.
int TEST1(PERSON p);

int main()
{
	PERSON a = { "김갑돌", 18 };

	cout << "main name : " << a.name << endl;
	cout << "main age : " << a.age << endl;

	TEST1(a);	// 함수 호출 (구조체형 변수를 넣는다.)

	cout << "*************************" << endl;

	cout << "main name : " << a.name << endl;
	cout << "main age : " << a.age << endl;

	return 0;
}

int TEST1(PERSON p)
{
	cout << "*************************" << endl;

	cout << "TEST1 name : " << p.name << endl;
	cout << "TEST1 age : " << p.age << endl;

	strcpy_s(p.name, 30, "강백호");
	p.age = 16;

	cout << "TEST1 name : " << p.name << endl;
	cout << "TEST1 age : " << p.age << endl;

	return 0;
}


//main name : 김갑돌
//main age : 18
//* ************************
//TEST1 name : 김갑돌
//TEST1 age : 18
//TEST1 name : 강백호  <<<<<<<<< PERSON 구조체 내에서 변경된 값은 main()에 있는 a에 영향을 주지 않는다.
//TEST1 age : 16
//* ************************
//main name : 김갑돌
//main age : 18