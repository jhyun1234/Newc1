#include "Marine.h"
using namespace std;

int Marine::GetHP()
{
	return health;
}

Marine::Marine()
{
	health = 40;
	maxHP = health;
}

void Marine::Skill()
{
	cout << "½ºÆÀÆÑ" << endl;
}

void Marine::SetHP(int value)
{


	if (value >= 0 && value <=maxHP)
	{
		health = value;

	}
	
	
}

void Marine::RecoveryHP()
{
	health = maxHP;
}


