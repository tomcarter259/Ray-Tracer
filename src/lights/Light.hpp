#ifndef _LIGHT_HPP_
#define _LIGHT_HPP_

#include "utils/Vector3D.hpp"
#include "utils/RGB.hpp"
#include "utils/Shade.hpp"

class Light
{

	public:
		//default constructor
		Light(void);

		//destructor
		~Light(void);

		//get direction
		virtual Vector3D getDirection(Shade& sh);

		//get light	
		virtual RGB getLight(Shade& sh);

	protected:

	private:

};

#endif
