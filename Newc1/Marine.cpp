#include "Marine.h"
using namespace std;

int Marine::GetHP()
{
	return health;
}

void Marine::Skill()
{
	cout << "스팀팩" << endl;
}

void Marine::SetHP(int value)
{


	if (value <= 100 && value >=0)
	{
		health = value;

	}
	else
	{
		cout << "잘못된 값이 들어왔습니다." << endl;
	}
	
}


