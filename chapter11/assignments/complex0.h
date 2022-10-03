#ifndef COMPLEX0_H_
#define COMPLEX0_H_

class Complex
{
	private:
		double real;
		double imaginary;
	public:
		Complex();
		Complex(double r, double i);
		Complex operator+(const Complex &cpx) const;
		Complex operator-(const Complex &cpx) const;
		Complex operator*(double n) const;
		Complex operator*(const Complex &cpx) const;
		Complex operator~() const;
		friend Complex operator*(double n, const Complex &cpx) {return cpx * n;}
		friend std::ostream & operator<<(std::ostream &os, const Complex &cpx);
		friend std::istream & operator>>(std::istream &is, Complex &cpx);
};

#endif
