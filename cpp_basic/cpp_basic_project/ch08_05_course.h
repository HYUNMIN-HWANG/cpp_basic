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
	char name[10][30];	// 최대 학생 수 10명
	int count;			// 총 수강생 수를 저장할 멤버
};

#else
#endif
