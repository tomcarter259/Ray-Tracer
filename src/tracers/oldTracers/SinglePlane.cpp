#include "SinglePlane.hpp"

//default constructor
SinglePlane::SinglePlane(void):Tracer()
{}

//constructor from a world pointer
SinglePlane::SinglePlane(World* w_):Tracer(w_)
{}

//destructor
SinglePlane::~SinglePlane(void)
{}

//trace ray
RGB SinglePlane::traceRay(const Ray& ray)
{
	double mint;
	Shade sr(*world_);

	if (world_->plane.intersect(ray, mint, sr))
	{
		return (RGB(0,0,1));
	}
	else return (RGB(0));
}
