#pragma once
#include <iostream>
using namespace std;
class Mechanics
{
protected:
	int health;
	int attack;

public:
	void Move();

	virtual void Attack();

};

