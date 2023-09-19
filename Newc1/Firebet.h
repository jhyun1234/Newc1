#pragma once
#include "Unit.h"
class Firebet : public Unit   
{

public:
	Firebet();

	virtual void Skill() override;
	virtual void SetHP(int value) override;
	virtual void RecoveryHP() override;
	virtual int GetHP() override;
};

