#ifndef _MULTI_HPP_
#define _MULTI_HPP_

#include "Tracer.hpp"
#include "utils/Shade.hpp"
#include "World.hpp"

class Multi : public Tracer
{

	public:
		//default constructor
		Multi(void);

		//constructor from a world pointer
		Multi(World* w_);

		//destructor
		virtual ~Multi(void);

		//trace ray
		virtual RGB traceRay(const Ray& ray);

	protected:

	private:

};

#endif
