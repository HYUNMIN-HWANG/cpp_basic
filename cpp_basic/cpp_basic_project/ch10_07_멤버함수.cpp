// 멤버함수 : find, replace
// find : 문자열 객체에서 지정한 문자(혹은 문자열)를 0번째부터 찾아서 그 위치를 반환한다.
// replace : 문자열 객체의 해당 위치에서 매개변수로 전달한 문자열로 개수만큼의 문자로 변경한다.

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string newString1("ComputerScience");

	cout << "e의 위치 : " << newString1.find('e') << endl;
	cout << "8번째 이후의 e의 위치 : " << newString1.find('e', 8) << endl;

	newString1.assign("Test1Test2Test3Test4");
	string newString2("Test");
	
	cout << "Test의 위치 : " << newString1.find(newString2) << endl;
	cout << "5번째 이후에서 Test 위치 : " << newString1.find(newString2, 5) << endl;

	newString1.replace(0, 7, "REPLACE");
	cout << newString1 << endl;

	return 0;
}

//e의 위치 : 6
//8번째 이후의 e의 위치 : 11
//Test의 위치 : 0
//5번째 이후에서 Test 위치 : 5
//REPLACEst2Test3Test4