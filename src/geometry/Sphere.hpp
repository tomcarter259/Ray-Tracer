#ifndef _SPHERE_HPP_
#define _SPHERE_HPP_

#include <math.h>

#include "GeometricObject.hpp"

class Sphere : public GeometricObject
{

	public:
		//default constructor
		Sphere(void);

		//constructor from a point and a double
		Sphere(const Point3D& o, const double r);

		//destructor
		~Sphere(void);

		//assign value to o
		void setOrigin(const Point3D& p);

		//assign value to r
		void setRadius(const double a);

		//has a ray intersected the sphere
		virtual bool intersect(const Ray& r, double& mint, Shade& s);

	protected:

	private:
		//origin
		Point3D o;

		//radius
		double r;

};

#endif
