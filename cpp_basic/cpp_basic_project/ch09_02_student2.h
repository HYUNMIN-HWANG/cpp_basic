#ifndef _CH09_02_STUDENT2_H_
#define _CH09_02_STUDENT2_H_

#include <iostream>
using namespace std;

class Student
{
public :
	Student();	//������ : ��ü ���� �� �Ű������� ���� ��� ȣ���
	Student(const int s1, const int s2, const int s3);	//������ : �� ���� ������ �� �Ű������� �ִ� ��� ȣ���
	void setScore(const int s1, const int s2, const int s3);
	void ShowScore();
	void SumAverage();
private :
	int score[3], sum;
	double average;
};

#else
#endif
