#include "Ghost.h"
using namespace std;
Ghost::Ghost()
{
	health = 45;
	maxHP = health;
}
void Ghost::Skill()
{
}

void Ghost::SetHP(int value)
{
	if (value >= 0 && value <= maxHP)
	{
		health = value;

	}
	

}

void Ghost::RecoveryHP()
{
	health = maxHP;
}

int Ghost::GetHP()
{
	return health;
}
