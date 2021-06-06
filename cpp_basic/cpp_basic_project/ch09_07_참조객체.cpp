// ���� ��ü : �̹� ������ ��ü�� �ٸ� �̸����� �θ��� ��,
// ����� ���ÿ� �ݵ�� �ʱ�ȭ �ؾ� �Ѵ�.
// Ŭ�����̸� &������ü�̸� = ��ü �̸�;

#include <iostream>
using namespace std;

class Student
{
public:
	Student(const int s1 = 0, const int s2 = 0, const int s3 = 0);	// ������
	~Student();	// �Ҹ���
	void Sum();
	int getSum();
private :
	int score1, score2, score3, sum;
};

Student::Student(const int s1, const int s2, const int s3)	// ������
	:sum(0)	// ������ �ʱ�ȭ ���
{
	score1 = s1;
	score2 = s2;
	score3 = s3;
}

Student::~Student()
{
	cout << "�Ҹ����Դϴ�." << endl;
}

void Student::Sum()
{
	sum = score1 + score2 + score3;
}

int Student::getSum()
{
	return sum;
}

int main()
{
	Student Obj(100, 89, 97);	// ��ü ����, ������ ȣ�� (����)
	Obj.Sum();
	cout << "1 ���� : " << Obj.getSum() << endl;

	Student* p_Obj = new Student(88, 65, 60); // ��ü ����, ������ ȣ�� (����)

	p_Obj->Sum();
	cout << "2 ���� : " << p_Obj->getSum() << endl;

	delete (p_Obj);	 // �������� �Ҵ��� ���� ����, ���� ��ü �Ҹ�, �Ҹ��� ȣ��

	p_Obj = &Obj;	// ������ ��ü�� ���� Ŭ������ ��ü �ּҸ� �Ҵ�
	cout << "3 ���� : " << p_Obj->getSum() << endl;

	Student& r_Obj = Obj;	// ���� ��ü ����
	cout << "4 ���� : " << r_Obj.getSum() << endl;

	cout << "Obj�� ũ�� : " << sizeof(Obj) << endl;
	cout << "p_Obj�� ũ�� : " << sizeof(p_Obj) << endl;
	cout << "r_Obj�� ũ�� : " << sizeof(r_Obj) << endl;

	return 0;
}

//1 ���� : 286
//2 ���� : 213
//�Ҹ����Դϴ�.
//3 ���� : 286
//4 ���� : 286
//Obj�� ũ�� : 16
//p_Obj�� ũ�� : 4
//r_Obj�� ũ�� : 16
//�Ҹ����Դϴ�.