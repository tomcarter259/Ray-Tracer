#ifndef _POINT3D_HPP_
#define _POINT3D_HPP_

#include "Vector3D.hpp"

class Point3D
{

	public:
		//values
		double x, y, z;

		//default constructor
		Point3D(void);

		//constructor from a double
		Point3D(double a);

		//constructor from 3 doubles
		Point3D(double x, double y, double z);
	
		//destructor
		~Point3D(void);

		//assignment of a point: a = b
		Point3D& operator= (const Point3D& b);

		// ||a-b||^2 ???
		// ||a-b||   ???
		//distance between 2 points ???
		//square of distance between 2 points ???

	protected:

	private:

};

//addition of point and vector: a + u
inline const Point3D operator+ (const Point3D& a, const Vector3D& u)
{
	return Point3D(a.x + u.x, a.y + u.y, a.z + u.z);
}

//subtraction of vector from point: a - u
inline const Point3D operator- (const Point3D& a, const Vector3D& u)
{
	return Point3D(a.x - u.x, a.y - u.y, a.z - u.z);
}

//subtraction of point from point: a - b
inline const Point3D operator- (const Point3D& a, const Point3D& b)
{
	return Point3D(a.x - b.x, a.y - b.y, a.z - b.z);
}

//multiplication of double and point: c * a
inline const Point3D operator* (const double c, const Point3D& a)
{
	return Point3D(c * a.x, c * a.y, c * a.z);
}

//multiplication of point and double: a * c
inline const Point3D operator* (const Point3D& a, const double c)
{
	return Point3D(c * a.x, c * a.y, c * a.z);
}

#endif
