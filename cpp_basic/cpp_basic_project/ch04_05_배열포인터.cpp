//�迭�� ���� �ּҴ� �迭�� ù ���� ����� �ּҸ� �ǹ���

#include <iostream>
using namespace std;

int main()
{
	int score[3] = { 99, 98, 100 };

	cout << "score[0]�� �ּ� : " << &score[0] << endl;
	cout << "score[1]�� �ּ� : " << &score[1] << endl;
	cout << "score[2]�� �ּ� : " << &score[2] << endl;

	cout << "****************************************" << endl;

	for (int i = 0; i < 3; i++)
		cout << "score[" << i << "]�� �ּ�: " << &score[i] << endl;

	cout << "****************************************" << endl;

	cout << "score[0]�� �ּ� : " << score << endl;
	cout << "score[1]�� �ּ� : " << score+1 << endl;
	cout << "score[2]�� �ּ� : " << score+2 << endl;

	cout << "****************************************" << endl;

	for (int i = 0; i < 3; i++)
		cout << "score[" << i << "]�� �ּ�: " << score + i << endl;

	return 0;

}

//score[0]�� �ּ� : 0059F79C
//score[1]�� �ּ� : 0059F7A0
//score[2]�� �ּ� : 0059F7A4
//****************************************
//score[0]�� �ּ� : 0059F79C
//score[1]�� �ּ� : 0059F7A0
//score[2]�� �ּ� : 0059F7A4
//****************************************
//score[0]�� �ּ� : 0059F79C
//score[1]�� �ּ� : 0059F7A0
//score[2]�� �ּ� : 0059F7A4
//****************************************
//score[0]�� �ּ� : 0059F79C
//score[1]�� �ּ� : 0059F7A0
//score[2]�� �ּ� : 0059F7A4