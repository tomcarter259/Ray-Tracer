#ifndef _RGB_HPP_
#define _RGB_HPP_

#include <math.h>

class RGB
{

	public:
		//RGB values
		double r, g, b;

		//default constructor
		RGB(void);

		//constructor from a double
		RGB(double a);

		//constructor from 3 doubles
		RGB(double r, double g, double b);

		//destructor
		~RGB(void);

		//assignment of a color: c1 = c2
		RGB& operator= (const RGB& c2);

		//plus equals of two colors: c1 += c2
		RGB& operator+= (const RGB& c2);

	protected:

	private:

};

//addition of two colors: c1 + c2
inline const RGB operator+ (const RGB& c1, const RGB& c2)
{
	return RGB(c1.r + c2.r, c1.g + c2.g, c1.b + c2.b);
}

//multiplication of a float and a color: a * c
inline const RGB operator* (const float a, const RGB& c)
{
	return RGB(a * c.r, a * c.g, a * c.b);
}

//multiplication of a color and a float: c * a
inline const RGB operator* (const RGB& c, const float a)
{
	return RGB(a * c.r, a * c.g, a * c.b);
}

//multiplication of a double and a color: d * c
inline const RGB operator* (const double d, const RGB& c)
{
	return RGB(d * c.r, d * c.g, d * c.b);
}

//multiplication of a color and a double: c * a
inline const RGB operator* (const RGB& c, const double d)
{
	return RGB(d * c.r, d * c.g, d * c.b);
}

//division of a color by a float: c / a
inline const RGB operator/ (const RGB& c, const float a)
{
	return RGB(c.r / a, c.g / a, c.b /a);
}

//multiplication of two colors: c1 * c2
inline const RGB operator* (const RGB& c1, const RGB& c2)
{
	return RGB(c1.r * c2.r, c1.g * c2.g, c1.b * c2.b);
}

//exponentiation of color to a float: c^a
inline const RGB operator^ (const RGB& c, const float a)
{
	return RGB(pow(c.r, a), pow(c.g, a), pow(c.b, a));
}

#endif
