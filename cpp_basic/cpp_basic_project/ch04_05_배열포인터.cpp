//硅凯狼 矫累 林家绰 硅凯狼 霉 锅屡 夸家狼 林家甫 狼固窃

#include <iostream>
using namespace std;

int main()
{
	int score[3] = { 99, 98, 100 };

	cout << "score[0]狼 林家 : " << &score[0] << endl;
	cout << "score[1]狼 林家 : " << &score[1] << endl;
	cout << "score[2]狼 林家 : " << &score[2] << endl;

	cout << "****************************************" << endl;

	for (int i = 0; i < 3; i++)
		cout << "score[" << i << "]狼 林家: " << &score[i] << endl;

	cout << "****************************************" << endl;

	cout << "score[0]狼 林家 : " << score << endl;
	cout << "score[1]狼 林家 : " << score+1 << endl;
	cout << "score[2]狼 林家 : " << score+2 << endl;

	cout << "****************************************" << endl;

	for (int i = 0; i < 3; i++)
		cout << "score[" << i << "]狼 林家: " << score + i << endl;

	return 0;

}

//score[0]狼 林家 : 0059F79C
//score[1]狼 林家 : 0059F7A0
//score[2]狼 林家 : 0059F7A4
//****************************************
//score[0]狼 林家 : 0059F79C
//score[1]狼 林家 : 0059F7A0
//score[2]狼 林家 : 0059F7A4
//****************************************
//score[0]狼 林家 : 0059F79C
//score[1]狼 林家 : 0059F7A0
//score[2]狼 林家 : 0059F7A4
//****************************************
//score[0]狼 林家 : 0059F79C
//score[1]狼 林家 : 0059F7A0
//score[2]狼 林家 : 0059F7A4