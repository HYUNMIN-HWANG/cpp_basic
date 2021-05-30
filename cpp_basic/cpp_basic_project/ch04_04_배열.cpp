//배열 : 연속적인 기억 공간, 하나의 자료형에 대한 여러 개의 연속적인 기억 공간
//배열의 이름은 배열 기억 장소의 포인터, 배열 이름이 배열의 시작 주소를 나타낸다.

#include <iostream>
using namespace std;

int main()
{
	int jumsu1, jumsu2, jumsu3;
	int score[3];

	cout << "jumsu1 의 주소 : " << &jumsu1 << endl;
	cout << "jumsu2 의 주소 : " << &jumsu2 << endl;
	cout << "jumsu3 의 주소 : " << &jumsu3 << endl;

	cout << "************************************" << endl;

	cout << "score[0]의 주소 : " << &score[0] << endl;
	cout << "score[1]의 주소 : " << &score[1] << endl;
	cout << "score[2]의 주소 : " << &score[2] << endl;

	cout << "************************************" << endl;

	for (int i=0 ; i <3 ; i++ )
		cout << "score[" << i << "]의 주소 " << &score[i] << endl;

	return 0;
}

//4바이트 씩 증가함
//jumsu1 의 주소 : 008FF854
//jumsu2 의 주소 : 008FF848
//jumsu3 의 주소 : 008FF83C
//************************************
//score[0]의 주소 : 008FF828
//score[1]의 주소 : 008FF82C
//score[2]의 주소 : 008FF830
//************************************
//score[0]의 주소 008FF828
//score[1]의 주소 008FF82C
//score[2]의 주소 008FF830