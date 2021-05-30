//세 과목의 점수를 배열에 입력하고 세 과목 점수의 총점을 함께 배열에 저장하는 프로그램

#include <iostream>
using namespace std;

int main()
{
	int score[4] = { 0, };	//모두 0으로 초기화
	int i = 0;

	for (i = 0; i < 3; i++)
	{
		cout << "점수 " << i + 1 << " 입력";
		cin >> score[i];
		score[3] = score[3] + score[i]; //점수를 누적하여 더함
	}

	for (i = 0; i < 4; i++)
		cout << score[i] << "            ";

	cout << endl;

	return 0;

}

//점수1입력30
//점수2입력50
//점수3입력70
//30            50            70            150
