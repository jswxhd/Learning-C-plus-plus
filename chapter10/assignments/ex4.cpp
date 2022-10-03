#include <iostream>
#include "sales.h"

int main(void)
{
	using namespace SALES;

	double records[5] = {1000.0, 2000.0, 1500.0, 1300.0, 1700.0};
	Sales shop1 = Sales(records, 5);
	shop1.showSales();

	Sales shop2;
	shop2.setSales();
	shop2.showSales();

	return 0;
}
