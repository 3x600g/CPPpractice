#include <iostream>
using namespace std;

int main()
{
	int studentID[3] = { 17011392, 17011400, 17011393 };

	for (int i = 0; i < 3; i++)
	{
		cout << i + 1 << "번째 학생의 학번은" << studentID[i] << "입니다." << endl;
	}
	return 0;
}