
#include "Firebet.h"
using namespace std;

void Firebet::Skill()
{

}

void Firebet::SetHP(int value)
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

int Firebet::GetHP()
{
	return 0;
}
