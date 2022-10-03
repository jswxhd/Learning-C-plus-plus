#include <iostream>
#include "sales.h"

int main(void)
{
	using SALES::Sales;
	using SALES::setSales;

	double records[5] = {1000.0, 2000.0, 1500.0, 1300.0, 1700.0};
	Sales shop1;
	setSales(shop1, records, 5);
	showSales(shop1);

	Sales shop2;
	setSales(shop2);
	showSales(shop2);

	return 0;
}
