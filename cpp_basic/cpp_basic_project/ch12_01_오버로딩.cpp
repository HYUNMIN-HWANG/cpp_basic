//함수 오버로딩 : 같은 이름의 함수를 다른 형식으로 재정의하는 것

#include <iostream>
using namespace std;

class TwoNumber
{
public:
	TwoNumber();
	// AddNumber : 같은 멤버 함수인데 자료형만 다르다.
	int AddNumber(const int ia, const int ib);
	double AddNumber(const double da, const double db);
private:
	int i_sum;
	double d_sum;
};

TwoNumber::TwoNumber()
{
	i_sum = 0;
	d_sum = 0;
}


int TwoNumber::AddNumber(const int ia, const int ib)
{
	i_sum = ia + ib;
	return i_sum;
}

double TwoNumber::AddNumber(const double da, const double db)
{
	d_sum = da + db;
	return d_sum;
}

int main()
{
	TwoNumber obj1;

	cout << "3 + 4 = " << obj1.AddNumber(3, 4) << endl;
	cout << "3.5 + 4.7 = " << obj1.AddNumber(3.5, 4.7) << endl;

	return 0;

}

//3 + 4 = 7
//3.5 + 4.7 = 8.2