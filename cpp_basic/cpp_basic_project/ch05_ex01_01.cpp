#include "ch05_person.h"

int main()
{
	ITEM a;
	int temp;

	cout << "Month의 주소 : " << &a.Month << endl;
	cout << "Day의 주소 : " << &a.Day << endl;

	temp = (int)a.ItemName;	// 문자 배열이기 때문에 배열 이름이 주소를 나타냄, 문자 배열 이름을 출력하면 해당 문자 배열에 저장된 문자열이 출력된다.

	cout << "ItemName의 주소 : " << setiosflags(ios::uppercase) << setfill('0') << setw(8) << hex << temp << endl;
	//  setiosflags(ios::uppercase) : 16진수로 출력할 경우 알파벳이 포함된 경우 대문자로 표기함
	//  setw(8) : 8글자로 출력함
	//  hex : 16진수 형태로 출력하는 것
	cout << "Quantity의 주소 : " << &a.Quantity << endl;
	cout << "UnitCost의 주소 : " << &a.UnitCost << endl;
	cout << "Price의 주소 : " << &a.Price << endl;

	return 0;
}

//Month의 주소 : 0058F800
//Day의 주소 : 0058F804
//ItemName의 주소 : 0058F808
//Quantity의 주소 : 0058F83C
//UnitCost의 주소 : 0058F840
//Price의 주소 : 0058F844