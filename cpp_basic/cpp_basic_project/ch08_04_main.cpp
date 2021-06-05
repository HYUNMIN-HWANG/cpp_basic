#include "ch08_04_weight.h"

int main()
{
	// Weight 클래스의 객제 w1을 생성한다.
	Weight w1;

	w1.setHeight(175);
	w1.setWeight(87.5);

	cout << w1.getHeight() << "키에 몸무게 ";
	cout << w1.getWeight() << "는 ";

	switch (w1.getWeightStatus())
	{
	case 1:
		cout << "과체중";
		break;
	case 0:
		cout << "정상";
		break;
	case -1:
		cout << "저체중";
		break;
	default:
		;
	}
	cout << " 입니다." << endl;

	return 0;

}

//175키에 몸무게 87.5는 과체중 입니다.