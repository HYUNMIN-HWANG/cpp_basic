//구조체형 포인터 변수 (call by reference)

#include <iostream>
using namespace std;

typedef struct
{
	char name[30];
	int age;
} PERSON;

// 함수 선언 : PERSON형 포인터 변수를 매개변수로 사용함
int TEST2(PERSON* p);

int main()
{
	PERSON a = { "김갑돌", 17 };

	cout << "main name : " << a.name << endl;
	cout << "main age : " << a.age << endl;

	TEST2(&a);

	cout << "***********************" << endl;

	cout << "main name : " << a.name << endl;
	cout << "main age : " << a.age << endl;

	return 0;
}

int TEST2(PERSON* p)
{
	cout << "***********************" << endl;
	
	cout << "TEST2 : " << p->name << endl;
	cout << "TEST2 : " << p->age << endl;

	strcpy_s(p->name, 30, "강백호");	// main에 있는 a에 접근하여 저장된 값을 갱신한다.
	p->age = 20;

	cout << "TEST2 : " << p->name << endl;
	cout << "TEST2 : " << p->age << endl;

	return 0;
}

//main name : 김갑돌
//main age : 17
//* **********************
//TEST2 : 김갑돌
//TEST2 : 17
//TEST2 : 강백호
//TEST2 : 20
//* **********************
//main name : 강백호
//main age : 20
