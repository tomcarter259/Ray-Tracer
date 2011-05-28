#include "Sphere.hpp"

#include <iostream>

//default constructor
Sphere::Sphere(void):o(0.0), r(0.0)
{}

//constructor from a point and a double
Sphere::Sphere(const Point3D& o, const double r):o(o), r(r)
{}

//destructor
Sphere::~Sphere(void)
{}

//assign value to o
void Sphere::setOrigin(const Point3D& p)
{
	o = p;
}

//assign value to r
void Sphere::setRadius(const double a)
{
	r = a;
}

//has a ray intersected the sphere
bool Sphere::intersect(const Ray& ray, double& mint, Shade& s)
{
	//ray intersects sphere equation: (o + td - c) . (o + td - c) - r^2 = 0
	//simplifies to: at^2 + bt + c = 0

	//a = d . d
	double a = ray.d * ray.d;

	//b = 2(o - c) . d
	Point3D temp1p = 2.0 * (ray.o - o);
	Vector3D temp1v = temp1p;
	double b = temp1v * ray.d;

	//c = (o - c) . (o - c) - r^2
	double c = (ray.o - o) * (ray.o - o) - pow(r,2);

	//d = b^2 - 4ac
	double d = pow(b,2) - 4 * a * c;

	//two intersections
	if (d > 0)
	{
		Point3D temp2p = ray.o -o;
		Vector3D temp2v = temp2p;
		
		//big root
		double t = (-b + sqrt(d)) / (2 * a);

		if (t > 0)
		{
			mint = t;
			s.hitPointNormal = (temp2v + t * ray.d) / r;
			s.hitPoint = ray.o + t * ray.d;

			return true;
		}

		//small root
		t = (-b - sqrt(d)) / (2 * a);

		if (t>0)
		{
			mint = t;
			s.hitPointNormal = (temp2v + t * ray.d) / r;
			s.hitPointNormal.normalise();
			s.hitPoint = ray.o + t * ray.d;

			return true;
		}
	}
	//one intersection
//	else if (d == 0) 
//	{
		//TODO make this bit
//	}
	//no intersection
	else { return false; }

	return false;
}
