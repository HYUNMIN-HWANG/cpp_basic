// �ǽ�
// Ű�� �����Ը� �Է¹޾� ǥ�� �����Ը� ����Ͽ� '��ü��', '����ü��', '��ü��'�ΰ��� ǥ������.

// ��� ���� : Ű, ������, ü�߻���
// ��� �Լ� : 
	// �Ű������� Ű�� ����, �Ű������� �����Ը� ���޹���, �Լ��� ��ȯ��(Ű, ������, ü�� ����)�� �ܺο� ����, ǥ�ظ����� ����

#include "ch08_04_weight.h"

// "Weight::"�� �������ν� ���ǵ� �� ��� �Լ��� Ŭ������ ������ �ִٴ� ���� ��Ÿ��

void Weight::setHeight(const double h)
{
	height = h;	// Weight�� ���ԵǾ� �ִ� ��� ������ ����� �� �ִ�.
}

void Weight::setWeight(const double h)
{
	weight = h;
}

double Weight::getHeight()
{
	return height;
}

double Weight::getWeight()
{
	return weight;
}

int Weight::StdWeight()
{
	double sw = (height - 110) * 0.9;

	if (sw + 0.5 < weight)
		WeightStatus = 1;
	else if (sw - 0.5 > weight)
		WeightStatus = -1;
	else 
		WeightStatus = 0;

	return 1;
}

int Weight::getWeightStatus()
{
	StdWeight();
	return WeightStatus;
}

