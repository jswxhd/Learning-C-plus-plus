#include <iostream>
#include <cstring>
#include "bankaccount.h"

BankAccount::BankAccount(const char *client, const char *num, double bal)
{
	strcpy(name, client);
	strcpy(accountnum, num);
	balance = bal;
}

void BankAccount::show(void) const
{
	std::cout << "Name: " << name << std::endl;
	std::cout << "Account Number: " << accountnum << std::endl;
	std::cout << "Current Balance: $" << balance << std::endl;
}

void BankAccount::deposit(double cash)
{
	if(cash < 0)
	{
		std::cout << "Deposit failed; negative value.\n";
		cash = 0;
	}
	balance += cash;
}

void BankAccount::withdraw(double cash)
{
	if(balance < cash)
	{
		std::cout << "Withdraw failed; You don't have enough money\n";
		cash = 0;
	}
	balance -= cash;
}





