// ����Լ� : find, replace
// find : ���ڿ� ��ü���� ������ ����(Ȥ�� ���ڿ�)�� 0��°���� ã�Ƽ� �� ��ġ�� ��ȯ�Ѵ�.
// replace : ���ڿ� ��ü�� �ش� ��ġ���� �Ű������� ������ ���ڿ��� ������ŭ�� ���ڷ� �����Ѵ�.

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string newString1("ComputerScience");

	cout << "e�� ��ġ : " << newString1.find('e') << endl;
	cout << "8��° ������ e�� ��ġ : " << newString1.find('e', 8) << endl;

	newString1.assign("Test1Test2Test3Test4");
	string newString2("Test");
	
	cout << "Test�� ��ġ : " << newString1.find(newString2) << endl;
	cout << "5��° ���Ŀ��� Test ��ġ : " << newString1.find(newString2, 5) << endl;

	newString1.replace(0, 7, "REPLACE");
	cout << newString1 << endl;

	return 0;
}

//e�� ��ġ : 6
//8��° ������ e�� ��ġ : 11
//Test�� ��ġ : 0
//5��° ���Ŀ��� Test ��ġ : 5
//REPLACEst2Test3Test4