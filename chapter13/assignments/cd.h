#ifndef CD_H_
#define CD_H_

//base class
class Cd
{
	private:
		char performers[50];
		char label[20];
		int selections;
		double playtime;
	public:
		Cd();
		Cd(const char *s1, const char *s2, int n, double x);
		Cd(const Cd &d);
		virtual ~Cd();
		virtual void Report() const;
		//Cd &operator=(const Cd &d);
};

class Classic : public Cd
{
	private:
		char * lead;
	public:
		Classic();
		Classic(const char *l, const char *s1,
			const char *s2, int n, double x);
		//Classic(char *l, const Cd &d);
		Classic(const Classic &c);
		~Classic();
		void Report() const;
		Classic & operator=(const Classic &c);
};

#endif
