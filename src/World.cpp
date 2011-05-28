#include "World.hpp"

#include <iostream>

using namespace std;

//default constructor
World::World(void):
	cam(),
	bgColor(),
	image()
//	plane(),
//	sphere(),
//	triangle()
{}

//destructor
World::~World(void)
{}

//build function
void World::build(const char* filename)
{
	string key;

	//set default bgColor
	bgColor = RGB(0,0,0);

	//magic code :s
//	Shade sh(*this);

	ifstream input;
	input.open(filename);

	if(input.is_open())
	{
		while (input >> key)
		{
			//comments
			if ( key.compare("#") == 0 )
			{
				bool comment;
				comment = true;
				while ( comment == true )
				{
					input >> key;
					if ( key.compare("#") == 0 )
						comment = false;
				}
			}
			//cam hres
			else if ( key.compare("cam.hres") == 0 )
			{
				double h;
				input >> h;
				cam.hres = h;
			}
			//cam vres
			else if ( key.compare("cam.vres") == 0 )
			{
				double v;
				input >> v;
				cam.vres = v;
			}
			//cam origin
			else if ( key.compare("cam.origin") == 0 )
			{
				double x, y, z;
				input >> x;
				input >> y;
				input >> z;
				cam.origin = Point3D(x, y, z);
			}
			//cam direction
			else if ( key.compare("cam.direction") == 0 )
			{
				double x, y, z;
				input >> x;
				input >> y;
				input >> z;
				cam.direction = Vector3D(x, y, z);
				cam.direction.normalise();
			}
			//cam up			
			else if ( key.compare("cam.up") == 0 )
			{
				double x, y, z;
				input >> x;
				input >> y;
				input >> z;
				cam.up = Vector3D(x, y, z);
			}
			//cam fovX
			else if ( key.compare("cam.fovX") == 0 )
			{
				double f;
				input >> f;
				cam.fovX = f;
			}
			//cam fovY
			else if ( key.compare("cam.fovY") == 0 )
			{
				double f;
				input >> f;
				cam.fovY = f;
			}
			//bg color
			else if ( key.compare("bgColor") == 0 )
			{
				double r, g, b;
				input >> r;
				input >> g;
				input >> b;
				bgColor = RGB(r, g, b);
			}
			//tracer
			else if ( key.compare("tracer") == 0 )
			{
				string type;
				input >> type;
				if ( type.compare("multi") == 0 )
					tracer_ = new Multi(this);
				else if ( type.compare("raycast") == 0 )
					tracer_ = new RayCast(this);

				/*
				if ( type.compare("singlePlane") == 0 )
					tracer_ = new SinglePlane(this);
				else if ( type.compare("singleSphere") == 0 )
					tracer_ = new SingleSphere(this);
				else if ( type.compare("singleTriangle") == 0 )
					tracer_ = new SingleTriangle(this);
				else if ( type.compare("multi") == 0 )
					tracer_ = new Multi(this);
				*/
			}
			//====PLANE====//
			else if ( key.compare("plane.new") == 0 )
			{
				bool planeDef = true;
				Plane* plane = new Plane;
				while ( planeDef == true )
				{
					input >> key;
					//plane origin
					if ( key.compare("plane.origin") == 0 )
					{
						double x, y, z;
						input >> x;
						input >> y;
						input >> z;
						plane->setOrigin(Point3D(x, y, z));
					}
					//plane normal
					else if ( key.compare("plane.normal") == 0 )
					{
						double x, y, z;
						input >> x;
						input >> y;
						input >> z;
						plane->setNormal(Normal(x, y, z));
					}
					//material
					else if ( key.compare("plane.lambertian") == 0 )
					{
						bool lamDef = true;
						Lambertian* lambertian = new Lambertian;
						while ( lamDef == true )
						{
							input >> key;
							//ka
							if ( key.compare("lambertian.ka") == 0 )
							{
								double ka;
								input >> ka;
								lambertian->setka(ka);
							}
							//kd
							if ( key.compare("lambertian.kd") == 0 )
							{
									double kd;
									input >> kd;
									lambertian->setkd(kd);
							}
							//cd
							else if ( key.compare("lambertian.cs") == 0 )
							{
									double r, g, b;
									input >> r;
									input >> g;
									input >> b;
									lambertian->setcs(RGB(r, g, b));
							}
							else if ( key.compare("lambertian.end") == 0 )
							{
									plane->setMaterial(lambertian);
									lamDef = false;
							}
						}
					}

					//add to vector
					else if ( key.compare("plane.end") == 0 )
					{
						addObject(plane);
						planeDef = false;
					}
				}
			}
			//====SPHERE====//
			else if ( key.compare("sphere.new") == 0 )
			{
				bool sphereDef = true;
				Sphere* sphere = new Sphere;
				while ( sphereDef == true )
				{
					input >> key;
					//sphere origin
					if ( key.compare("sphere.origin") == 0 )
					{
						double x, y, z;
						input >> x;
						input >> y;
						input >> z;
						sphere->setOrigin(Point3D(x, y, z));
					}
					//sphere radius
					else if ( key.compare("sphere.radius") == 0 )
					{
						double r;
						input >> r;
						sphere->setRadius(r);
					}
					//sphere color
					else if ( key.compare("sphere.color") == 0 )
					{
						double r, g, b;
						input >> r;
						input >> g;
						input >> b;
						sphere->setColor(RGB(r, g, b));
					}
					//material
					else if ( key.compare("sphere.lambertian") == 0 )
					{
						bool lamDef = true;
						Lambertian* lambertian = new Lambertian;
						while ( lamDef == true )
						{
							input >> key;
							//ka
							if ( key.compare("lambertian.ka") == 0 )
							{
								double ka;
								input >> ka;
								lambertian->setka(ka);
							}
							//kd
							if ( key.compare("lambertian.kd") == 0 )
							{
									double kd;
									input >> kd;
									lambertian->setkd(kd);
							}
							//cd
							else if ( key.compare("lambertian.cs") == 0 )
							{
									double r, g, b;
									input >> r;
									input >> g;
									input >> b;
									lambertian->setcs(RGB(r, g, b));
							}
							else if ( key.compare("lambertian.end") == 0 )
							{
									sphere->setMaterial(lambertian);
									lamDef = false;
							}
						}
					}
					//add to vector
					else if ( key.compare("sphere.end") == 0 )
					{
						addObject(sphere);
						sphereDef = false;
					}
				}
			}

			//====TRIANGLE====//
			else if ( key.compare("triangle.new") == 0 )
			{
				bool triangleDef = true;
				Triangle* triangle = new Triangle;
				while ( triangleDef == true )
				{
					input >> key;
					//triangle points
					if ( key.compare("triangle.points") == 0 )
					{
						double x1, x2, x3, y1, y2, y3, z1, z2, z3;
						input >> x1;
						input >> y1;
						input >> z1;
						input >> x2;
						input >> y2;
						input >> z2;
						input >> x3;
						input >> y3;
						input >> z3;
						triangle->setPoints(Point3D(x1,y1,z1), Point3D(x2,y2,z2), Point3D(x3,y3,z3));
					}
					else if ( key.compare("triangle.end") == 0 )
					{
						addObject(triangle);
						triangleDef = false;
					}
				}
			}
			//====POINT LIGHT====//
			else if ( key.compare("pointlight.new") == 0 )
			{
				bool plDef = true;
				PointLight* pl = new PointLight;
				pl->setColor(RGB(1, 1, 1));
				while ( plDef == true )
				{
					input >> key;
					if ( key.compare("pointlight.origin") == 0 )
					{
						double x, y, z;
						input >> x;
						input >> y;
						input >> z;

						pl->setOrigin(Point3D(x, y, z));
					}
					else if ( key.compare("pointlight.intensity") == 0 )
					{
						float i;
						input >> i;

						pl->setIntensity(i);
					}
					else if ( key.compare("pointlight.end") == 0 )
					{
						addLight(pl);
						plDef = false;
					}
				}
			}
			//====AMBIENT LIGHT====//
			else if ( key.compare("ambient.new") == 0 )
			{
				Ambient* amb = new Ambient();
				amb->setIntensity(0.7);
				amb->setColor(RGB(1));
				ambient_ = amb;
			}
		}

		input.close();
	}
	else
	{
		cerr << "ERROR: input file could not be found" << endl;
		exit(1);
	}

}

