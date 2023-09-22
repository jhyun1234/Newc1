#pragma once
#include <iostream>
class Player1
{
private:
	int money = 30000;
	friend class Bank;
public:
	void ShowInfo();

};

