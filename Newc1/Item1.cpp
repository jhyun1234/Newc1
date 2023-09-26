#include "Item1.h"
using namespace std;


Item1::Item1( int price , const char* name )
{
	this->price = price;
	this->name = name;
}

void Item1::SetCheck( bool check )
{
	this->check = check;
}

bool Item1::GetCheck()
{
	return check;
}




