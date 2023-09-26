#include "Inputkey.h"
#include <iostream>
using namespace std;
int Inputkey::GetX()
{
    return x;
}
int Inputkey::GetY()
{
    return y;
}
Inputkey::Inputkey()
{
	x = 0;
	y = 0;
	key = 0;
}

void Inputkey::Move()
{
    GotoXY( x , y );
    

    if ( _kbhit() ) // 키보드 입력을 확인하는 함수
    {
        key = _getch();

        if ( key == -32 )
        {
            key = _getch();
        }

        switch ( key )
        {
        case UP: if ( y > 0 )
        {
            y--;
        }
            break;
        case LEFT: if ( x > 0 )
        {
            x -= 2;
        }
            break;
        case RIGHT:if ( x < 8 )
        {
            x += 2;
        }
            break;
        case DOWN:if ( y < 2 )
        {
            y++;
        }
            break;
        }

        
        
    }

}

void Inputkey::GotoXY( int x , int y )
{
	// x, y 좌표 설정
	COORD position = { x, y };

	// 커서 이동
	SetConsoleCursorPosition( GetStdHandle( STD_OUTPUT_HANDLE ) , position );

}
