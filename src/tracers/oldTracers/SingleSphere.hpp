#ifndef _SINGLESPHERE_HPP_
#define _SINGLESPHERE_HPP_

#include "Tracer.hpp"
#include "utils/Shade.hpp"
#include "World.hpp"

class SingleSphere : public Tracer
{

	public:
		//default constructor
		SingleSphere(void);

		//constructor from a world pointer
		SingleSphere(World* w_);

		//destructor
		virtual ~SingleSphere(void);

		//trace ray
		virtual RGB traceRay(const Ray& ray);

	protected:

	private:

};

#endif
