#include <iostream>
using namespace std;

// Ŭ���� ���� (private) -> ���� �߻�
//class IntSample
//{
//	// private : ������
//	void ShowScore();
//	int Score();
//};

// Ŭ���� ���� (public)	-> ���� �۵�
class IntSample
{
public : 
	void ShowScore();
	int Score;
};

// Ŭ���� ��� �Լ� ����
void IntSample::ShowScore()
{
	cout << " ���� : " << Score << endl;
}

int main()
{
	IntSample Obj;

	Obj.Score = 100;	// ��ü Obj�� ��� ���� Score�� �� �Ҵ��ϱ�
	Obj.ShowScore();	// ��ü Obj�� ��� �Լ� ShowScore() ȣ���ϱ�

	return 0;
}

// Ŭ���� ���� (private) -> ���� �߻�
// ��� �Ӽ��� private�̱� ������ ���� Ŭ���� �������� ������ ����ȴ�.
// IntSample Ŭ������ ������ main() �Լ������� ������ �� ����.
//E0265	�Լ� "IntSample::Score" (����� �� 8)�� �׼����� �� �����ϴ�.
//E0265	�Լ� "IntSample::ShowScore" (����� �� 12)�� �׼����� �� �����ϴ�.

// Ŭ���� ���� (public)	-> ���� �۵�
//  ���� : 100