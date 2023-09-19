#include <iostream>

using namespace std;
#pragma region 함수의 오버로딩
    // 같은 이름의 함수를 매개 변수의 자료형과 매개변수의
    // 수로 구분하여 여러 개를 선언할 수 있는 기능이다.

void Calculator(char x, char y)
{
    cout << "x + y : " << x + y << endl;

}
void Calculator(int x, int y)
{
    cout << "x + y : " << x + y << endl;

}
void Calculator(float x, float y)
{
    cout << "x + y : " << x + y << endl;
}


// 함수의 오버로딩의 경우 함수의 매개 변수에
// 전달하는 인수의 형태를 보고 호출하므로,
// 반환형으로 함수의 오버로딩은 생성할 수 없다.
//int Calculator(float x, float y)
//{
//
//}
#pragma endregion

class Animal
{
private:

    char blood;

    int age;
    
    float height;

public:
    Animal( int m_age , int m_height ) : age( m_age ) , height( m_height )
    {

        cout << "age : " << age << endl;
        cout << "height :" << height << endl;

    }

#pragma region this 포인터
    // 객체 자기 자신을 가리키는 포인터이다.
#pragma endregion




    //             'A'        5         3.25f   
    Animal( char blood , int age , int height )
    {
        this->blood = blood;
        this->age = age;
        this->height = height;

        cout << "객체의 주소 :" << this << endl;

        blood = blood;
    }

};

int * Value()
{
    int data = 10;
    return &data;
}


int main()
{

   // Animal animal( 'A', 5 , 3.25f );

    int* ptr = Value();

    cout << *ptr << endl;

    *ptr = 300;

    cout << *ptr << endl;

	return 0;

}
