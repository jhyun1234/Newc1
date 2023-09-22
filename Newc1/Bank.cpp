#include "Bank.h"
using namespace std;
void Bank::Withdrawal( Player1 & player1 , int money )
{
	bankMoney += money;
	player1.money -= money;
	

}

void Bank::ShowInfo()
{

	cout << "Bank Money" << bankMoney << endl;
}
