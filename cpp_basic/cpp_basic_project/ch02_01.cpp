//변수와 상수
// 변수 : 기억 장소
// 상수 : 기억 장소에 저장된 값, 변수에 저장될 수도 있고 별도의 변수 할당 없이 사용될 수도 있다.
// 선언 : 변수는 반드시 사용하기 전에 알려야 함, 데이터 유형을 나타내야 함
#include <iostream>
using namespace std;

int main()
{
	int kor, math, eng, sum;
	float average;

	kor = 100;
	math = 98;
	eng = 79;

	sum = kor + math + eng;
	average = sum / (float)3;

	cout << "총점 : " << sum << endl;
	cout << "평균 : " << average << endl;

	return 0;

}