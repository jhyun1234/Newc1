#pragma once
#include "Unit.h"
class Ghost : public Unit    
{
	virtual void Skill() override;
	virtual void SetHP(int value) override;
	virtual int GetHP() override;
};

