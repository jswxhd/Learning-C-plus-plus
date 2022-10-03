#ifndef GOLFER_H_
#define GOLFER_H_

#include <iostream>

class Golfer
{
	private:
		char * fullname;
		int games;
		int * scores;
	public:
		Golfer();
		Golfer(const char *name, int g = 0);
		Golfer(const Golfer &g);
		~Golfer();
};

#endif
