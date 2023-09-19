#pragma once
#include "Unit.h"
class Ghost : public Unit    
{
public:
	Ghost();

	virtual void Skill() override;
	virtual void SetHP(int value) override;
	virtual void RecoveryHP() override;
	virtual int GetHP() override;
};

