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
		cout << "�߸��� ���� ���Խ��ϴ�." << endl;
	}

}

int Ghost::GetHP()
{
	return 0;
}
