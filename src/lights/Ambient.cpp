#include "Ambient.hpp"

Ambient::Ambient(void):Light(), intensity(0), color(0)
{}

Ambient::Ambient(const float i, const RGB& c):Light(), intensity(i), color(c)
{}

Ambient::Ambient(const Ambient& amb):Light(amb), intensity(amb.intensity), color(amb.color)
{}

Ambient::~Ambient(void)
{}

void Ambient::setIntensity(const float i)
{
	intensity = i;
}

void Ambient::setColor(const RGB& c)
{
	color = c;
}

float Ambient::getIntensity()
{
	return intensity;
}

RGB Ambient::getColor()
{
	return color;
}

Vector3D Ambient::getDirection(Shade& sh)
{
	return Vector3D(0);
}

RGB Ambient::getLight(Shade& sh)
{
	RGB temp(intensity * color);
	return temp;
}
