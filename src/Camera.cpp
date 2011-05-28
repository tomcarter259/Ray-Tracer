#include "Camera.hpp"

//default constructor
Camera::Camera(void):
	hres(0),
	vres(0),
	origin(0),
	direction(0),
	up(0),
	fovX(0),
	fovY(0)
{}

//destructor
Camera::~Camera(void)
{}
