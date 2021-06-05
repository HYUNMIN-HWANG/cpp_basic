#include "ch09_01_student1.h"

int main()
{
	Student p1;	// 객체가 생성되면서 생성자도 자동으로 실행됨

	p1.ShowScore();	// 생성자로 인해서 모두 0으로 초기화되었음

	cout << "*********************" << endl;

	p1.setScore(9, 93, 89);
	p1.SumAverage();
	p1.ShowScore();

	return 0;
}

//점수 1 : 0
//점수 2 : 0
//점수 3 : 0
//총점 : 0
//평균 : 0
//* ********************
//점수 1 : 9
//점수 2 : 93
//점수 3 : 89
//총점 : 191
//평균 : 63.6667