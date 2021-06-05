#include "ch08_05_course.h"

int main()
{
	// Course 클래스 객체 c1 생성
	Course c1;
	char course[30] = { 0, }, name[30] = { 0, }, ch = 'y';
	char t_name[10][30] = { 0, };
	int i, count = 0;

	cout << "과정명 입력 : ";
	cin >> course;

	c1.setCourseName(course);

	while (ch == 'y' || ch == 'Y')
	{
		cout << "수강 학생 이름 입력 : ";
		cin >> name;

		c1.setName(name);

		cout << "계속하시겠습니까? (y/n) ";
		cin >> ch;
	}

	cout << "*******************" << endl;

	c1.getCourseName(course);
	cout << "과목명 : " << course << endl;


	c1.getName(t_name);
	count = c1.getCount();

	cout << "수강 학생 명단 " << endl;

	for (i = 0; i < count; i++)
		cout << t_name[i] << "  ";
	cout << endl;

	cout << "총 수강생 수 : " << count << "명 " << endl;

	return 0;
}

//과정명 입력 : CppBasic
//수강 학생 이름 입력 : Tommy
//계속하시겠습니까 ? (y / n) y
//수강 학생 이름 입력 : Gerrmy
//계속하시겠습니까 ? (y / n) y
//수강 학생 이름 입력 : Jabes
//계속하시겠습니까 ? (y / n) y
//수강 학생 이름 입력 : Yacob
//계속하시겠습니까 ? (y / n) y
//수강 학생 이름 입력 : Minzy
//계속하시겠습니까 ? (y / n) n
//* ******************
//과목명 : CppBasic
//수강 학생 명단
//Tommy  Gerrmy  Jabes  Yacob  Minzy
//총 수강생 수 : 5명