#include "PointLight.hpp"

//default constructor
PointLight::PointLight(void):origin(0), intensity(0), color(0)
{}

//constructor from a float, RGB and point
PointLight::PointLight(const float i, const RGB& c, const Point3D& o):
	origin(o),
	intensity(i),
	color(c)
{}

//destructor
PointLight::~PointLight(void)
{}

//assign origin
void PointLight::setOrigin(const Point3D& o)
{
	origin = o;
}

//assign intensity
void PointLight::setIntensity(const float i)
{
	intensity = i;
}

//assign color
void PointLight::setColor(const RGB& c)
{
	color = c;
}

//get origin
Point3D PointLight::getOrigin()
{
	return origin;
}

//get intensity
float PointLight::getIntensity()
{
	return intensity;
}

//get color
RGB PointLight::getColor()
{
	return color;
}

//get direction
Vector3D PointLight::getDirection(Shade& sh)
{
	Vector3D temp(sh.hitPoint - origin);
	temp.normalise();
	return temp;
}

//get light
RGB PointLight::getLight(Shade& sh)
{
	RGB temp(intensity * color);
	return temp;
}
