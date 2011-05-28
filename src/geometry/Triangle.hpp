#ifndef _TRIANGLE_HPP_
#define _TRIANGLE_HPP_

#include <math.h>

#include "GeometricObject.hpp"

class Triangle : public GeometricObject
{

	public:
		//default constructor
		Triangle(void);

		//constructor from 3 points
		Triangle(const Point3D& a, const Point3D& b, const Point3D& c);

		//constructor from 3 vectors and a normal
//		Triangle(const Point3D& a, const Point3D& b, const Point3D& c, const Normal& n);

		//destructor
		~Triangle(void);

		//set vectors
		void setPoints(const Point3D& x, const Point3D& y, const Point3D& z);

		//set normal
//		void setNormal(const Normal& x);

		//has a ray intersected the triangle
		virtual bool intersect(const Ray& r, double& mint, Shade& s);

	protected:

	private:
		//Points
		Point3D a, b, c;

		//normal to triangle
		Normal n;

};

#endif
