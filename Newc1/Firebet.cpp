
#include "Firebet.h"
using namespace std;

Firebet::Firebet()
{
	health = 50;
	maxHP = health;
}

void Firebet::Skill()
{

}

void Firebet::SetHP(int value)
{
	if (value >= 0 && value <= maxHP)
	{
		health = value;

	}
	
}

void Firebet::RecoveryHP()
{
	health = maxHP;
}

int Firebet::GetHP()
{
	return health;
}
