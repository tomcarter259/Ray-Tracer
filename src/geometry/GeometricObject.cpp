#include "GeometricObject.hpp"

//defult constructor
GeometricObject::GeometricObject(void):color(0.0,0.0,0.0), material()
{}

//destructor
GeometricObject::~GeometricObject(void)
{}

//has a ray intersected the object
bool GeometricObject::intersect(const Ray& r, double& mint, Shade& s)
{
	return false;
}

//set color of object
void GeometricObject::setColor(RGB c)
{
	//TODO unecessary!?
	color.r = c.r;
	color.g = c.g;
	color.b = c.b;
}

//get color of object
RGB GeometricObject::getColor()
{
	return color;
}

//set material of object
void GeometricObject::setMaterial(Material* m)
{
	material = m;
}

//get material of object
Material* GeometricObject::getMaterial(void)
{
	return material;
}
