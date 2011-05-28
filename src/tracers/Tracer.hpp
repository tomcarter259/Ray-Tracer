#ifndef _TRACER_HPP_
#define _TRACER_HPP_

#include "utils/Ray.hpp"
#include "utils/RGB.hpp"

#include <cstddef> //for NULL

class World;

class Tracer
{

	public:
		//default constructor
		Tracer(void);

		//constructor from World pointer
		Tracer(World* w_);

		//destructor
		virtual ~Tracer(void);

		//trace ray
		virtual RGB traceRay(const Ray& ray);

	protected:

	World* world_;

	private:

};

#endif
