#ifndef _SINGLEPLANE_HPP_
#define _SINGLEPLANE_HPP_

#include "Tracer.hpp"
//#include "utils/Shade.hpp"
#include "World.hpp"

class SinglePlane : public Tracer
{
	
	public:
		//default constructor
		SinglePlane(void);

		//constructor from a world pointer
		SinglePlane(World* w_);

		//detructor
		virtual ~SinglePlane(void);

		//trace ray
		virtual RGB traceRay(const Ray& ray);

	protected:

	private:

};

#endif
