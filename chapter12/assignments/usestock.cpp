#include "stock.h"

int main(void)
{
	using std::cout;

	Stock stock1("NanoSmart", 12, 20.0);
	cout << stock1;

	Stock stock2 = Stock("Boffo objects", 2, 2.0);
	cout << stock2;

	Stock top = stock1.topval(stock2);
	cout << "\nNow show the top value:\n";
	cout << top;

	return 0;
}
