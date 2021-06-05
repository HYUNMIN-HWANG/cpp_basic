#include "ch09_02_student2.h"

int main()
{
	Student p1; // 매개변수 없이 생성된 객체
	p1.setScore(99, 90, 67);
	p1.SumAverage();
	p1.ShowScore();

	cout << "************************" << endl;

	Student p2(40, 60, 90);	// 3개의 매개변수가 있는 객체
	p2.SumAverage();
	p2.ShowScore();

	return 0;
}

//점수 1 : 99
//점수 2 : 90
//점수 3 : 67
//총점 : 256
//평균 : 85
//*************************
//점수 1 : 40
//점수 2 : 60
//점수 3 : 90
//총점 : 190
//평균 : 63