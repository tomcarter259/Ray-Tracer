#ifndef _NORMAL_HPP_
#define _NORMAL_HPP_

#include "Vector3D.hpp"

class Normal
{

	public:
		//values
		double x, y, z;

		//default constructor
		Normal(void);

		//constructor from a double
		Normal(double a);

		//constructor from 3 doubles
		Normal(double x, double y, double z);

		//constructor from a point
	//	Normal(const Point3D& a);

		//construct normal from vector
		Normal(const Vector3D& u);

		//destructor
		~Normal(void);

		//assignment of a normal: n = m
		Normal& operator= (const Normal& m);

		//plus equals of two normals: n += m
		Normal& operator+= (const Normal& m);

		//normalise
		void normalise(void);

	protected:

	private:

};

//inverse of normal: -n
inline const Normal operator- (const Normal& n)
{
	return Normal(-n.x, -n.y, -n.z);
}

//addition of two normals: n + m
inline const Normal operator+ (const Normal& n, const Normal& m)
{
	return Normal(n.x + m.x, n.y + m.y, n.z + m.z);
}

//dot product of a normal and a vector: n . u
inline const double operator* (const Normal& n, const Vector3D& u)
{
	return n.x * u.x + n.y * u.y + n.z * u.z;
}

//dot product of a vector and a normal: u . n
inline const double operator* (const Vector3D& u, const Normal& n)
{
	return n.x * u.x + n.y * u.y + n.z * u.z;
}

//multiplication of double and normal: a * n
inline const Normal operator* (const double a, const Normal& n)
{
	return Normal(a * n.x, a * n.y, a * n.z);
}

//multiplication of normal and double: n * a
inline const Normal operator* (const Normal& n, const double a)
{
	return Normal(a * n.x, a * n.y, a * n.z);
}

//addition of normal and vector: n + u
inline const Vector3D operator+ (const Normal& n, const Vector3D& u)
{
	return Vector3D(n.x + u.x, n.y + u.y, n.z + u.z);
}

//addition of vector and normal: u + n
inline const Vector3D operator+ (const Vector3D& u, const Normal& n)
{
	return Vector3D(n.x + u.x, n.y + u.y, n.z + u.z);
}

#endif
