#ifndef PLORG_H_
#define PLORG_H_

class Plorg
{
	private:
		const static int LIMIT = 19;
		char name_[LIMIT];
		int ci_;
	public:
		Plorg(const char *name = "Plorga", int ci = 50);
		void set_ci(double ci);
		void showplorg(void) const;
};

#endif
