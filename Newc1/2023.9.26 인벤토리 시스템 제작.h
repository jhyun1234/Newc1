#pragma once
#include <iostream>
#include"Item1.h"
#include "Inventory.h"
#include"Inputkey.h"
using namespace std;

void GotoXY( int x , int y )
{
	// x, y 좌표 설정
	COORD position = { x, y };

	// 커서 이동
	SetConsoleCursorPosition( GetStdHandle( STD_OUTPUT_HANDLE ) , position );

}





int main()
{
	Inventory inventory;
	Inputkey inputkey;
	for ( int i = 0; i < 5; i++ )
	{
		inventory.AddItem();

	}



	while ( true )
	{
		inventory.Renderer();

		inputkey.Move();
		inventory.SelectNumber( inputkey );

		inputkey.GotoXY( 0 , 10 );
		inventory.ShowItem();



		Sleep( 100 );
		system( "cls" );
	}



	return 0;
}
