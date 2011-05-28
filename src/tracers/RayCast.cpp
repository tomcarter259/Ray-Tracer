#include "RayCast.hpp"

//default constructor
RayCast::RayCast(void):Tracer()
{}

//constructor from a world pointer
RayCast::RayCast(World* w_):Tracer(w_)
{}

//destructor
RayCast::~RayCast(void)
{}

//trace ray
RGB RayCast::traceRay(const Ray& ray)
{
	Shade sh(world_->hitSuper(ray));

	if (sh.hit)
	{
		sh.ray = ray;
		return sh.material->doShade(sh);
	}
	else return world_->bgColor;
}
