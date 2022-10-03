#include <iostream>
#include "bankaccount.h"

int main(void)
{
	BankAccount ba1 = BankAccount("Bank of America", "jswxdhuang");
	ba1.show();

	ba1.deposit(300);
	ba1.show();

	ba1.deposit(-2);
	ba1.show();

	ba1.withdraw(200);
	ba1.show();

	ba1.withdraw(200);
	ba1.show();

	return 0;
}
