#ifndef _VECTOR3D_HPP_
#define _VECTOR3D_HPP_

#include <math.h>

//pointer references so must not be included!
//class Normal;
class Point3D;

class Vector3D 
{

	public:
		//values
		double x, y, z;

		//default constructor
		Vector3D(void);

		//constructor from a double
		Vector3D(double a);

		//constructor from 3 doubles
		Vector3D(double x, double y, double z);

		//constructor from a Point3D
		Vector3D(const Point3D& a);

		//destructor 
		~Vector3D(void);

		//assignment of a vector: u = v
		Vector3D& operator= (const Vector3D& v);

		//length: ||u||
		double length(void);

		//length squared: ||u||^2
		double lengthSquared(void);

		//plus equals of two vectors: u += v
		Vector3D& operator+= (const Vector3D& v);

		//normalise a vector
		void normalise(void);

	protected:

	private:

};

//addition of two vectors: u + v
inline const Vector3D operator+ (const Vector3D& u, const Vector3D& v)
{
	return Vector3D(u.x + v.x, u.y + v.y, u.z + v.z);
}

//subtraction of two vectors: u - v
inline const Vector3D operator- (const Vector3D& u, const Vector3D& v)
{
	return Vector3D(u.x - v.x, u.y - v.y, u.z - v.z);
}

//multiplication of double and vector: a * u
inline const Vector3D operator* (const double a, const Vector3D& u)
{
	return Vector3D(a * u.x, a * u.y, a * u.z);
}

//multiplication of vector and double: u * a
inline const Vector3D operator* (const Vector3D& u, const double a)
{
	return Vector3D(a * u.x, a * u.y, a * u.z);
}

//division of vector by double: u / a
inline const Vector3D operator/ (const Vector3D& u, const double a)
{
	return Vector3D(u.x / a, u.y / a, u.z / a);
}

//dot product of two vectors: u . v
inline const double operator* (const Vector3D& u, const Vector3D& v)
{
	return ((u.x * v.x) + (u.y * v.y) + (u.z * v.z));
}

//cross product of two vectors: u x v
inline const Vector3D operator^ (const Vector3D& u, const Vector3D& v)
{
	return Vector3D(u.y * v.z - u.z * v.y, 
					u.z * v.x - u.x * v.z,
					u.x * v.y - u.y * v.x);
}

//inverse of vector: -u
inline const Vector3D operator- (const Vector3D& u)
{
	return Vector3D(-u.x, -u.y, -u.z);
}

#endif
