#ifndef _WORLD_HPP_
#define _WORLD_HPP_

#include <math.h>
#include <vector>
#include <iostream>
#include <stdlib.h>
#include <fstream>

#include "Camera.hpp"
#include "utils/RGB.hpp"
#include "utils/Vector3D.hpp"
#include "utils/Shade.hpp"
#include "utils/Ray.hpp"
#include "PPM.hpp"

#include "geometry/GeometricObject.hpp"
#include "geometry/Sphere.hpp"
#include "geometry/Plane.hpp"
#include "geometry/Triangle.hpp"

#include "tracers/Tracer.hpp"
//#include "tracers/SinglePlane.hpp"
//#include "tracers/SingleSphere.hpp"
//#include "tracers/SingleTriangle.hpp"
#include "tracers/Multi.hpp"
#include "tracers/RayCast.hpp"

#include "lights/Light.hpp"
#include "lights/PointLight.hpp"
#include "lights/Ambient.hpp"

#include "materials/Material.hpp"
#include "materials/Lambertian.hpp"

class World
{

	public:
		//values
		Camera cam;
		RGB bgColor;
		PPM image;
		Tracer* tracer_;
		Light* ambient_;

	//	Plane plane;
	//	Sphere sphere;
	//	Triangle triangle;

		std::vector<GeometricObject*> objects;
		std::vector<Light*> lights;

		//default constructor
		World(void);

		//destructor
		~World(void);

		//build 
		void build(const char* filename);

		//add object
		void addObject(GeometricObject* obj);

		//add light
		void addLight(Light* light);

		//shade pixel color of closest object
		Shade hitNearestObject(const Ray& ray);

		//shade pixel of closest object - with lights & materials
		Shade hitSuper(const Ray& ray);

		//render
		void render(void);

		//calculate h and v
		Vector3D calchv(Vector3D d, Vector3D a, double fov, double res);

	protected:

	private:

};

inline void World::addObject(GeometricObject* obj)
{
	objects.push_back(obj);
}

inline void World::addLight(Light* light)
{
	lights.push_back(light);
}

#endif
