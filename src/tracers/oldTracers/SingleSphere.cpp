#include "SingleSphere.hpp"

//default constructor
SingleSphere::SingleSphere(void):Tracer()
{}

//constructor from a world pointer
SingleSphere::SingleSphere(World* w_):Tracer(w_)
{}

//destructor
SingleSphere::~SingleSphere(void)
{}

//trace ray
RGB SingleSphere::traceRay(const Ray& ray)
{
	double mint;
	Shade sr(*world_);

	if ( world_->sphere.intersect(ray, mint, sr))
	{
		return (RGB(0,0,1));
	}
	else return (RGB(0));
}
