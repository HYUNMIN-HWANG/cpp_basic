// 프렌드 함수 : 일반함수와는 달리 특정 클래스와 서로 친분 관계의 허락에 의해 특정 클래스의 private 멤버를 참조할 수 있다.

#include <iostream>
using namespace std;

int CheckTax(const double Income, double& Tax); // 함수 선언
//int CheckTax2(SaleInf& Obj);	// SaleInf 내에 있는 private 변수들에 접근할 수 없다.

class SaleInf
{
	friend int CheckTax2(SaleInf& Obj);	//프렌드 함수 선언

public:
	SaleInf(const double Income);
	double getTax();
private:
	double Income;
	double Tax;
};

SaleInf::SaleInf(const double Income)	// 생성자
{
	this->Income = Income;
}

double SaleInf::getTax()	// 멤버 함수 정의
{
	CheckTax(Income, Tax);	// 함수 호출

	return Tax;
}

int CheckTax(const double Income, double& Tax)
{
	if (Income <= 0)
		return 0;

	Tax = 0.03 * Income;
	return 1;
}

int CheckTax2(SaleInf& Obj)
{
	if (Obj.Income <= 0)	// friend 를 사용하지 않았을 땐, Income,Tax 변수가 private이기 때문에 접근할 수 없다.
		return 0;
	Obj.Tax = Obj.Income * 0.03;
	return 1;
}


//int main()
//{
//	SaleInf s1(20.4);
//
//	cout << "세금 : " << s1.getTax() << endl;	// getTax 안에 있는 함수 CheckTax 호출
//
//	double income = 20.4, tax;
//	CheckTax(income, tax);
//
//	cout << "세금 : " << tax << endl;
//
//	return 0;
//
//}

//세금 : 0.612
//세금 : 0.612

int main()
{
	SaleInf s1(20.4);
	CheckTax2(s1);

	cout << "세금 : " << s1.getTax() << endl;

	return 0;
}

//세금: 0.612