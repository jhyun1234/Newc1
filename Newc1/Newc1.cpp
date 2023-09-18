﻿#include <iostream>
#include "Marine.h"
#include "Firebet.h"
#include "Ghost.h"
using namespace std;
#pragma region 함수의 오버로딩
    // 같은 이름의 함수를 매개 변수의 자료형과 매개변수의
    // 수로 구분하여 여러 개를 선언할 수 있는 기능이다.

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


// 함수의 오버로딩의 경우 함수의 매개 변수에
// 전달하는 인수의 형태를 보고 호출하므로,
// 반환형으로 함수의 오버로딩은 생성할 수 없다.
//int Calculator(float x, float y)
//{
//
//}
#pragma endregion

void Recovery(Unit* unit)
{
    

}

int main()
{
#pragma region 함수의 오버로딩

   /* Calculator('A', 'B');
    Calculator(10, 10);
    Calculator(5.25f, 4.25f);*/
#pragma endregion

#pragma region 순수 가상 함수
    // 함수를 선언만 할 수 있으며, 해당 클래스에서 구현을 할 수 없고,
    // 상속받은 하위 클래스에서 반드시 재정의를 해야하는 멤버 함수이다.

    Marine* marine= new Marine;
    Firebet* firebet = new Firebet;
    Ghost* ghost = new Ghost;


    marine->Skill();
    marine->SetHP(50);
    
    Recovery(marine);

    cout << marine->GetHP() << endl;
#pragma endregion


	return 0;

}
