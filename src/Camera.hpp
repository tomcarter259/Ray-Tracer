#ifndef _CAMERA_HPP_
#define _CAMERA_HPP_

#include "utils/Point3D.hpp"
#include "utils/Vector3D.hpp"

class Camera
{

	public:
		//values
		int hres, vres;
		Point3D origin;
		Vector3D direction;
		Vector3D up;

		//field of view
		int fovX, fovY;		

		//default constructor
		Camera(void);

		//destructor
		~Camera(void);

	protected:

	private:

};

#endif
