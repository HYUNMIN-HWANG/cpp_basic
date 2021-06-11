// 추상 클래스 : 객체 생성을 위해 작성되는 것이 아니라 상속에서 기반 클래스 역할을 담당하도록 만들어진 클래스로,
// 구체적이지 못한 멤버 함수를 갖는 클래스를 말한다

// 순수 가상 함수 : 함수의 내용이 정의되지 않은 함수, 파생 클래스에서 함수 오버라이딩에 의해 그 내용이 결정된다.
// virtual 반환형 함수이름() = 0;

// 추상 클래스는 순수 가상 함수를 포함하고 있으므로 객체를 생성하지 못한다.
// 순수 가상 함수는 클래스 상속에 의해 파생 클래스에서 함수 오버라이딩되어 사용되는 것을 목적으로 한다.

#include <iostream>
#include <string>
using namespace std;

class AbstractClass
{
public:
	virtual string SampleFunction() = 0; //순수 가상 함수 , 정의되어 있지 않다.
};

class TestClass : public AbstractClass // 클래스 상속
{
public:
	string SampleFunction()
	{
		return "SampleFunction";
	}
};

int main()
{
	//AbstractClass obj1;	// 에러;; AbstractClass내에 순수 가상 함수가 있으므로 객체를 생성할 수 없다. 
	TestClass obj1;

	cout << obj1.SampleFunction() << endl;

	return 0;
}

//SampleFunction