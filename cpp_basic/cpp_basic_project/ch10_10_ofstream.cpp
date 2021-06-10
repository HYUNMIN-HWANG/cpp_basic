#include <iostream>
#include <fstream>	// 파일과 관련된 입출력
using namespace std;

int main()
{
	//파일출력
	//ofstream 객체이름;
	ofstream output;
	output.open("ch10_10_text.txt");
	output << "즐거운 프로그래밍!!!" << endl;
	//output : open에서 정한 파일에 "즐거운 프로그래밍!!!"을 출력
	//endl : 커서를 다음 줄로 이동
	output.close();
	//파일을 닫는다.

	return 0;
}