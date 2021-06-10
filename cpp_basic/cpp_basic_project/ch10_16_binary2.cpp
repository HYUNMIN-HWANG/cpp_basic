//ch10_16_binary에서 생성한 txt 파일을 읽어 화면에 출력시켜보자.

#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main()
{
	fstream fp;
	int score;

	fp.open("ch10_16_text.txt", ios::in | ios::binary);
	if (fp.fail())
		return 1;

	while (fp.read((char*)&score, 4), !fp.eof())
		cout << setw(3) << right << score << endl;

	fp.close();
	return 0;
}

// 78
// 96
//100
// 25
// 96