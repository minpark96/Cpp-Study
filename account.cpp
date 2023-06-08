#include <iostream>
#include <cstring>
#include "Account.h"

BankAccount::BankAccount(const std::string& client, const std::string& num, double bal)
{
	name = client;
	acctnum = num;
	balance = bal;
}

void BankAccount::show(void) const
{
	std::cout << "������: " << name << std::endl;
	std::cout << "���� ��ȣ : " << acctnum << std::endl;
	std::cout << "�ܾ� : $" << balance << std::endl;
}

void BankAccount::deposit(double cash)
{
	balance += cash;
}

void BankAccount::withdraw(double cash)
{
	if (cash > balance)
		balance = 0.0;
	else
		balance -= cash;
}

BankAccount::~BankAccount()
{
}