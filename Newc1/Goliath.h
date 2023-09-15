#pragma once
#include "Mechanics.h"
class Goliath : public Mechanics
{
public:
	Goliath();

	void Move();
	
	void Attack()override;
	~Goliath();

};

