#pragma on

class Account {
public:
	Account(int balance); // ��������� �������� ���������� ������� ��� ������������� �������� ������
	void credit(int amount); // ��������� ��������� ����� �� �������� �������
	void debit(int amount); // ������� ������ �� �����
	
	int getBalance(); // ���������� ������� ������ �����

private:
	int currentBalance;
};
