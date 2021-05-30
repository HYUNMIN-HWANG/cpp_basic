// 조건이 참일 때 또는 거짓일 때 실행할 문장이 여러 개라면 블록으로 표시하여 표시

#include <iostream>
using namespace std;

int main()
{
	int jumsu;

	cout << "점수 입력: ";
	cin >> jumsu;

	if (jumsu > 100 || jumsu < 0)
		cout << "잘못된 점수입니다." << endl;
	else if (jumsu >= 90)
		cout << "당신의 성적은 A입니다." << endl;
	else if (jumsu >=80 && jumsu <=89)
		cout << "당신의 성적은 B입니다." << endl;
	else if (jumsu >= 70 && jumsu <= 79)
		cout << "당신의 성적은 C입니다." << endl;
	else if (jumsu >= 60 && jumsu <= 69)
		cout << "당신의 성적은 D입니다." << endl;
	else
		cout << "당신의 성적은 F입니다." << endl;

	return 0;
}

//점수 입력 : 99
//당신의 성적은 A입니다.

//점수 입력 : 29
//당신의 성적은 F입니다.

//점수 입력 : 1000
//잘못된 점수입니다.

//점수 입력 : -80
//잘못된 점수입니다.