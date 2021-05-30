// do ~ while : 무조건 한 번은 실행한 다음 이후 조건 결과에 의해 다음 실행 여부가 결정된다.

#include <iostream>
using namespace std;

int main()
{
	int score;
	char flag = 'y';


	do {
		if (flag == 'n')
			cout << "점수의 범위가 잘못되었습니다. 다시 입력하세요!!!" << endl;

		cout << "점수 입력 : ";
		cin >> score;
		flag = 'n';
	} while (score > 100 || score < 0);

	cout << "당신이 입력한 점수는 " << score << endl;

	return 0;
}

//점수 입력 : 101
//점수의 범위가 잘못되었습니다.다시 입력하세요!!!
//점수 입력 : 400
//점수의 범위가 잘못되었습니다.다시 입력하세요!!!
//점수 입력 : -49
//점수의 범위가 잘못되었습니다.다시 입력하세요!!!
//점수 입력 : 60
//당신이 입력한 점수는 60