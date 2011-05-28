#ifndef _RAYCAST_HPP_
#define _RAYCAST_HPP_

#include "Tracer.hpp"
#include "utils/Shade.hpp"
#include "World.hpp"

class RayCast : public Tracer
{

	public:
		//default constructor
		RayCast(void);

		//constructor from a world pointer
		RayCast(World* w_);

		//destructor
		virtual ~RayCast(void);

		//trace ray
		virtual RGB traceRay(const Ray& ray);

	protected:

	private:

};

#endif
