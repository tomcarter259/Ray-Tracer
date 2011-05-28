#ifndef _POINTLIGHT_HPP_
#define _POINTLIGHT_HPP_

#include "Light.hpp"

class PointLight : public Light
{

	public:
		//default constructor
		PointLight(void);

		//constructor from a float, RGB and point
		PointLight(const float i, const RGB& c, const Point3D& o);

		//destructor
		~PointLight(void);

		//assign origin
		void setOrigin(const Point3D& o);

		//assign intensity
		void setIntensity(const float i);

		//assign color
		void setColor(const RGB& c);

		//get origin
		virtual Point3D getOrigin();

		//get intensity
		virtual float getIntensity();

		//get color
		virtual RGB getColor();

		//get direction
		virtual Vector3D getDirection(Shade& sh);

		//get light
		virtual RGB getLight(Shade& sh);
		

	protected:

	private:
		Point3D origin;
		float intensity;
		RGB color;

};

#endif
