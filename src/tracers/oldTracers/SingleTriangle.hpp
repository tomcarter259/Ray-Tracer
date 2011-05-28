#ifndef _SINGLETRIANGLE_HPP_
#define _SINGLETRIANGLE_HPP_

#include "Tracer.hpp"
#include "utils/Shade.hpp"
#include "World.hpp"

class SingleTriangle : public Tracer
{

	public:
		//default constructor
		SingleTriangle(void);

		//constructor from a world pointer
		SingleTriangle(World* w_);

		//destructor
		virtual ~SingleTriangle(void);

		//trace ray
		virtual RGB traceRay(const Ray& ray);

	protected:

	private:

};

#endif
