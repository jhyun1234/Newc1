#include "Marine.h"
using namespace std;

int Marine::GetHP()
{
	return health;
}

void Marine::Skill()
{
	cout << "������" << endl;
}

void Marine::SetHP(int value)
{


	if (value <= 100 && value >=0)
	{
		health = value;

	}
	else
	{
		cout << "�߸��� ���� ���Խ��ϴ�." << endl;
	}
	
}


