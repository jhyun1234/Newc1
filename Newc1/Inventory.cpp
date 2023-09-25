#include "Inventory.h"
#include"Item1.h"
#include <iostream>
using namespace std;

Inventory::Inventory( int x , int y )
{
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

	}


}
