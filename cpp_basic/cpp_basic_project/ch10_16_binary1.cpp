//이진 파일의 입출력
//fstream 객체 이름.write(char *, 바이트 수) --> write() 파일에서 출력할 때
//fstream 객체 이름.read(char *, 바이트 수) --> read() 파일에서 읽어올 때

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	fstream fp;
	int score[5] = { 78, 96, 100, 25, 96 };

	fp.open("ch10_16_text.txt", ios::out | ios::binary); //이진파일로 출력
	fp.write((char*)score, 20);	// 20 바이트로 출력
	fp.close();

	return 0;
}

//"ch10_16_text.txt" 생성됨 , 아래가 저장된 내용
//N   `   d      `   