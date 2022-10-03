#include <iostream>
#include "golf.h"

using namespace std;

const int ArSize = 3;

int main(void)
{
	golf ann;
	setgolf(ann, "Ann Birdfree", 24);
	showgolf(ann);
	handicap(ann, 20);
	showgolf(ann);

	golf players[ArSize];
	int i;
	for(i = 0; i < ArSize; i++)
	{
		int stop = setgolf(players[i]);
		if(!stop)
			break;
	}
	for(int j = 0; j < i; j++)
		showgolf(players[j]);

	return 0;
}
