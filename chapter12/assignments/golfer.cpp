#include "golfer.h"

using std::cout;

Golfer::Golfer()
{
	cout << "used default\n";
}

Golfer::Golfer(const char *name, int g)
{
	cout << "used constructor1\n";
}

Golfer::Golfer(const Golfer &g)
{
	cout << "used copying constructor\n";
}

Golfer::~Golfer()
{

}
