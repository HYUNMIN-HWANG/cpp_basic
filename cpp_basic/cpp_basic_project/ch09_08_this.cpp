// this : ��ü �ڽ��� ����Ű�� ������
// this�� �ַ� Ŭ������ ��� �Լ����� �Ű������� ��� ���� �̸��� ���� ��, �Ű������� �̸����� ��� ������ �̸����� ��Ȯ�ϰ� ������ �� �ַ� ���

/*
class Student
{
public :
	void setScore(const int score);
	int getScore();
private :
	int score ;		<<< setScore �Ű����� score�� ������ �̸�
}

--------------------

void Sample::setScore(const int score)
{
	Sample::score=score	;	<<< Sample:: ������ �����ϱ� ������, �Ű������� ��� ���� �̸��� ����, �Ű������� �켱������ ���� ��� �Ű����� score�� �νĵȴ�.
}

--------------------
this �� ����ؼ� �Ű������� ��� ���� �̸��� �����Ѵ�.

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
	//��� ���� score = �Ű� ���� score
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