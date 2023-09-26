#include <iostream>
#include"Item1.h"
#include "Inventory.h"
#include"Inputkey.h"
using namespace std;






int main()
{
	Inventory inventory;
	Inputkey inputkey;
	for ( int i = 0; i < 5; i ++ )
	{
		inventory.AddItem();
	}

	inventory.Renderer();
	while ( true )
	{
		
		inputkey.Move();

	}
	
	

	return 0;
}
