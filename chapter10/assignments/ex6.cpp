#include "move.h"

int main(void)
{
	Move a1 = Move(2.0, 3.0);
	a1.showmove();

	a1.reset(3.0, 4.0);
	a1.showmove();

	Move a2 = Move(1.0, 1.0);
	Move a3 = a1.add(a2);
	a3.showmove();

	return 0;
}