//shade pixel of nearest object
Shade World::hitNearestObject(const Ray& ray)
{
	Shade sh(*this);
	double tcurr;
	double tmin = 1.0E10;

	for (int j = 0; j < (int) objects.size(); j++ )
	{
		if (objects[j]->intersect(ray, tcurr, sh))
		{
			if (tcurr < tmin)
			{
				sh.hit = true;
				sh.color = objects[j]->getColor();
				tmin = tcurr;
			}
		}
	}
	return sh;
}

//shade pixel of closest object - with lights & materials
Shade World::hitSuper(const Ray& ray)
{
	Shade sh(*this);
	double tcurr;
	double tmin = 1.0E10;
	Normal nearestN ;
	Point3D nearestHP;

	for (int j = 0; j < (int) objects.size(); j++ )
	{
		if (objects[j]->intersect(ray, tcurr, sh))
		{
			if (tcurr < tmin)
			{
				sh.hit = true;
				sh.hitPoint = ray.o + tcurr * ray.d;
				sh.material = objects[j]->getMaterial();
				nearestN = sh.hitPointNormal;
				nearestHP = sh.hitPoint;
				tmin = tcurr;
			}
		}
	}

	if (sh.hit)
	{
		sh.hitPointNormal = nearestN;
		sh.hitPoint = nearestHP;
	}

	return sh;
}

//render and store in PPM image
void World::render(void)
{
	Ray ray;
	RGB color;

	//calculate h and v
	Vector3D h = calchv(cam.direction, cam.up, cam.fovX, cam.hres);
	Vector3D v = calchv(cam.direction, h, cam.fovY, cam.vres);

	//IT BREAKS HERE!!
	ray.o = cam.origin;

	cout << "Ray tracing";

	for (int j = 0; j < cam.vres; j++)
	{
		for (int i = 0; i < cam.hres; i++)
		{
			ray.d = h * (0.5 * cam.hres - i) + v * (0.5 * cam.vres - j) + cam.direction;
			color = tracer_->traceRay(ray);
			image.p.push_back(color);
		}
	}

	cout << "                                     done!" << endl;
	cout << "Writing image to file";

	image.writeToPPM("output.ppm", cam);

	cout << "                           done!" << endl;

}

//calculate h and v
Vector3D World::calchv( Vector3D d, Vector3D a, double fov, double res)
{
	Vector3D temp = d^a;
	
	//direction vector of result
	Vector3D result = temp / temp.length();

	//length of result
	double l = ( tan(0.5 * fov) / (0.5 * res) );

	result = result * l;

	return result;
}
