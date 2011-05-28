#include "Tracer.hpp"

//default constructor
Tracer::Tracer(void):world_(NULL)
{}

//constructor from a World pointer
Tracer::Tracer(World* w_):world_(w_)
{}

//destructor
Tracer::~Tracer(void)
{}

//trace ray
RGB Tracer::traceRay(const Ray& ray)
{
	return (RGB(0));
}
