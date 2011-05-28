#ifndef _PLANE_HPP_
#define _PLANE_HPP_

#include "GeometricObject.hpp"

class Plane: public GeometricObject
{

	public:
		//default constructor
		Plane(void);

		//constructor from a point and a normal
		Plane(const Point3D& p, const Normal& n);

		//destructor
		~Plane(void);

		//set point
		void setOrigin(const Point3D& a);

		//set normal
		void setNormal(const Normal& b);

		//has a ray intersected the plane
		virtual bool intersect(const Ray& r, double& mint, Shade& s);

	protected:

	private:
		//point that plane goes through
		Point3D p;

		//normal to plane
		Normal n;

};

#endif
