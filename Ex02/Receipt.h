#pragma once
#ifndef RECEIPT_H
#define RECEIPT_H

class Receipt
{

public:
	Receipt(int idReceipt, double amount, double dph);
	Receipt();
	int GetIdReceipt() const;
	double GetAmount() const;
	double GetDph() const;

private:
	int idReceipt;
	double amount;
	double dph;

};


#endif // !RECEIPT_H
