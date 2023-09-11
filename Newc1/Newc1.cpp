﻿#include <iostream>
using namespace std;

#pragma region 클래스
  // 사용자 정의 데이터 유형으로 속성과 함수가 포함되어  
  // 있으며, 클래스를 통해 객체를 생성하여 접근하고 사용할 수 있는
  // 집합체이다.

class GameObject
{
	// 접근 지정자
	// 클래스 내부의 포함되어 있는 속성에 접근 범위를
	// 제한하는 지정자이다.

	// public
	// 클래스 내부와 자기가 상속하고 있는 클래스 그리고 
	// 클래스 외부에서 접근을 허용하는 지정자이다.

	// protected
	// 클래스 내부와 자기가 상속하고 있는 클래스까지만,
	// 접근을 허용하는 지정자이다.

    // private
	// 클래스 내부에서만 접근을 허용하는 지정자이다.


	
	
public:
	float x;
	void SendMessage()
	{
		cout << "메세지" << endl;
	}

protected:
	float y;
private:
	float z;
	
	
};

#pragma endregion

#pragma region 생성자와 소멸자
   // 생성자
   // 클래스의 인스턴스가 생성되는 시점에서 자동으로
   // 호출되는 특수한 멤버 함수이다.
 
class Monster
{ 
private:
	int health;
public:
	Monster()
	{
		cout << "Monster 생성" << endl;
	}

	// 생성자의 경우 객체가 생성될 때 단 한 번만 호출되며,
	// 생성자는 반환형이 존재하지 않기 때문에
	// 생성자가 호출되기 전에는 객체에 대한 메모리는 할당하지 않는다.
	
	// 소멸자
	// 객체가 소멸될 때 자동으로 실행되는 클래스의 멤버 함수이다.
	~Monster()
	{
		cout << "Monster 소멸" << endl;
	}
	
	// 소멸자는 객체가 메모리에서 해제될 때 단 한번만 호출되며,
	// 소멸자에는 매개변수를 생성하여 사용할 수 없다.
};
#pragma endregion



int main()
{
#pragma region 클래스
	/*GameObject gameObject1;
	GameObject gameObject2;

	cout << sizeof(gameObject1) << endl;

	gameObject1.SendMessage();
	gameObject2.SendMessage();
	gameObject1.x = 100;*/
#pragma endregion

#pragma region 생성자와 소멸자

	Monster monster;

	//   8byte
	//  [     ]
	Monster* ptr= new Monster;
	
	delete ptr;

#pragma endregion


	return 0;

}
