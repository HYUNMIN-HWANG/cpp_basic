/*
선언부 : 변수 선언, 함수 선언 등 포로그램 컴파일을 위해 필요한 정보를 표시한다.
	main()에 포함되지 않은 것

동작부 : 프로그램 실행 시 필요한 동작을 포함하는 연산문, 조건문, 반복문 등을 나타낸다.
	main()에 포함된 것
	main() : 작성한 프로그램을 실행 파일로 변환하려면 반드시 피로젝트 내에 하나의 main()함수가 있어야 한다.

- 변수는 선언된 함수 내에서만 사용 가능하다.
- 변수는 범위 처음 부분에 선언하는 것이 혼동을 피하는 방법
- 변수이름을 의미 있게 작성하는 것이 좋음

=============================

* using namespace std;
- 소속을 알라는 역할
- std에 속한 내용을 사용할 것이다.
- 변수 이름이나 함수 이름과 같이 명칭을 사용하는 공간으로 소속을 나타낸다고 표현할 수 있다.
- 선언된 내용을 멤버라 부른다. 파일의 선언부에서 사용한다.

namespace 이름
{
	선언내용;
}

using namespace std;
>> std에 포함되어 있는 멤버를 프로그램 코드에서 사용할 때 std::를 생략하겠다는 의미
*/

#include <iostream>
using namespace std;

namespace SAM_1
{
	int a = 100;
}

namespace SAM_2
{
	int b = 200;
}

//int main()
//{
//	cout << "SAM_1의 a : " << SAM_1::a << endl;
//	cout << "SAM_2의 b : " << SAM_2::b << endl;
//}

//SAM_1의 a : 100
//SAM_2의 b : 200

int main()
{
	using namespace SAM_1;	// 소속을 다시 명시하지 않아도 된다.
	using namespace SAM_2;
	cout << "SAM_1의 a : " << a << endl;
	cout << "SAM_2의 b : " << b << endl;
}

/*
using namespace std;
그렇다면 std의 멤버는 누구인가?
>> cout, cin, endl
*/