#include "RGB.hpp"

//default constructor
RGB::RGB(void):r(0.0), g(0.0), b(0.0)
{}

//constructor from a double
RGB::RGB(double a):r(a), g(a), b(a)
{}

//constructor from 3 doubles
RGB::RGB(double r, double g, double b):r(r), g(g), b(b)
{}

//destructor
RGB::~RGB(void)
{}

//assignment of a color: c1 + c2
RGB& RGB::operator= (const RGB& c2)
{
	r = c2.r;
	g = c2.g;
	b = c2.b;

	return (*this);
}

//plus equals of two colors: c1 += c2
RGB& RGB::operator+= (const RGB& c2)
{
	r = r + c2.r;
	g = g + c2.g;
	b = b + c2.b;

	return (*this);
}

