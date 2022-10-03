#include <iostream>
#include "complex0.h"

using namespace std;

Complex::Complex()
{
	real = imaginary = 0.0;
}

Complex::Complex(double r, double i)
{
	real = r;
	imaginary = i;
}

Complex Complex::operator+(const Complex &cpx) const
{
	double new_r = real + cpx.real;
	double new_i = imaginary + cpx.imaginary;
	return Complex(new_r, new_i);
}

Complex Complex::operator-(const Complex &cpx) const
{
	double new_r = real - cpx.real;
	double new_i = imaginary - cpx.imaginary;
	return Complex(new_r, new_i);
}

Complex Complex::operator*(double n) const
{
	double new_r = real * n;
	double new_i = imaginary * n;
	return Complex(new_r, new_i);
}

Complex Complex::operator*(const Complex &cpx) const
{
	double new_r = real * cpx.real - imaginary * cpx.imaginary;
	double new_i = real * cpx.imaginary + imaginary * cpx.real;
	return Complex(new_r, new_i);
}

Complex Complex::operator~() const
{
	return Complex(real, -imaginary);
}

std::ostream & operator<<(std::ostream &os, const Complex &cpx)
{
	os << "(" << cpx.real << ", " << cpx.imaginary << "i)";
	return os;
}

std::istream & operator>>(std::istream &is, Complex &cpx)
{
	cout << "real: ";
	if(!(is >> cpx.real))
		return is;
	cout << "imaginary: ";
	if(!(is >> cpx.imaginary))
		return is;
	return is;
}
