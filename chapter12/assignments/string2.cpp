#include <cstring>
#include <cctype>
#include "string2.h"

using std::cin;
using std::cout;

int String::num_strings = 0;

int String::HowMany()
{
	return num_strings;
}

String::String(const char *s)
{
	len = std::strlen(s);
	str = new char[len + 1];
	std::strcpy(str, s);
	num_strings++;
}

String::String()
{
	len = 4;
	str = new char[1];
	str[0] = '\0';
	num_strings++;
}

String::String(const String &st)
{
	num_strings++;
	len = st.len;
	str = new char[len + 1];
	std::strcpy(str, st.str);
}

String::~String()
{
	--num_strings;
	delete [] str;
}

void String::stringlow()
{
	for(int i = 0; i < len; i++)
		str[i] = tolower(str[i]);
}

void String::stringup()
{
	int i = 0;
        while(str[i])
	{
                str[i] = toupper(str[i]);
		i++;
	}
}

int String::has(const char c) const
{
	int cnt = 0;
	for(int i = 0; i < len; i++)
	{
		if(str[i] == c)
			cnt++;
	}
	return cnt;
}

String & String::operator=(const String &st)
{
	if(this == &st)
		return *this;
	delete [] str;
        len = st.len;
        str = new char[len + 1];
        std::strcpy(str, st.str);
	return *this;
}

String & String::operator=(const char *s)
{
        delete [] str;
        len = std::strlen(s);
        str = new char[len + 1];
        std::strcpy(str, s);
        return *this;
}

String & String::operator+(const char *s)
{
	char tempstr[len + 1];
	std::strcpy(tempstr, str);
	len = len + std::strlen(s);
	delete [] str;
	str = new char[len + 1];
	std::strcpy(str, tempstr);
	std::strcat(str, s);
	return *this;
}

String & String::operator+(const String &st)
{
        char tempstr[len + 1];
        std::strcpy(tempstr, str);
        len = len + st.len;
	delete [] str;
	str = new char[len + 1];
	std::strcpy(str, tempstr);
	std::strcat(str, st.str);
	return *this;
}

char & String::operator[](int i)
{
	return str[i];
}

const char & String::operator[](int i) const
{
	return str[i];
}

String operator+(const char *s, const String &st)
{
	int slen = std::strlen(s) + st.len;
	char s2[slen + 1];
	std::strcpy(s2, s);
	std::strcat(s2, st.str);

	return String(s2);
}

bool operator<(const String &st1, const String &st2)
{
	return (std::strcmp(st1.str, st2.str) < 0);
}

bool operator>(const String &st1, const String &st2)
{
	return st2 < st1;
}

bool operator==(const String &st1, const String &st2)
{
	return (std::strcmp(st1.str, st2.str) == 0);
}

ostream & operator<<(ostream &os, const String &st)
{
	os << st.str;
	return os;
}

istream & operator>>(istream &is, String &st)
{
	char temp[String::CINLIM];
	is.get(temp, String::CINLIM);
	if(is)
		st = temp;
	while(is && is.get() != '\n')
		continue;
	return is;
}
