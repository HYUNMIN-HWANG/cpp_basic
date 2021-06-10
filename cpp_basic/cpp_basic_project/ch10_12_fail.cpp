// fail : 파일의 존재 여부를 확인하는 멤버 함수
// 객체를 생성한 후 파일 열기를 실행하고 파일 존재 여부를 확인한 다음 작업을 수행하면 파일 생성 시 발생한 오류를 방지할 수 있다.
// 파일이 없으면 true, 파일이 있으면 false를 반환

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream input;	//파일 객체 생성
	input.open("ch10_12_FileTest.txt");	//파일 열기
	if (input.fail())
	{
		cout << "파일이 존재하지 않습니다 !! " << endl;	//파일이 없으면 true 반환
		return 0;
	}
	else
	{
		cout << "파일 열기 후 실행하세요." << endl;	// 파일이 있으면 false 반환
		input.close();	//파일을 열었다면 반드시 닫아야 한다.
	}

	return 0;
}

//파일이 존재하지 않습니다 !!