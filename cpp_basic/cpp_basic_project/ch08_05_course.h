#ifndef _CH08_05_COURSE_H_
#define _CH08_05_COURSE_H_

#include <iostream>
using namespace std;

class Course
{
public :
	void setCourseName(const char c[]);
	void setName(const char n[]);
	int	 getCourseName(char c[]);
	int getName(char n[][30]);
	int getCount();

private :
	char CourseName[30];
	char name[10][30];	// �ִ� �л� �� 10��
	int count;			// �� ������ ���� ������ ���
};

#else
#endif
