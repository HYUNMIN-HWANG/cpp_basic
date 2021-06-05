#include <iostream>
using namespace std;

class IntSample
{
public:
	void ShowScore();
	void setScore(const int s);
	int getScore();

private:
	int Score;
};

void IntSample::ShowScore()
{
	cout << "점수 : " << Score << endl;
}

void IntSample::setScore(const int s)
{
	Score = s;
}

int IntSample::getScore()
{
	return Score;
}

int main()
{
	IntSample Obj;

	Obj.setScore(100);
	cout << "점수 : " << Obj.getScore() << endl;

	return 0;
}

// 점수 : 100

// 객체지향 프로그래밍에서의 필수 조건 //
//1. 멤버 변수의 접근 속성은 특별한 상황이 아닌 한 private으로 한다.
//2. 멤버 함수를 통해 멤버 변수값 설정 함수(set을 시작하는 함수, 변경자)와 멤버 변수값을 외부로 전달하는 함수(get으로 시작하는 함수, 접근자)를 작성한다.
//3. 그 외 필요한 기능을 멤버 함수로 작성한다.