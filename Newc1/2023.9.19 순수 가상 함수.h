#pragma once
#include <iostream>
#include "Marine.h"
#include "Firebet.h"
#include "Ghost.h"
using namespace std;
#pragma region �Լ��� �����ε�
// ���� �̸��� �Լ��� �Ű� ������ �ڷ����� �Ű�������
// ���� �����Ͽ� ���� ���� ������ �� �ִ� ����̴�.

void Calculator(char x, char y)
{
    cout << "x + y : " << x + y << endl;

}
void Calculator(int x, int y)
{
    cout << "x + y : " << x + y << endl;

}
void Calculator(float x, float y)
{
    cout << "x + y : " << x + y << endl;
}


// �Լ��� �����ε��� ��� �Լ��� �Ű� ������
// �����ϴ� �μ��� ���¸� ���� ȣ���ϹǷ�,
// ��ȯ������ �Լ��� �����ε��� ������ �� ����.
//int Calculator(float x, float y)
//{
//
//}
#pragma endregion

void Recovery(Unit* unit)
{
    unit->RecoveryHP();

}

int main()
{
#pragma region �Լ��� �����ε�

    /* Calculator('A', 'B');
     Calculator(10, 10);
     Calculator(5.25f, 4.25f);*/
#pragma endregion

#pragma region ���� ���� �Լ�
     // �Լ��� ���� �� �� ������, �ش� Ŭ�������� ������ �� �� ����,
     // ��ӹ��� ���� Ŭ�������� �ݵ�� �����Ǹ� �ؾ��ϴ� ��� �Լ��̴�.

    Unit* unit[3] = { new Marine,new Firebet,new Ghost };

    for (int i = 0; i < 3; i++)
    {
        unit[i]->SetHP(10);
        cout << unit[i]->GetHP() << endl;
    }

    for (int i = 0; i < 3; i++)
    {
        Recovery(unit[i]);
    }

    for (int i = 0; i < 3; i++)
    {

        cout << unit[i]->GetHP() << endl;
    }


    // marine->Skill();
    // marine->SetHP(50);
    // 
    // Recovery(marine);
    // 
    // cout << marine->GetHP() << endl;
#pragma endregion


    return 0;

}
