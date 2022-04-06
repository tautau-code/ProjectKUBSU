#pragma once
class CashDispancer {
public:
	CashDispancer(int count = 500);
	void dispenceCash(double amount);
	bool isSufficentCashAvailable(double amount);
};