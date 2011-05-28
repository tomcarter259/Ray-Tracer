#include "Lambertian.hpp"

#include <iostream>

//default constructor
Lambertian::Lambertian(void):Material(), ka(0), kd(0), cd(0)
{}

//destructor
Lambertian::~Lambertian(void)
{}

void Lambertian::setka(const double x)
{
	ka = x;
}

void Lambertian::setkd(const double x)
{
	kd = x;
}

void Lambertian::setcs(const RGB c)
{
	cd = c;
}

RGB Lambertian::doShade(Shade& sh)
{
//std::cout << ".";
	RGB L = ka * cd * sh.w.ambient_->getLight(sh);;

	for (int j = 0; j < (int) sh.w.lights.size(); j++)
	{
		Vector3D wi = sh.w.lights[j]->getDirection(sh);
//std::cout << wi.x << " " << wi.y << " " << wi.x << std::endl;
		double nwi = sh.hitPointNormal * wi;
		if (nwi > 0)
		{
//std::cout << cd.b << " ";
			L = L + ( (kd * cd * invPI) * sh.w.lights[j]->getLight(sh) * nwi );
//std::cout << L.r << " ";
		}
	}

//std::cout << L.r;
	return L;
}
