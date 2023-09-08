#include <iostream>
using namespace std;


namespace A
{
	void Attack()
	{
		cout << "A 개발자 Attack( )" << endl;
	}
}

namespace B
{
	void Attack()
	{
		cout << "B 개발자 Attack( )" << endl;
	}

}

// using namespace 은 밑에 사용
void Damage(int hp=100)
{
	hp -= 25;
	cout << "hp의 값 : " << hp << endl;
}

// 기본 매개변수는 오른쪽에서 부터 정의해야 한다.
void Move(int x , int y, int z =10) 
{
	cout << "x의 값 :" << x << endl;
	cout << "y의 값 :" << y << endl;
	cout << "z의 값 :" << z << endl;
}

int main()
{
#pragma region 범위 지정 연산자
	// 여러 범위에서 사용되는 식별자를 구분하는데
	// 사용하는 연산자이다.

	// int data = 100;
	// 
	// std::cout << "지역 변수data의 값 :" << data << std::endl;
	// std::cout << "전역 변수data의 값 :" << ::data << std::endl;
	// 범위 지정 연산자는 전역 변수와 같은 이름의 지역 변수가
	// 선언되었을 때 가장 가까운 범위에 선언된 변수의 이름을
	// 사용하는 범위 규칙이 존재하기 때문에 전역 변수가 호출되지 않는다.
	
	
#pragma endregion

#pragma region 이름 공간
	// 속성을 구분할 수 있도록 유효 범위를 설정하는 영역이다.


	// A::Attack();
	// B::Attack();
#pragma endregion

#pragma region 기본 매개변수
	// 함수의 매개 변수에 값이 전달되지 않았을 때
	// 기본 값으로 설정되는 매개 변수이다.

	//int hp = 100;
	//Damage();
	//Move(10, 20);

	//// 기본 매개변수가 있는 위치에 다시 새로운 인수를
	//// 넣어줄 수 있다.
	//
	//Move(5, 10, 30);

#pragma endregion

#pragma region 최소 공배수
	/*
	int a = 0;
	int b = 0;
	int i = 0;
	int x = 1; // 최대 공약수
	cout << "정수를 입력하세요 :" << endl;
	cin >> a >> b;

	for (i = 2; i <= a && i <= b; i++)
	{
		if (a % i == 0 && b % i == 0)
		{
			x *= i;
			a /= i;
			b /= i;
			i--;
		}
	}
	cout << "최소 공배수 : " << x*a*b << endl;
	*/
#pragma endregion


	return 0;

}
