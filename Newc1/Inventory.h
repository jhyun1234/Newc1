#pragma once
#include "Item1.h"
#include <iostream>
using namespace std;
class Inventory
{
private:
	int size;
	Item1* items;
	

public:
	Inventory( int x = 5 , int y = 3 );
	void Renderer();


};

