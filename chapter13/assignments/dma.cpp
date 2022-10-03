#include "dma.h"
#include <cstring>

// ABC methods
abcDMA::abcDMA(const char *l, int r)
{
	label = new char[std::strlen(l) + 1];
	std::strcpy(label, l);
	rating = r;
}

abcDMA::abcDMA(const abcDMA &as)
{
	label = new char[std::strlen(as.label) + 1];
        std::strcpy(label, as.label);
        rating = as.rating;
}

abcDMA::~abcDMA()
{
	delete [] label;
}

abcDMA & abcDMA::operator=(const abcDMA &as)
{
        if(this == &as)
                return *this;
        delete [] label;
        label = new char[std::strlen(as.label) + 1];
        std::strcpy(label, as.label);
        rating = as.rating;
        return *this;
}

// baseDMA methods;
void baseDMA::View() const
{
        std::cout << "Label: " << Label() << std::endl;
        std::cout << "Rating: " << Rating() << std::endl;
}

baseDMA & baseDMA::operator=(const baseDMA &rs)
{
	if(this == &rs)
		return *this;
	abcDMA::operator=(rs);
	return *this;
}

/**
std::ostream & operator<<(std::ostream &os, const baseDMA &rs)
{
	os << "Label: " << rs.label << std::endl;
	os << "Rating: " << rs.rating << std::endl;
	return os;
}
**/

// lacksDMA methods
lacksDMA::lacksDMA(const char *c, const char *l, int r)
	: abcDMA(l, r)
{
	std::strncpy(color, c, 39);
	color[39] = '\0';
}

lacksDMA::lacksDMA(const char *c, const abcDMA &as) : abcDMA(as)
{
	std::strncpy(color, c, COL_LEN - 1);
        color[COL_LEN - 1] = '\0';
}

void lacksDMA::View() const
{
        std::cout << "Label: " << Label() << std::endl;
        std::cout << "Rating: " << Rating() << std::endl;
	std::cout << "Color: " << color << std::endl;
}

/**
std::ostream & operator<<(std::ostream &os, const lacksDMA &ls)
{
	os << (const baseDMA &) ls;
	os << "Color: " << ls.color << std::endl;
	return os;
}
**/

//hasDMA methods
hasDMA::hasDMA(const char *s, const char *l, int r)
	: abcDMA(l, r)
{
	style = new char[std::strlen(s) + 1];
	std::strcpy(style, s);
}

hasDMA::hasDMA(const char *s, const abcDMA &as) : abcDMA(as)
{
	style = new char[std::strlen(s) + 1];
        std::strcpy(style, s);
}

hasDMA::hasDMA(const hasDMA &hs) : abcDMA(hs)
{
        style = new char[std::strlen(hs.style) + 1];
        std::strcpy(style, hs.style);
}

hasDMA::~hasDMA()
{
	delete [] style;
}

hasDMA & hasDMA::operator=(const hasDMA &hs)
{
	if(this == &hs)
		return *this;
	abcDMA::operator=(hs);
	delete [] style;
        style = new char[std::strlen(hs.style) + 1];
        std::strcpy(style, hs.style);
	return *this;
}

void hasDMA::View() const
{
        std::cout << "Label: " << Label() << std::endl;
        std::cout << "Rating: " << Rating() << std::endl;
        std::cout << "Style: " << style << std::endl;
}

/**
std::ostream & operator<<(std::ostream &os, const hasDMA &hs)
{
	os << (const baseDMA &) hs;
	os << "Style: " << hs.style << std::endl;
	return os;
}
**/
