#include "Ray.hpp"

//default constructor
Ray::Ray(void):o(0.0), d(0.0)
{}

//constructor from point and vector
Ray::Ray(const Point3D& o, const Vector3D& d):o(o.x, o.y, o.z), d(d.x, d.y, d.z)
{}

//destructor
Ray::~Ray(void)
{}

//assignment of a ray: r = s
Ray& Ray::operator= (const Ray& s)
{
	o = s.o;
	d = s.d;

	return (*this);
}
