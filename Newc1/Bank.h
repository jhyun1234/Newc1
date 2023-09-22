#pragma once
#include "Player1.h"


#pragma region 클래스의 전방 선언
  // 불필요한 헤더 파일이 복잡하게 포함되는 것을 방지하여,
  // 결과적으로는 컴파일 속도를 향상시킨다.
#pragma endregion


class Bank 
{
private:
	int bankMoney = 0;

public:

	void Withdrawal( Player1& player1 , int money );
	

	void ShowInfo();



};

