// 참조 객체 : 이미 생성된 객체를 다른 이름으로 부르는 것,
// 선언과 동시에 반드시 초기화 해야 한다.
// 클래스이름 &참조객체이름 = 객체 이름;

#include <iostream>
using namespace std;

class Student
{
public:
	Student(const int s1 = 0, const int s2 = 0, const int s3 = 0);	// 생성자
	~Student();	// 소멸자
	void Sum();
	int getSum();
private :
	int score1, score2, score3, sum;
};

Student::Student(const int s1, const int s2, const int s3)	// 생성자
	:sum(0)	// 생성자 초기화 목록
{
	score1 = s1;
	score2 = s2;
	score3 = s3;
}

Student::~Student()
{
	cout << "소멸자입니다." << endl;
}

void Student::Sum()
{
	sum = score1 + score2 + score3;
}

int Student::getSum()
{
	return sum;
}

int main()
{
	Student Obj(100, 89, 97);	// 객체 생성, 생성자 호출 (정적)
	Obj.Sum();
	cout << "1 총점 : " << Obj.getSum() << endl;

	Student* p_Obj = new Student(88, 65, 60); // 객체 생성, 생성자 호출 (동적)

	p_Obj->Sum();
	cout << "2 총점 : " << p_Obj->getSum() << endl;

	delete (p_Obj);	 // 동적으로 할당한 공간 해제, 동적 객체 소멸, 소멸자 호출

	p_Obj = &Obj;	// 포인터 객체에 동일 클래스의 객체 주소를 할당
	cout << "3 총점 : " << p_Obj->getSum() << endl;

	Student& r_Obj = Obj;	// 참조 객체 생성
	cout << "4 총점 : " << r_Obj.getSum() << endl;

	cout << "Obj의 크기 : " << sizeof(Obj) << endl;
	cout << "p_Obj의 크기 : " << sizeof(p_Obj) << endl;
	cout << "r_Obj의 크기 : " << sizeof(r_Obj) << endl;

	return 0;
}

//1 총점 : 286
//2 총점 : 213
//소멸자입니다.
//3 총점 : 286
//4 총점 : 286
//Obj의 크기 : 16
//p_Obj의 크기 : 4
//r_Obj의 크기 : 16
//소멸자입니다.