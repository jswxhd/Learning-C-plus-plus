#include <iostream>
#include "stock20.h"

int main(void)
{
	using std::cout;

	Stock stock1("NanoSmart", 12, 20.0);
	stock1.show();

	Stock stock2 = Stock("Boffo objects", 2, 2.0);
	stock2.show();

	Stock top = stock1.topval(stock2);
	cout << "\nNow show the top value:\n";
	top.show();

	return 0;
}
