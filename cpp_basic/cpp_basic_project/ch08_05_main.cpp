#include "ch08_05_course.h"

int main()
{
	// Course Ŭ���� ��ü c1 ����
	Course c1;
	char course[30] = { 0, }, name[30] = { 0, }, ch = 'y';
	char t_name[10][30] = { 0, };
	int i, count = 0;

	cout << "������ �Է� : ";
	cin >> course;

	c1.setCourseName(course);

	while (ch == 'y' || ch == 'Y')
	{
		cout << "���� �л� �̸� �Է� : ";
		cin >> name;

		c1.setName(name);

		cout << "����Ͻðڽ��ϱ�? (y/n) ";
		cin >> ch;
	}

	cout << "*******************" << endl;

	c1.getCourseName(course);
	cout << "����� : " << course << endl;


	c1.getName(t_name);
	count = c1.getCount();

	cout << "���� �л� ��� " << endl;

	for (i = 0; i < count; i++)
		cout << t_name[i] << "  ";
	cout << endl;

	cout << "�� ������ �� : " << count << "�� " << endl;

	return 0;
}

//������ �Է� : CppBasic
//���� �л� �̸� �Է� : Tommy
//����Ͻðڽ��ϱ� ? (y / n) y
//���� �л� �̸� �Է� : Gerrmy
//����Ͻðڽ��ϱ� ? (y / n) y
//���� �л� �̸� �Է� : Jabes
//����Ͻðڽ��ϱ� ? (y / n) y
//���� �л� �̸� �Է� : Yacob
//����Ͻðڽ��ϱ� ? (y / n) y
//���� �л� �̸� �Է� : Minzy
//����Ͻðڽ��ϱ� ? (y / n) n
//* ******************
//����� : CppBasic
//���� �л� ���
//Tommy  Gerrmy  Jabes  Yacob  Minzy
//�� ������ �� : 5��