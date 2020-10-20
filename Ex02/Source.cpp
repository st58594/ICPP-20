#include "Receipt.h"
#include "CashRegister.h"
#include <iostream>
using namespace std;

int main(int argc, char**  argv) {

	CashRegister cashRegister{};
	cashRegister.CreateReceipt(31,0.15);
	cashRegister.CreateReceipt(19, 0.15);
	cashRegister.CreateReceipt(100, 0.21);


	cout << "Amount = " << cashRegister.GetAmount() << "\n";
	cout << "Amount + dph  = " << cashRegister.GetAmountDPH() << "\n";
	cout << "Amount 1002: "<< cashRegister.GetReceipt(1002).GetAmount() << "\n";
	cout << "Amount 1000: " << cashRegister.GetReceipt(1005).GetAmount() << "\n";


	
	return 0;
}
