#include "Normal.hpp"

//default constructor
Normal::Normal(void):x(0.0), y(0.0), z(0.0)
{}

//constructor from a double
Normal::Normal(double a):x(a), y(a), z(a)
{}

//constructor from 3 doubles
Normal::Normal(double x, double y, double z):x(x), y(y), z(z)
{}

//constructor from a point
//Normal::Normal(const Point3D& a):x(a.x), y(a.y), z(a.z)
//{}

//constructor from a vector
Normal::Normal(const Vector3D& u):x(u.x), y(u.y), z(u.z)
{}

//destructor
Normal::~Normal(void)
{}

//assignment of a normal: n = m
Normal& Normal::operator= (const Normal& m)
{
	x = m.x;
	y = m.y;
	z = m.z;

	return (*this);
}

//plus equals of two normals: n += m
Normal& Normal::operator+= (const Normal& m)
{
	x = x + m.x;
	y = y + m.y;
	z = z + m.z;

	return (*this);
}

//normalise a normal
void Normal::normalise(void)
{
	double l = sqrt(x*x + y*y + z*z);

	x = x / l;
	y = y / l;
	z = z / l;
}
