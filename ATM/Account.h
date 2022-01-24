#pragma on

class Account {
public:
	Account(int balance); // принимает значение начального баланса для инициализации элемента данных
	void credit(int amount); // добавляет указанную сумму из текущего баланса
	void debit(int amount); // снимает деньги со счета
	
	int getBalance(); // возвращает текущий баланс счета

private:
	int currentBalance;
};
