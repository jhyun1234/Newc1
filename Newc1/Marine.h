#pragma once
#include "Unit.h"
class Marine :public Unit   
{
public:
	Marine();

	virtual void Skill() override;
	virtual void SetHP(int value) override;
	virtual void RecoveryHP() override;
	virtual int GetHP() override;
};

