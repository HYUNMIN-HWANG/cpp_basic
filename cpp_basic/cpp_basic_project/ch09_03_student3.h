#ifndef _CH09_03_STUDENT3_H_
#define _CH09_03_STUDENT3_H_

#include <iostream>
using namespace std;

class Student
{
public:
	// �Լ��� �⺻ �Ű����� �� ���� : �Լ��� �Ű������� ���޵��� �ʴ� ��� �Ű������� �ʱ갪�� ���� �� �ִ�.
	// �Ű������� ���� ���·� ��ü�� �����Ǹ� -> �⺻ �Ű����� ���� ���ȴ�.
	Student(const int s1 = 0, const int s2 = 0, const int s3 = 0); // ������(�⺻ �Ű����� ���� ���� ����)
	void setScore(const int s1, const int s2, const int s3);
	void Showcase();
	void SumAverage();

private :
	int score[3], sum;
	double average;
};


#else
#endif
