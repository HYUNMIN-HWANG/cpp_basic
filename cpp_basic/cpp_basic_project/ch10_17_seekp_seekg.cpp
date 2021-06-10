// 임의 접근 파일 (임의로 원하는 위치로 이동해 작업하는 것)
// seekp(바이트, 이동 기준) : 파일에 출력할 때 파일 포인터를 지정한 만큼 이동
// seekg(바이트, 이동 기준) : 파일에 입력할 떄 파일 포인터를 지정한 만큼 이동


// 이동 기준 : 
// ios::beg 파일의 처음 시작위치부터 지정한 바이트만큼 이동
// ios::end 파일의 마지막 위치부터 지정한 바이트만큼 이동
// ios::cur 현재 위치부터 지정한 바이트만큼 이동

#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main()
{
	fstream fp;
	int score;
	// 78 96 100 25 96
	fp.open("ch10_16_text.txt", ios::in | ios::binary);
	if (fp.fail())
		return 1;

	fp.read((char*)&score, 4);
	cout << setw(3) << right << score << endl;

	fp.seekg(4, ios::cur);	//현재 위치에서 4바이트 이동
	fp.read((char*)&score, 4);
	cout << setw(3) << right << score << endl;

	fp.close();
	return 0;
}

//78
//100