#include "Account.h"

#include <iostream>
using std::cout;
using std::endl;

Account::Account(int balance) {

	if (balance <= 0) {
		currentBalance = 0; // ������������� ������� ����� �� 0

		// �������������� 
		cout << "Initial balance was invalid!\n"
			<< "Current balance set to 0\n" << endl;
	}
	else
		currentBalance = balance;
}

void Account::credit(int amount) {
	currentBalance += amount;
}



void Account::debit(int amount) {

	
	if (amount <= currentBalance) {
		currentBalance -= amount;
	}
	else //������� ��������������
		cout << "Requested amount exceeds account balance.\n" << endl;
}

int Account::getBalance() {
	return currentBalance;
}
