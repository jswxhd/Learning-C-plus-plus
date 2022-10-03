#ifndef MYTIMEEX4_H_
#define MYTIMEEX4_H_

#include <iostream>

class Time
{
	private:
		int hours;
		int minutes;
	public:
		Time();
		Time(int h, int m = 0);
		void AddMin(int m);
		void AddHr(int h);
		void Reset(int h = 0, int m = 0);
		friend Time operator+(const Time &t1, const Time &t2);
		friend Time operator-(const Time &t1, const Time &t2);
		Time operator*(double n) const;
		friend Time operator*(double n, const Time &t);
		friend std::ostream & operator<<(std::ostream &os, const Time &t);
		void Show() const;
};

#endif
