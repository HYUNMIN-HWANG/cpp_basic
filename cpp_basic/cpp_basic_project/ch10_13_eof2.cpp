//txt 파일을 불러와서 한 줄씩 읽어서 화면에 출력하는 동작을 수행해보자.
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream input;	// 입력 파일 객체 생성
	char word[50] = { 0, };

	input.open("ch10_13_text.txt");	// 파일 열기

	if (input.fail())
		return 1;

	while (input.eof() == false)	// 파일 내 읽을 내용이 있으면 파일의 끝이 아니므로 false
		//! input.eof() 와 동일함
	{
		input >> word;
		cout << word << endl;
	}

	input.close();

	return 0;
}

//science
//korean
//computer
//english
//keyboard
