#ifndef _SHADE_HPP_
#define _SHADE_HPP_

#include "Point3D.hpp"
#include "Normal.hpp"
#include "RGB.hpp"
#include "Ray.hpp"
//#include "materials/Material.hpp"
//#include "World.hpp"

#include <cstddef>

//world is a pointer reference so it shouldn't be included
class Material;
class World;

class Shade
{
	//---            Shade             ---//
	// Stores all information needed to   //
	// shade a ray-object hit point       //

	public:

		//----------VALUES----------------//
		//did the ray hit an object?
		bool hit;
		//hit point coordinates (world coordinates)
		Point3D hitPoint;
		//normal of hit point
		Normal hitPointNormal;
		//color
		RGB color;
		//world reference
		World& w;
		//material pointer
		Material* material;
		//ray for specular highlights
		Ray ray;
		//TODO do I need a recursion depth?
		//--------------------------------//

		//TODO: can i make a constructor without a world?

		//constructor from world 
		Shade(World& wr);

		//TODO copy constructor?

		//destructor
		~Shade(void);

	protected:

	private:

};

#endif
