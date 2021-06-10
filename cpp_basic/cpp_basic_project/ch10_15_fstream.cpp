// fstream = ifstream + ofstream
// fstream의 객체.open(파일 이름, 파일 모드)

// ios::in  파일에서 읽어오기
// ios::out 파일에 출력하기
// ios::app 파일에 추가하여 출력하기
// ios::trunc 파일이 이미 존재하는 경우 삭제하고 새로운 파일로 생성하여 출력
// ios::binary 이진 파일로 처리하기

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	fstream fs;	// 파일 객체 생성

	fs.open("ch10_15_text.txt", ios::out);	//출력모드
	if (fs.fail())
		return 0;

	fs << "keyboard" << endl;	//txt 파일에 저장됨
	fs << "monitor" << endl;

	fs.close();

	fs.open("ch10_15_text.txt", ios::app);	//쓰기모드
	fs << "desk" << endl;
	fs.close();

	fs.open("ch10_15_text.txt", ios::in);	//읽기모드
	string temp;

	while (fs >> temp, !fs.eof())
	{
		cout << temp << endl;
	}

	fs.close();

	return 0;
}

//keyboard
//monitor
//desk