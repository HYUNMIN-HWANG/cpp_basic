#ifndef _CH09_03_STUDENT3_H_
#define _CH09_03_STUDENT3_H_

#include <iostream>
using namespace std;

class Student
{
public:
	// 함수의 기본 매개변수 값 설정 : 함수의 매개변수가 전달되지 않는 경우 매개변수의 초깃값을 정할 수 있다.
	// 매개변수가 없는 형태로 객체가 생성되면 -> 기본 매개변수 값이 사용된다.
	Student(const int s1 = 0, const int s2 = 0, const int s3 = 0); // 생성자(기본 매개변수 값을 갖고 있음)
	void setScore(const int s1, const int s2, const int s3);
	void Showcase();
	void SumAverage();

private :
	int score[3], sum;
	double average;
};


#else
#endif
