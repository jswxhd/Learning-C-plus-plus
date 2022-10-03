#include <iostream>

using namespace std;

long double probability(unsigned int number, unsigned int picks);

int main(void)
{
	unsigned int ftotal, fchoices, stotal, schoices;

	cout << "Enter the total number of choices in field numbers and the number of picks allowed:" << endl;

	while(!(cin >> ftotal >> fchoices) || fchoices > ftotal)
		continue;
	long double fprob = probability(ftotal, fchoices);

	cout << "Enter the total number of choices in special numbers and the number of picks allowed:" << endl;
	while(!(cin >> stotal >> schoices) || schoices > stotal)
		continue;
	long double sprob = probability(stotal, schoices);

	cout << "The chance of winning = " << fprob * sprob << endl;

	cout << "Bye!" << endl;

	return 0;
}

long double probability(unsigned int number, unsigned int picks)
{
	double n, p;
	long double result = 1.0;

	for(n = number, p = picks; p > 0; n--, p--)
		result = result * n / p;

	return 1 / result;
}
