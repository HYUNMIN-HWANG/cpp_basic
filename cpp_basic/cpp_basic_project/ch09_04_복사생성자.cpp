// �̹� ������ ��ü�� ���� �Ҵ�ޱ�
// ���� ������(Copy Constructor) - �����Ǵ� ��ü�� �̹� ������ ��ü�� ���� �����ϴ� ������ �����Ѵ�.
// ����� >>>> Ŭ�����̸� �����Ұ�ü(�����Ұ�ü);

#include <iostream>
using namespace std;

class CopyObj {
public:
	CopyObj(const double height, const double weight);	// ������
	void ShowVar();	// ��� �Լ�
private :
	double height;
	double weight;
};

CopyObj::CopyObj(const double height, const double weight)
{
	this->height = height;	// this ������ : ��ü�� �ּҸ� ������ ������ ����
	this->weight = weight;
}

void CopyObj::ShowVar()
{
	cout << "Ű : " << height << endl;
	cout << "������ : " << weight << endl;
}

int main()
{
	CopyObj p1(181.5, 79.1);
	p1.ShowVar();

	cout << "******************" << endl;

	CopyObj p2(p1);	//��ü ���� & ���� ������ ȣ�� >> p1 ��ü�� p2 ��ü�� ���� >> p1�� p2�� ��� �������� ������
	p2.ShowVar();

	return 0;

}

//Ű: 181.5
//������ : 79.1
//* *****************
//Ű : 181.5
//������ : 79.1