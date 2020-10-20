#include "CashRegister.h"
#include <exception>

int CashRegister::counterId = 1000;

CashRegister::CashRegister()
{
	receipts = new Receipt[10];
	numberOfReceipt = 0;
}
CashRegister::~CashRegister()
{
	delete[] receipts;
}

Receipt& CashRegister::CreateReceipt(double amount, double dph) {
	if (counterId > 1009 )
			throw new std::exception("Cash register is full.");
	
	Receipt receipt{ counterId++, amount, dph };
	receipts[numberOfReceipt++] = receipt;
	return receipt;
}

Receipt& CashRegister::GetReceipt(int idReceipt) {
	for (int i = 0; i < numberOfReceipt; i++)
	{
		if (receipts[i].GetIdReceipt() == idReceipt)
		{
			return receipts[i];
		}
	}
	return receipts[0];

}

double CashRegister::GetAmount() const{
	double sum = 0;
	for (int i = 0; i < numberOfReceipt; i++)
	{
		sum += receipts[i].GetAmount();
	}
	return sum;
}

double CashRegister::GetAmountDPH() const{
	double sum = 0;
	for (int i = 0; i < numberOfReceipt; i++)
	{
		sum += receipts[i].GetAmount() * (1 + receipts[i].GetDph());
	}
	return sum;
}

int CashRegister::GetNubmerOfReceipt() const{
	return numberOfReceipt;
}

