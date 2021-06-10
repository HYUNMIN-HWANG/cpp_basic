// ���� ���� ���� (���Ƿ� ���ϴ� ��ġ�� �̵��� �۾��ϴ� ��)
// seekp(����Ʈ, �̵� ����) : ���Ͽ� ����� �� ���� �����͸� ������ ��ŭ �̵�
// seekg(����Ʈ, �̵� ����) : ���Ͽ� �Է��� �� ���� �����͸� ������ ��ŭ �̵�


// �̵� ���� : 
// ios::beg ������ ó�� ������ġ���� ������ ����Ʈ��ŭ �̵�
// ios::end ������ ������ ��ġ���� ������ ����Ʈ��ŭ �̵�
// ios::cur ���� ��ġ���� ������ ����Ʈ��ŭ �̵�

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

	fp.seekg(4, ios::cur);	//���� ��ġ���� 4����Ʈ �̵�
	fp.read((char*)&score, 4);
	cout << setw(3) << right << score << endl;

	fp.close();
	return 0;
}

//78
//100