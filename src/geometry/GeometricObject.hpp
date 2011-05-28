#ifndef _GEOMETRICOBJECT_HPP_
#define _GEOMETRICOBJECT_HPP_

#include "utils/Ray.hpp"
#include "utils/Shade.hpp"
#include "utils/RGB.hpp"
#include "utils/Point3D.hpp"
#include "utils/Vector3D.hpp"
#include "materials/Material.hpp"

class GeometricObject
{
	public:

		//default constructor
		GeometricObject(void);

		//destructor
		virtual ~GeometricObject(void);

		//has a ray intersected the object
		virtual bool intersect(const Ray& r, double& mint, Shade& s);

		//set color of object
		void setColor(RGB c);

		//get color of object
		RGB getColor(void);

		//set material of object
		virtual void setMaterial(Material* m);

		//get material of object
		Material* getMaterial(void);

	protected:

		//colour
		RGB color;

		//material
		Material* material;

	private:

};

#endif
