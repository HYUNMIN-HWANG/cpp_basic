//eof : 파일에서 내용을 읽어온 경우 파일의 마지막인가를 확인하는 멤버 함수
//End of File
//파일의 마지막이 아니면 거짓인 false를 반환, 마지막이면 true 반환

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ofstream output;	//출력 파일 객체 생성
	char cont = 'y';
	char word[50] = { 0, };

	output.open("ch10_13_text.txt"); //출력 파일 열기

	if (output.fail())
		return 1;


	while (cont == 'y' || cont == 'Y')
	{
		cout << "단어 입력 : ";
		cin >> word;	// 표준 입력장치 - 키보드로 자료 입력

		output << word << endl; //출력 파일에 내용 출력 --> 단어를 파일에 출력하고 이어서 커서를 다음 줄로 놓는 endl를 출력시킴

		cout << "계속하시겠습니까? [y/n] ";
		cin >> cont;
	}

	output.close();

	return 0;

}

//단어 입력 : science
//계속하시겠습니까 ? [y / n] y
//단어 입력 : korean
//계속하시겠습니까 ? [y / n] y
//단어 입력 : computer
//계속하시겠습니까 ? [y / n] y
//단어 입력 : english
//계속하시겠습니까 ? [y / n] y
//단어 입력 : keyboard
//계속하시겠습니까 ? [y / n] n