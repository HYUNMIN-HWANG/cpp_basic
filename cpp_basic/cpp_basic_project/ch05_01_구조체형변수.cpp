#include <iostream>
#include <string>
using namespace std;

int main()
{
	//����ü ����
	struct 
	{
		char Name[30] = "";			//����ü�� ���
		char MPhoneNum[20] = "";	//����ü�� ���
	}Friend;
	
	strcpy_s(Friend.Name, "�谩��");
	strcpy_s(Friend.MPhoneNum, 20, "010-1234-5678");

	cout << Friend.Name << endl;
	cout << Friend.MPhoneNum << endl;

	return 0;
}

//�谩��
//010 - 1234 - 5678