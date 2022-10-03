#include <iostream>
#include <cstring>
#include "cow.h"

Cow::Cow()
{
	std::strcpy(name, " ");
//	hobby = nullptr;
	hobby = new char[1];
	hobby[0] = '\0';
	weight = 0;
}

Cow::Cow(const char *nm, const char *ho, double wt)
{
	std::strcpy(name, nm);
	int ho_len = std::strlen(ho);
	hobby = new char[ho_len + 1];
	std::strcpy(hobby, ho);
	weight = wt;
}

Cow::Cow(const Cow &c)
{
	std::strcpy(name, c.name);
        int ho_len = std::strlen(c.hobby);
        hobby = new char[ho_len + 1];
        std::strcpy(hobby, c.hobby);
	weight = c.weight;
}

Cow::~Cow()
{
	delete [] hobby;
}

Cow & Cow::operator=(const Cow &c)
{
        if(&c == this)
                return *this;
        std::strcpy(name, c.name);
	delete [] hobby;
        int ho_len = std::strlen(c.hobby);
        hobby = new char[ho_len + 1];
        std::strcpy(hobby, c.hobby);
        weight = c.weight;
	return *this;
}

void Cow::ShowCow() const
{
	std::cout << "Name: " << name << std::endl;
	std::cout << "Hobby: " << hobby << std::endl;
	std::cout << "Weight: " << weight << " lbs" << std::endl;
}
