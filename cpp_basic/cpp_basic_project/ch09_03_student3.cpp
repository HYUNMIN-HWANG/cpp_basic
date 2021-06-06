// 생성자 초기화 목록
// : 생성자 함수 실행에서 멤버 변수의 값을 초기화하는 내용을 포함한 형태
// : 생성자 함수 정의에서 헤더 부분에 콜론을 입력하고 명시하며 함수 호출 형태로 구성된다.
// : 멤버 변수의 초깃값을 설정하거나 다른 생성자 함수를 호출할 수 있기 때문에 유용하게 사용될 수 있다.

#include "ch09_03_student3.h"

Student::Student(const int s1, const int s2, const int s3)	// 생성자 함수
	: sum(0), average(0)	// 생성자 초기화 목록
{
	score[0] = s1;
	score[1] = s2;
	score[2] = s3;
}