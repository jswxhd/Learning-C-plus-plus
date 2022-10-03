#include <iostream>
#include "move.h"

using namespace std;

Move::Move(double a, double b)
{
	x = a;
	y = b;
}

void Move::showmove(void) const
{
	cout << "x = " << x << ", y = " << y << endl;
}

Move Move::add(const Move &m) const
{
	double new_x = this->x + m.x;
	double new_y = this->y + m.y;
	return Move(new_x, new_y);
}

void Move::reset(double a, double b)
{
	x = a;
	y = b;
}
