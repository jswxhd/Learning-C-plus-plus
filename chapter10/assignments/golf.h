#ifndef GOLF_H_
#define GOLF_H_

class Golf
{
	private:
		static const int Len = 40;
		char fullname[Len];
		int handicap;
	public:
		Golf();
		Golf(const char *name, int hc);
		int setgolf(void);
		void sethandicap(int hc);
		void showgolf(void) const;
};

#endif
