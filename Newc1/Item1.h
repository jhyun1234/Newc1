#pragma once
using namespace std;
class Item1
{
private:
	int price;
	const char* name;
	bool check;
public:
    Item1( int price = 0, const char* name = "");

	void SetCheck( bool check );

	bool GetCheck();

	

};

