#include <iostream>
#include "golf.h"

using namespace std;

const int ArSize = 3;

int main(void)
{
	Golf ann = Golf("Ann Birdfree", 24);
	ann.showgolf();
	ann.sethandicap(20);
	ann.showgolf();

	Golf players[ArSize];
	int i;
	for(i = 0; i < ArSize; i++)
	{
		int stop = players[i].setgolf();
		if(!stop)
			break;
	}
	for(int j = 0; j < i; j++)
		players[j].showgolf();

	return 0;
}
