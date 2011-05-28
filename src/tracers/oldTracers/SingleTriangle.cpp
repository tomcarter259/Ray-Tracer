#include "SingleTriangle.hpp"

//default constructor
SingleTriangle::SingleTriangle(void):Tracer()
{}

//constructor from a world pointer
SingleTriangle::SingleTriangle(World* w_):Tracer(w_)
{}

//destructor
SingleTriangle::~SingleTriangle(void)
{}

//trace ray
RGB SingleTriangle::traceRay(const Ray& ray)
{
	double mint;
	Shade s(*world_);

	if (world_->triangle.intersect(ray, mint, s))
		return (RGB(0,0,1));
	else return (RGB(0));
}
