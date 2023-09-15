#pragma once
#include "Mechanics.h"
class SiegeTank : public Mechanics
{
public:
	SiegeTank();

	void Move();
	
	void Attack()override;
	~SiegeTank();
};

