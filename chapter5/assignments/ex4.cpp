#include <iostream>

const int Invest = 100;

int main(void)
{
	using namespace std;

	double daphne = Invest, cleo = Invest;
	int year = 0;

	while(daphne >= cleo)
	{
		daphne += Invest * 0.1;
		cleo += cleo * 0.05;
		year++;
	}

	cout << "After " << year << " years, the investment value that Cleo owns will be more than Cleo owns." << endl; 

	return 0;
}
