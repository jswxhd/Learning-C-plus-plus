#ifndef VECTOREX2_H_
#define VECTOREX2_H_

#include <iostream>

namespace VECTOR
{
	class Vector
	{
		public:
			enum Mode {RECT, POL};
		private:
			double x;
			double y;
			//double mag;
			//double ang;
			Mode mode;
			double get_mag(double n1, double n2) const;
			double get_ang(double n1, double n2) const;
			void set_x(double n1, double n2);
			void set_y(double n1, double n2);
		public:
			Vector();
			Vector(double n1, double n2, Mode form = RECT);
			void reset(double n1, double n2, Mode form = RECT);
			~Vector();
			double xval() const {return x;}
			double yval() const {return y;}
			double magval() const {return get_mag(x, y);}
			double angval() const {return get_ang(x, y);}
			void polar_mode();
			void rect_mode();
			// operator overloading
			Vector operator+(const Vector &b) const;
			Vector operator-(const Vector &b) const;
			Vector operator-() const;
			Vector operator*(double n) const;
			// friends
			friend Vector operator*(double n, const Vector &a);
			friend std::ostream & operator<<(std::ostream &os, const Vector &v);
	};
}

#endif
