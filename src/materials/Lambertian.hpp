#ifndef _LAMBERTIAN_HPP_
#define _LAMBERTIAN_HPP_

#include "Material.hpp"
#include "World.hpp"

class Lambertian : public Material
{

	public:
		//default constructor
		Lambertian(void);

		//destructor
		~Lambertian(void);

		void setka(const double x);

		void setkd(const double x);

		void setcs(const RGB c);

		virtual RGB doShade(Shade& sh);

	protected:

	private:
		double ka;
		double kd;
		RGB cd;

};

#endif
