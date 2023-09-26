#include "Inventory.h"
#include"Item1.h"
#include <iostream>
using namespace std;

Inventory::Inventory( int x , int y )
{
	selectIndex = 0;
	lineX = 0;
	size = x * y;
	items = new Item1[size];

	for ( int i = 0; i < size; i++ )
	{
		items[ i ].SetCheck( false );
		

		
	}
	
}

void Inventory::Renderer()
{
	for ( int i = 0; i < size; i++ )
	{
		if ( i % 5 == 0 && i != 0 )
		{
			cout << endl;
		}

		if ( items[ i ].GetCheck() == false )
		{
			cout << "□";
		}
		else if ( items[ i ].GetCheck() == true )
		{
			cout << "■";
		}
		

	}


}

void Inventory::AddItem()
{

	for ( int i = 0; i < size; i++ )
	{
		if ( items[ i ].GetCheck() == false )
		{
			items[ i ].SetCheck( true );
			break;
		}

		if ( i == size - 1 )
		{
			if ( items[ size - 1 ].GetCheck() == true )
			{
				cout << "인벤토리가 가득 찼습니다."<<endl;
			}
		}
	}

}
