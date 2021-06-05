#include <iostream>
using namespace std;

// 클래스 선언 (private) -> 오류 발생
//class IntSample
//{
//	// private : 생략됨
//	void ShowScore();
//	int Score();
//};

// 클래스 선언 (public)	-> 정상 작동
class IntSample
{
public : 
	void ShowScore();
	int Score;
};

// 클래스 멤버 함수 정의
void IntSample::ShowScore()
{
	cout << " 점수 : " << Score << endl;
}

int main()
{
	IntSample Obj;

	Obj.Score = 100;	// 객체 Obj의 멤버 변수 Score에 값 할당하기
	Obj.ShowScore();	// 객체 Obj의 멤버 함수 ShowScore() 호출하기

	return 0;
}

// 클래스 선언 (private) -> 오류 발생
// 멤버 속성이 private이기 떄문에 같은 클래스 내에서만 접근이 허락된다.
// IntSample 클래스와 별도인 main() 함수에서는 접슨할 수 없다.
//E0265	함수 "IntSample::Score" (선언됨 줄 8)에 액세스할 수 없습니다.
//E0265	함수 "IntSample::ShowScore" (선언됨 줄 12)에 액세스할 수 없습니다.

// 클래스 선언 (public)	-> 정상 작동
//  점수 : 100