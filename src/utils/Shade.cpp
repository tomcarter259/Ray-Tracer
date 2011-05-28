#include "Shade.hpp"

//constructor from world
Shade::Shade(World& wr):
	hit(false), 
	hitPoint(), 
	hitPointNormal(), 
	color(RGB(0)),
	w(wr),
	material(NULL),
	ray()
{}

//destructor
Shade::~Shade(void)
{}
