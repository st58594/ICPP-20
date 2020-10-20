#include "Receipt.h"


Receipt::Receipt(int idReceipt, double amount, double dph)
{
	this->idReceipt = idReceipt;
	this->amount = amount;
	this->dph = dph;
}
Receipt::Receipt(){
}
int Receipt::GetIdReceipt() const {
	return idReceipt;
}

double Receipt::GetAmount() const {
	return amount;
}

double Receipt::GetDph() const {
	return dph;
}