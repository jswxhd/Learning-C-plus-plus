#include "golfer.h"

using std::cout;

int main(void)
{
	cout << "#1: ";
	Golfer nancy;
	cout << "#2: ";
	Golfer lulu("little Lulu");
	cout << "#3: ";
	Golfer roy("Roy Hobbs", 12);
	cout << "#4: ";
	Golfer * par = new Golfer;
	cout << "#5: ";
	Golfer next = lulu;
	cout << "#6: ";
	Golfer hazzard = "Weed Thwacker";
	cout << "#7: ";
	*par = nancy;
	cout << "#8: ";
	nancy = "Nancy Putter";

	delete par;

	return 0;
}
