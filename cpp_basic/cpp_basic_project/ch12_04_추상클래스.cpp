// �߻� Ŭ���� : ��ü ������ ���� �ۼ��Ǵ� ���� �ƴ϶� ��ӿ��� ��� Ŭ���� ������ ����ϵ��� ������� Ŭ������,
// ��ü������ ���� ��� �Լ��� ���� Ŭ������ ���Ѵ�

// ���� ���� �Լ� : �Լ��� ������ ���ǵ��� ���� �Լ�, �Ļ� Ŭ�������� �Լ� �������̵��� ���� �� ������ �����ȴ�.
// virtual ��ȯ�� �Լ��̸�() = 0;

// �߻� Ŭ������ ���� ���� �Լ��� �����ϰ� �����Ƿ� ��ü�� �������� ���Ѵ�.
// ���� ���� �Լ��� Ŭ���� ��ӿ� ���� �Ļ� Ŭ�������� �Լ� �������̵��Ǿ� ���Ǵ� ���� �������� �Ѵ�.

#include <iostream>
#include <string>
using namespace std;

class AbstractClass
{
public:
	virtual string SampleFunction() = 0; //���� ���� �Լ� , ���ǵǾ� ���� �ʴ�.
};

class TestClass : public AbstractClass // Ŭ���� ���
{
public:
	string SampleFunction()
	{
		return "SampleFunction";
	}
};

int main()
{
	//AbstractClass obj1;	// ����;; AbstractClass���� ���� ���� �Լ��� �����Ƿ� ��ü�� ������ �� ����. 
	TestClass obj1;

	cout << obj1.SampleFunction() << endl;

	return 0;
}

//SampleFunction