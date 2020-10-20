#pragma once
#ifndef CASH_REGISTER_H
#define CASH_REGISRER_H

#include "Receipt.h"
class CashRegister {
	static int counterId;
public:
	CashRegister();
	~CashRegister();
	Receipt& CreateReceipt(double amount, double dph);
	Receipt& GetReceipt(int idReceipt);
	double GetAmount() const;
	double GetAmountDPH() const;
	int GetNubmerOfReceipt() const;

private:
	Receipt* receipts;
	int numberOfReceipt;
};
#endif // !CASH_REGISTER_H
