#include <iostream>
#include "namesp.h"

namespace pers
{
	using std::cout;
	using std::cin;
	using std::endl;

	void getPerson(Person &rp)
	{
		cout << "Enter first name: ";
		cin >> rp.fname;
		cout << "Enter last name: ";
		cin >> rp.lname;
	}
	void showPerson(const Person &rp)
	{
		cout << rp.lname << ", " << rp.fname;
	}
}

namespace debts
{
	void getDebt(Debt &rd)
	{
		getPerson(rd.name);
		std::cout << "Enter debt: ";
		std::cin >> rd.amount;
	}
	void showDebt(const Debt &rd)
	{
		showPerson(rd.name);
		std::cout << ": $" << rd.amount << std::endl;
	}
	double sumDebts(const Debt arr[], int n)
	{
		double total = 0;
		for(int i = 0; i < n; i++)
			total += arr[i].amount;
		return total;
	}
}