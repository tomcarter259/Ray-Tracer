#ifndef _AMBIENT_HPP_
#define _AMBIENT_HPP_

#include "Light.hpp"

class Ambient : public Light
{

	public:
		Ambient(void);

		Ambient(const float i, const RGB& c);

		Ambient(const Ambient& amb);

		~Ambient(void);

		void setIntensity(const float i);

		void setColor(const RGB& c);

		virtual float getIntensity(void);

		virtual RGB getColor(void);

		virtual Vector3D getDirection(Shade& sh);

		virtual RGB getLight(Shade& sh);

	protected:

	private:
		float intensity;
		RGB color;
};

#endif
