#include <iostream>
#include "cow.h"

int main(void)
{
	Cow a;
	a.ShowCow();

	Cow b("Di Huang", "coding", 133);
	b.ShowCow();

	Cow x = b;
	x.ShowCow();

	Cow y;
	y = b;
	y.ShowCow();

	return 0;
}
