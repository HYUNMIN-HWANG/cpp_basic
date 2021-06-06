// 이미 생성된 객체의 값을 할당받기
// 복사 생성자(Copy Constructor) - 생성되는 객체에 이미 생성된 객체의 값을 복사하는 역할을 수행한다.
// 사용방법 >>>> 클래스이름 생성할객체(복사할객체);

#include <iostream>
using namespace std;

class CopyObj {
public:
	CopyObj(const double height, const double weight);	// 생성자
	void ShowVar();	// 멤버 함수
private :
	double height;
	double weight;
};

CopyObj::CopyObj(const double height, const double weight)
{
	this->height = height;	// this 포인터 : 객체의 주소를 저장한 포인터 변수
	this->weight = weight;
}

void CopyObj::ShowVar()
{
	cout << "키 : " << height << endl;
	cout << "몸무게 : " << weight << endl;
}

int main()
{
	CopyObj p1(181.5, 79.1);
	p1.ShowVar();

	cout << "******************" << endl;

	CopyObj p2(p1);	//객체 생성 & 복사 생성자 호출 >> p1 객체가 p2 객체에 복사 >> p1과 p2의 멤버 변숫값이 동일함
	p2.ShowVar();

	return 0;

}

//키: 181.5
//몸무게 : 79.1
//* *****************
//키 : 181.5
//몸무게 : 79.1