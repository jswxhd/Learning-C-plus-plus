#include <iostream>
#include "stack.h"

using namespace std;

int main(void)
{
	Stack customers = Stack();
	customer person1 = {"Di Huang", 1000.50};
	customers.push(person1);
	customer person2 = {"Ben", 1200.00};
	customers.push(person2);

	double tot_payment = 0.0;
	customer person3;
	customers.pop(person3);
	tot_payment += person3.payment;
	customer person4;
	customers.pop(person4);
	tot_payment += person4.payment;
	cout << "Total Payment = " << tot_payment << endl;

	return 0;
}
