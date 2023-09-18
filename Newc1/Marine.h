#pragma once
#include "Unit.h"
class Marine :public Unit   
{
public:
	virtual void Skill() override;
	virtual void SetHP(int value) override;
	virtual int GetHP() override;
};

