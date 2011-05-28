#include "Triangle.hpp"

//default constructor
Triangle::Triangle(void):a(0), b(0), c(0)
{}

//constructor from 3 points
Triangle::Triangle(const Point3D& a, const Point3D& b, const Point3D& c):
	a(a),
	b(b),
	c(c)
{
	//TODO calculate normal here
	Vector3D temp1 = a - b;
	Vector3D temp2 = a - c;
	Vector3D normal = temp1 ^ temp2;
	Normal norm(normal);
	n = norm;
}

/*
//constructor from 3 vectors and a normal
Triangle::Triangle(const Point3D& a, const Point3D& b, const Point3D& c, const Normal& n):
	a(a),
	b(b),
	c(c),
	n(n)
{}
*/

//destructor
Triangle::~Triangle(void)
{}

//set vectors
void Triangle::setPoints(const Point3D& x, const Point3D& y, const Point3D& z)
{
	a = x;
	b = y;
	c = z;
}

/*
//set normal
void Triangle::setNormal(const Normal& x)
{
	n = x;
}
*/

//has ray intersected the triangle
bool Triangle::intersect(const Ray& r, double& mint, Shade& sh)
{
	Point3D pe1 = a - c;
	Point3D pe2 = b - c;
	Point3D ps = r.o - c;

	//convert points to vectors for convienience
	Vector3D e1 = Vector3D(pe1);
	Vector3D e2 = Vector3D(pe2);
	Vector3D s = Vector3D(ps);

	double m = -r.d * (e1 ^ e2);

	double alpha = ( s * (r.d ^ e2) ) / m;
	double beta = ( r.d * (s ^ e1) ) / m;

	if ( (alpha + beta) < 1 && alpha > 0 && beta > 0 )
	{
		//mint = t; //what should this be?
		//sh.hitPointNormal = n;
		//sh.hitPoint = r.o + t * r.d;
		return true;
	}
	else return false;
}
