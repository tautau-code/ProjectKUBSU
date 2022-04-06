

class Account {
public:
	
	Account(int accountNumber,
		int pin, 
		double availableBalance, 
		double totalBalance);
	bool validatePin(int userPin);
	double getAvailableBalance();
	double getTotalBalance();
	void credit(double amount);
	void debit(double amount);
private:
	int totalBalance;
};
