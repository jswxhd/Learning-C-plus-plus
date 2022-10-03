#include <iostream>
#include <cstring>

using namespace std;

const int ArSize = 40;

struct CandyBar
{
	char brand[ArSize];
	double weight;
	int energy;
};

void set_candybar(CandyBar &cb, const char *str = "Millennium Munch",
		  const double w = 2.85, const int e = 350);
void show_candybar(const CandyBar &cb);

int main(void)
{
	CandyBar candybar1;
//	char brand[ArSize];
//	double weight;
//	int energy;
	set_candybar(candybar1);
	show_candybar(candybar1);

	CandyBar candybar2;
	set_candybar(candybar2, "Gold Bear", 2, 500);
	show_candybar(candybar2);

	return 0;
}

void set_candybar(CandyBar &cb, const char *str, const double w, const int e)
{
	strcpy(cb.brand, str);
	cb.weight = w;
	cb.energy = e;
}

void show_candybar(const CandyBar &cb)
{
	cout << "brand: " << cb.brand << endl;
	cout << "weight: " << cb.weight << " lb" << endl;
	cout << "energy: " << cb.energy << " calories" << endl;
}
