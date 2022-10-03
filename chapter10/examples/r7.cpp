/*
#ifndef
#define

class BankAccount
{
	private:
		char name[50];
		char accountnum[50];
		double balance;
	public:
		BankAccount(const char *client, const char *num, double bal = 0.0);
		void show(void) const;
		void deposit(double cash);
		void withdraw(double cash);
}

#endif
*/

#include <iostream>
#include ""

BankAccount::BankAccount(const char *client, const char *num, double bal)
{
	strcpy(name, client);
	strcpy(accountnum, num);
	balance = bal;
}

