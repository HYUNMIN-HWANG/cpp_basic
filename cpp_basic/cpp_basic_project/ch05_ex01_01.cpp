#include "ch05_person.h"

int main()
{
	ITEM a;
	int temp;

	cout << "Month�� �ּ� : " << &a.Month << endl;
	cout << "Day�� �ּ� : " << &a.Day << endl;

	temp = (int)a.ItemName;	// ���� �迭�̱� ������ �迭 �̸��� �ּҸ� ��Ÿ��, ���� �迭 �̸��� ����ϸ� �ش� ���� �迭�� ����� ���ڿ��� ��µȴ�.

	cout << "ItemName�� �ּ� : " << setiosflags(ios::uppercase) << setfill('0') << setw(8) << hex << temp << endl;
	//  setiosflags(ios::uppercase) : 16������ ����� ��� ���ĺ��� ���Ե� ��� �빮�ڷ� ǥ����
	//  setw(8) : 8���ڷ� �����
	//  hex : 16���� ���·� ����ϴ� ��
	cout << "Quantity�� �ּ� : " << &a.Quantity << endl;
	cout << "UnitCost�� �ּ� : " << &a.UnitCost << endl;
	cout << "Price�� �ּ� : " << &a.Price << endl;

	return 0;
}

//Month�� �ּ� : 0058F800
//Day�� �ּ� : 0058F804
//ItemName�� �ּ� : 0058F808
//Quantity�� �ּ� : 0058F83C
//UnitCost�� �ּ� : 0058F840
//Price�� �ּ� : 0058F844