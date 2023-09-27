#include "Item1.h"
#include<iostream>
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

void Item1::SetItem( int price , const char* name )
{
	this->price = price;
	this->name = name;

}

void Item1::Information()
{
	cout << "Item Name :" << name << endl;
	cout << "Item Price : " << price << endl;
	

}




