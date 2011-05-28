#include "Multi.hpp"

//default constructor
Multi::Multi(void):Tracer()
{}

//constructor from a world pointer
Multi::Multi(World* w_):Tracer(w_)
{}

//destructor
Multi::~Multi(void)
{}

//trace ray
RGB Multi::traceRay(const Ray& ray)
{
	Shade sh(world_->hitNearestObject(ray));

	if (sh.hit)
		return sh.color;
	else return world_->bgColor;
}
