#include "ch08_04_weight.h"

int main()
{
	// Weight Ŭ������ ���� w1�� �����Ѵ�.
	Weight w1;

	w1.setHeight(175);
	w1.setWeight(87.5);

	cout << w1.getHeight() << "Ű�� ������ ";
	cout << w1.getWeight() << "�� ";

	switch (w1.getWeightStatus())
	{
	case 1:
		cout << "��ü��";
		break;
	case 0:
		cout << "����";
		break;
	case -1:
		cout << "��ü��";
		break;
	default:
		;
	}
	cout << " �Դϴ�." << endl;

	return 0;

}

//175Ű�� ������ 87.5�� ��ü�� �Դϴ�.