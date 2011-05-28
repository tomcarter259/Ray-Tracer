#include "Light.hpp"

//default constructor
Light::Light(void)
{}

//destructor
Light::~Light(void)
{}

//get direction
Vector3D Light::getDirection(Shade& sh)
{
	return Vector3D(0);
}

//get light
RGB Light::getLight(Shade& sh)
{
	return RGB(0);
}
