// 예외 클래스 exception
// exception.h에 대한 정보를 담고 있다.
// exception 헤더 파일 내용은 std 네임스페이스의 일부이기 때문에 using 지시어와 함께 사용할 수 있다.

// bad_alloc 클래스 : new 연산자에 의해 발생한 예외를 처리한다.
// new는 메모리를 요구한 만큼 할당하는 역할을 수행한다. 만약 시스템의 자원이 부족한 경우 new는 널 포인터를 반환한다. > 예외발생
// what() 함수 : 시스템에 따라 적절한 문자열을 반환한다.

#include <iostream>
#include <exception>		// bad_alloc 가 std 안에 포함되어 있기 때문에 해당 내용 주석해도 됨
using namespace std;

int main()
{
	try
	{
		for (int i = 1; i <= 100; i++)
		{
			new int[70000000];
			cout << i << "번째 배열이 생성되었습니다." << endl;
		}
	}
	catch (bad_alloc& e)
	{
		cout << "Exception : " << e.what() << endl;
	}
	return 0;
}

//1번째 배열이 생성되었습니다.
//2번째 배열이 생성되었습니다.
//3번째 배열이 생성되었습니다.
//4번째 배열이 생성되었습니다.
//5번째 배열이 생성되었습니다.
//6번째 배열이 생성되었습니다.
//Exception : bad allocation  <<- 메모리 할당을 받지 못함