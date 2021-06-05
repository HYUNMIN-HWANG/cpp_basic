#ifndef _CH09_02_STUDENT2_H_
#define _CH09_02_STUDENT2_H_

#include <iostream>
using namespace std;

class Student
{
public :
	Student();	//생성자 : 객체 생성 시 매개변수가 없는 경우 호출됨
	Student(const int s1, const int s2, const int s3);	//생성자 : 세 개의 정수형 값 매개변수가 있는 경우 호출됨
	void setScore(const int s1, const int s2, const int s3);
	void ShowScore();
	void SumAverage();
private :
	int score[3], sum;
	double average;
};

#else
#endif
