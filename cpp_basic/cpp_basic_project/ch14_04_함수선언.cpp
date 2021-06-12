// 함수 머리 부분에 예외 처리 정보를 표시할 수 있다.
// 함수 선언 뒤에 throw(매개변수)

#include <iostream>
#pragma warning ( disable : 4290 )	// 경고메세지 4290을 표시하지 말 것
using namespace std;

int Total(const int k, const int e, const int m) throw(char *);	// 예외 발생 시, 문자열 전달
double Average(const int s, const int num) throw(char *);

int main()
{
	int kor = -100, eng = 99, math = 98;
	int total = 0;
	double aver;

	try
	{
		total = Total(kor, eng, math);
		aver = Average(total, 0);

		cout << "합 : " << total << endl;
		cout << "평균 : " << aver << endl;
	}
	catch (char* msg)
	{
		cout << "*********************" << endl;
		cout << msg << endl;
	}

	return 0;
}

int Total(const int k, const int e, const int m) throw(char *)
{
	if (k < 0 || e < 0 || m < 0)
		throw "과목 점수는 0보다 커야 합니다.";
	return k+e+m;
}

double Average(const int s, const int num) throw(char *)
{
	if (s < 0 || num <= 0)
		throw "잘못된 매개변수입니다.";
	return s/(double)num;
}

// 안 돌아감...