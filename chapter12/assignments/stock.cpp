#include <cstring>
#include "stock.h"

Stock::Stock()
{
	char cname[] = "no name";
	company = new char[std::strlen(cname) + 1];
	std::strcpy(company, cname);
	shares = 0;
	share_val = 0.0;
	total_val = 0.0;
}


Stock::~Stock()
{
	delete [] company;
}


Stock::Stock(const std::string &co, long n, double pr)
{
	company = new char[co.length() + 1];
	std::strcpy(company, co.c_str());
	if(n < 0)
	{
		std::cout << "Number of shares cannot be negative; " << company << " shares set to be 0." << std::endl;
		shares = 0;
	}
	else
		shares = n;
	share_val = pr;

	set_tot();
}

Stock::Stock(const Stock &s)
{
	company = new char[std::strlen(s.company) + 1];
        shares = s.shares;
        share_val = s.share_val;
        total_val = s.total_val;
}

void Stock::buy(long num, double price)
{
	if(num < 0)
	{
		std::cout << "Number of shares cannot be negative, transaction is aborted." << std::endl;
	}
	else
	{
		shares += num;
		share_val = price;
		set_tot();
	}
}

void Stock::sell(long num, double price)
{
	if(num < 0)
	{
		std::cout << "Number of shares cannot be negative, transaction is aborted." << std::endl;
	}
	else if(num > shares)
	{
		std::cout << "You cannot sell more than you have, transaction is aborted." << std::endl; 
	}
	else
	{
		shares -= num;
		share_val = price;
		set_tot();
	}
}

void Stock::update(double price)
{
	share_val = price;
	set_tot();
}

const Stock & Stock::topval(const Stock &s) const
{
	if(s.total_val > total_val) //total_val == this->total_val
		return s;
	else
		return *this;
}

/**
Stock & Stock::operator=(const Stock &s)
{
	if(&s == this)
		return *this;
	delete [] company;
	company = new char[std::strlen(s.company) + 1];
	shares = s.shares;
	share_val = s.share_val;
	total_val = s.total_val;
}
**/

std::ostream & operator<<(std::ostream &os, const Stock &s)
{
        os << "Company: " << s.company << std::endl;
        os << "Shares: " << s.shares << std::endl;
        os << "Share price: " << s.share_val << std::endl;
        os << "Total worth: " << s.total_val << std::endl;
}

