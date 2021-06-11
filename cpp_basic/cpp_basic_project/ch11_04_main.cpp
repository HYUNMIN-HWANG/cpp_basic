#include "ch11_04_a.h"

int main()
{
	A obj_A;
	obj_A.SetVar(10, 20);
	obj_A.ShowVar();
	cout << "*********************" << endl;

	B obj_B;
	obj_B.SetVar(30, 40);
	obj_B.ShowVar();
	obj_B.Show();

	return 0;
}

//proVar_A = 10
//priVar_A = 20
//* ********************
//proVar_A = 30
//priVar_A = 40
//b = 30
//proVar_A = 200