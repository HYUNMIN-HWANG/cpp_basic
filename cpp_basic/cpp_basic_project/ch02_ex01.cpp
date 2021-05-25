// µÎ ¼öÀÇ µ¡¼À, »¬¼À, °ö¼À, ³ª´°¼ÀÀÇ °á°ú¸¦ ±¸ÇÏ´Â ÇÁ·Î±×·¥

#include <iostream>
using namespace std;

int main()
{
	int num1, num2;

	cout << "Á¤¼ö 1 ÀÔ·Â ";
	cin >> num1;

	cout << "Á¤¼ö 2 ÀÔ·Â ";
	cin >> num2;

	cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
	cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
	cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
	cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
	
	return 0;
}