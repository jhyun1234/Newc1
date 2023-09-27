#include <iostream>
using namespace std;

#pragma region Final
   // 하위 클래스에서 더 이상 재정의 할 수 없도록
   // 선언하는 기능이다.

class Hero
{
public:
	virtual void BasicSkill() {};
	virtual void MagicSkill() final {};

};

class Crusaders :public Hero
{

};
class Fighter : public Crusaders
{
	void BasicSkill() {};
	// void MagicSkill() {}; ERROR
};
#pragma endregion


int main()
{
	
	

	return 0;
}
