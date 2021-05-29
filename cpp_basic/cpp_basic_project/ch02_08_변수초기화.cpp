// 변수 초기화와 단출 연산자

# include <iostream>
using namespace std;

int main()
{
	//int a;
	//변수 a가 선언만 되어 있고 아직 초기화하지 않은 상태임
	// C4700	초기화되지 않은 'a' 지역 변수를 사용했습니다.CPP_BASIC

	// 반드시 변수 초기화를 해줘야 함
	int a = 0;

	a = a + 1;
	a = a + 1;
	a = a + 1;

	cout << "a의 값 " << a << endl;

	return 0;
}

// a의 값 3
