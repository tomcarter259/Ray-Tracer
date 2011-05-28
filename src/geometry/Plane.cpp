#include "Plane.hpp"

//default constructor
Plane::Plane(void):p(0.0), n(0.0)
{}

//constructor from a point and a normal
Plane::Plane(const Point3D& p, const Normal& n):p(p), n(n)
{}

//set point
void Plane::setOrigin(const Point3D& a)
{
	p = a;
}

//set normal
void Plane::setNormal(const Normal& b)
{
	n = b;
}

//destructor
Plane::~Plane(void)
{}

//has a ray intersected the plane
//TODO check with lecture notes equations
bool Plane::intersect(const Ray& r, double& mint, Shade& s)
{
	//ray intersects plane equation: t = (a - o) * n / (d . n)
	double t = (p - r.o) * n / (r.d * n);

	//TODO See if its a good idea to replace 0 with some tiny number (kEpsilon?)
	if (t < 0)
	{
		mint = t;
		s.hitPointNormal = n;
		s.hitPoint = r.o + t * r.d;

		return true;
	}
	else { return false; }
}
