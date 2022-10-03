#ifndef STRING2_H_
#define STRING2_H_

#include <iostream>
using std::ostream;
using std::istream;

class String
{
	private:
		char *str;
		int len;
		static int num_strings;
		static const int CINLIM = 80;
	public:
		String(const char *s);
		String();
		String(const String &st);
		~String();
		int length () const {return len;}
		void stringlow();
		void stringup();
		int has(const char c) const;
		// overload operator methods
		String & operator=(const String &st);
		String & operator=(const char *s);
		String & operator+(const char *s);
		String & operator+(const String &st);
		char & operator[](int i);
		const char & operator[](int i) const;
		// overload operator friends
		friend String operator+(const char *s, const String &st);
		friend bool operator<(const String &st1, const String &st2);
		friend bool operator>(const String &st1, const String &st2);
		friend bool operator==(const String &st1, const String &st2);
		friend ostream & operator<<(ostream &os, const String &st);
		friend istream & operator>>(istream &is, String &st);
		// static function
		static int HowMany();
};

#endif
