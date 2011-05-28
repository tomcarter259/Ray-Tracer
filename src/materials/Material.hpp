#ifndef _MATERIAL_HPP_
#define _MATERIAL_HPP_

#include "utils/RGB.hpp"
#include "utils/Shade.hpp"
//#include "World.hpp"

//inverse pi
const double invPI = 0.3183098861837906715;

class Material
{

	public:
		//default constructor
		Material(void);

		//destructor
		~Material(void);

		virtual RGB doShade(Shade& sh);

	protected:

	private:

};

#endif
