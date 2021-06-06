// this : 객체 자신을 가리키는 포인터
// this는 주로 클래스의 멤버 함수에서 매개변수와 멤버 변수 이름이 같을 때, 매개변수의 이름인지 멤버 변수의 이름인지 명확하게 지적할 때 주로 사용

/*
class Student
{
public :
	void setScore(const int score);
	int getScore();
private :
	int score ;		<<< setScore 매개변수 score와 동일한 이름
}

--------------------

void Sample::setScore(const int score)
{
	Sample::score=score	;	<<< Sample:: 생략이 가능하긴 하지만, 매개변수와 멤버 변수 이름이 같음, 매개변수의 우선순위가 높아 모두 매개변수 score로 인식된다.
}

--------------------
this 를 사용해서 매개변수와 멤버 변수 이름을 구분한다.

void Sample::setScore(const int score)
{
	this->score=score ;
}

*/

#include <iostream>
using namespace std;

class Sample
{
public:
	void setScore(const int score);
	int getScore();
private:
	int score;
};

void Sample::setScore(const int score)
{
	this->score = score;
	//멤버 변수 score = 매개 변수 score
}

int Sample::getScore()
{
	return score;
}

int main()
{
	Sample Sam;
	Sam.setScore(100);

	cout << Sam.getScore() << endl;

	return 0;
}

//100