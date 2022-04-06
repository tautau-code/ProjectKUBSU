#pragma once
class BankDatabase {
public:
	BankDatabase();
	bool authenticateUser(int userAccountNumber, int userPIN); // Авторизует пользователя
	double getAvailableBalance(int userAccountNumber);
	double getTotalBalance(int userAccountNumber);
	void credit(int userAccountNumber, double amount);
	void debit(int userAccountNumber, double amount);
};