#include <iostream>
#include <string>
using namespace std;

int main()
{
	//±¸Á¶Ã¼ ¼±¾ð
	struct 
	{
		char Name[30] = "";			//±¸Á¶Ã¼ÀÇ ¸â¹ö
		char MPhoneNum[20] = "";	//±¸Á¶Ã¼ÀÇ ¸â¹ö
	}Friend;
	
	strcpy_s(Friend.Name, "±è°©µ¹");
	strcpy_s(Friend.MPhoneNum, 20, "010-1234-5678");

	cout << Friend.Name << endl;
	cout << Friend.MPhoneNum << endl;

	return 0;
}

//±è°©µ¹
//010 - 1234 - 5678