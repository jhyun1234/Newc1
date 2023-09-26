#pragma once
#include "Item1.h"
#include <iostream>
#include"Inputkey.h"
using namespace std;
class Inventory
{
private:
	int size;
	int lineX;
	int selectIndex;
	Item1* items;
	

public:
	Inventory( int x = 5 , int y = 3 );
	void Renderer();
	void AddItem();


};

