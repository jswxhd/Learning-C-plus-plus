#include "plorg.h"

int main(void)
{
	Plorg plorg1 = Plorg();
	plorg1.showplorg();

	Plorg plorg2 = Plorg("abc");
	plorg2.showplorg();

	plorg2.set_ci(52);
	plorg2.showplorg();

	return 0;
}
