#include <cmath>
#include "vectorex2.h"

using std::sqrt;
using std::sin;
using std::cos;
using std::atan;
using std::atan2;
using std::cout;

namespace VECTOR
{
	const double Rad_to_deg = 45 / atan(1.0);

	double Vector::get_mag(double n1, double n2) const
	{
		double mag = sqrt(n1 * n1 + n2 * n2);
		return mag;
	}

	double Vector::get_ang(double n1, double n2) const
	{
		double ang;
		if(n2 == 0.0 && n2 == 0.0)
			ang = 0.0;
		else
			ang = atan2(n2, n1);
		return ang;
	}

	void Vector::set_x(double n1, double n2)
	{
		x = n1 * cos(n2 / Rad_to_deg);
	}

	void Vector::set_y(double n1, double n2)
	{
		y = n1 * sin(n2 / Rad_to_deg);
	}

	Vector::Vector()
	{
		x = y = 0.0;
		mode = RECT;
	}

	Vector::Vector(double n1, double n2, Mode form)
	{
		mode = form;
		if(form == RECT)
		{
			x = n1;
			y = n2;
			//set_mag();
			//set_ang();
		}
		else if(form == POL)
		{
			//mag = n1;
			//ang = n2 / Rad_to_deg;
			set_x(n1, n2);
			set_y(n1, n2);
		}
		else
		{
			cout << "Incorrect 3rd argument to Vector() --";
			cout << "Vector set to 0\n";
			x = y = 0.0;
			mode = RECT;
		}
	}

	void Vector::reset(double n1, double n2, Mode form)
	{
		mode = form;
		if(form == RECT)
		{
			x = n1;
			y = n2;
			//set_mag();
			//set_ang();
		}
		else if(form == POL)
		{
			//mag = n1;
			//ang = n2 / Rad_to_deg;
			set_x(n1, n2);
			set_y(n1, n2);
		}
		else
		{
			cout << "Incorrect 3rd argument to Vector() --";
			cout << "Vector set to 0\n";
			x = y = 0.0;
			mode = RECT;
		}
	}

	Vector::~Vector()
	{
	}

	void Vector::polar_mode()
	{
		mode = POL;
	}

	void Vector::rect_mode()
	{
		mode = RECT;
	}

	Vector Vector::operator+(const Vector &b) const
	{
		return Vector(x + b.x, y + b.y);
	}

	Vector Vector::operator-(const Vector &b) const
	{
		return Vector(x - b.x, y - b.y);
	}

	Vector Vector::operator-() const
	{
		return Vector(-x, -y);
	}

	Vector Vector::operator*(double n) const
	{
		return Vector(n * x, n * y);
	}

	Vector operator*(double n, const Vector & a)
	{
		return a * n;
	}

	std::ostream & operator<<(std::ostream &os, const Vector &v)
	{
		if(v.mode == Vector::RECT)
			os << "(x, y) = (" << v.x << ", " << v.y << ")";
		else if(v.mode == Vector::POL)
		{
			os << "(m, a) = (" << v.magval() << ", "
                           << v.angval()*Rad_to_deg << ")";
		}
		else
			os << "Vector object mode is invalid";
		return os;
	}
}
