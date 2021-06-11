// �Լ� �������̵� : ��� Ŭ������ ��� �Լ��� �Ļ� Ŭ�������� �ٽ� �����ϴ� ��
	// --> ��� Ŭ������ �����Լ��� �Ļ� Ŭ�������� �������ϴ� ��
// �������� : �Լ��� �����ǰ� �ƴ� ���α׷� ���࿡ ���ؼ� ������ ��ü�� ����� ������ �� �־�� �Ѵ�.
// ���������� ���� �� � �Լ��� ȣ������� �����ϴ� ��, �ϳ��� �Լ��� ���� Ŭ�������� �����ǵ� ������ �� �䱸�ȴ�. (������)
	// (1) ��� Ŭ������ ��� �Լ��� ���� �Լ��� ����Ǿ�� �Ѵ�.
	// (2) �Լ����� �Ű������� ���޵� ������ ��ü�� �ּҸ� �����ؾ� �Ѵ�.

#include <iostream>
using namespace std;

class A
{
public:
	virtual string ClassMessage()	// �����Լ�
	{
		return "class A";
	}
};

class B : public A
{
public:
	string ClassMessage()	// �Լ� �������̵�
	{
		return "class B";
	}
};

class C :  public B
{
public:
	string ClassMessage()	// �Լ� �������̵�
	{
		return "class C";
	}
};

void TestFunction1(A* x) // ��ü�� �ּҸ� ������
{
	cout << x->ClassMessage().data() << endl;
}

int main()
{
	A a;
	B b;
	C c;

	//TestFunction1(a);
	//TestFunction1(b);

	TestFunction1(&a);
	TestFunction1(&b);
	TestFunction1(&c);

	return 0;
}

//class A
//class B
//class C