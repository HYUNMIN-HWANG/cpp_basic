//�� ������ ������ �迭�� �Է��ϰ� �� ���� ������ ������ �Բ� �迭�� �����ϴ� ���α׷�

#include <iostream>
using namespace std;

int main()
{
	int score[4] = { 0, };	//��� 0���� �ʱ�ȭ
	int i = 0;

	for (i = 0; i < 3; i++)
	{
		cout << "���� " << i + 1 << " �Է�";
		cin >> score[i];
		score[3] = score[3] + score[i]; //������ �����Ͽ� ����
	}

	for (i = 0; i < 4; i++)
		cout << score[i] << "            ";

	cout << endl;

	return 0;

}

//����1�Է�30
//����2�Է�50
//����3�Է�70
//30            50            70            150
