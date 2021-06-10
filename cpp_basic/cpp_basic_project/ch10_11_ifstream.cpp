//ifstram : 파일을 읽어올 때 사용 (cin 대신 사용)

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream input;	// 파일 입력을 알리기 위함
	char message[80];

	input.open("ch10_10_text.txt");

	input >> message;	// 빈칸 전의 문자열만 저장한다. // "즐거운 프로그래밍!!" 일 때, "즐거운"만 출력됨
	cout << message << endl;

	input.close();

	return 0;
}

// 즐거운