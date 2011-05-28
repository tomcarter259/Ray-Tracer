#ifndef _RAY_HPP_
#define _RAY_HPP_

#include "Vector3D.hpp"
#include "Point3D.hpp"

class Ray
{
	//---             A Ray                ---//
	// origin o, direction d, ray parameter t //
	// Point on a ray: p = o + td             //

	public:
		//origin
		Point3D o;

		//direction
		Vector3D d;

		//default constructor
		Ray(void);

		//constructor from point and vector
		Ray(const Point3D& o, const Vector3D& d);

		//destructor
		~Ray(void);

		//assignment of a ray: r = s
		Ray& operator= (const Ray& s);

	protected:
	
	private:

};

#endif
