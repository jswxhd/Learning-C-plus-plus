#ifndef PORT_H_
#define PORT_H_

#include <iostream>

using namespace std;

class Port
{
	private:
		char * brand;
		char style[20]; // i.e., tawny, ruby, vintage
		int bottles;
	public:
		Port(const char *br = "none", const char *st = "none",
		     int b = 0);
		Port(const Port &p);
		virtual ~Port() {delete [] brand;}
		Port & operator=(const Port &p);
		Port & operator+=(int b);	// add b to bottles
		Port & operator-=(int b);	// subtracts b from bottles
		int BottleCount() const {return bottles;}
		virtual void Show() const;
		friend ostream & operator<<(ostream &os, const Port &p);
};

class VintagePort : public Port
{
	private:
		char *nickname;
		int year;
	public:
		VintagePort() : Port() {}
		VintagePort(const char *br, const char *st,
			    int b, const char *nn, int y);
		VintagePort(const VintagePort &vp);
		~VintagePort() {delete [] nickname;}
		VintagePort & operator=(const VintagePort &vp);
		void Show() const;
		friend ostream & operator<<(ostream &os,
				            const VintagePort &vp);
};


#endif
