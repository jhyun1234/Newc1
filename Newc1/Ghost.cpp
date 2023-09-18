#include "Ghost.h"
using namespace std;
void Ghost::Skill()
{
}

void Ghost::SetHP(int value)
{
	if (value <= 100 && value >= 0)
	{
		health = value;

	}
	else
	{
		cout << "잘못된 값이 들어왔습니다." << endl;
	}

}

int Ghost::GetHP()
{
	return 0;
}
