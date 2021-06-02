#include "ch05_person.h"

int main()
{
	PERSON p1 = { 12, "±è°©µ¹", "¼­¿ï½Ã °­³²±¸", "010-1234-5687", "01/01/01" };

	cout << p1.num << endl;
	cout << p1.name << endl;
	cout << p1.address << endl;
	cout << p1.tel << endl;
	cout << p1.birth << endl;

	return 0;
}


//12
//±è°©µ¹
//¼­¿ï½Ã °­³²±¸
//010 - 1234 - 5687
//01 / 01 / 01