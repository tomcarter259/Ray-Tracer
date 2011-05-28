#include "Material.hpp"

//default constructor
Material::Material(void)
{}

//destructor
Material::~Material(void)
{}

RGB Material::doShade(Shade& sh)
{
	return RGB(0);
}
