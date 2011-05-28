#include "PPM.hpp"

#include <iostream>

using namespace std;

//read an image

//write to an image
void PPM::writeToPPM(const char* filename, const Camera& cam)
{
	int i = 0;

	ofstream output;
	output.open(filename);

	output << "P3\n";
	output << "# This image was ray traced by Tom Carter's ray tracer\n";
	output << cam.hres << " " << cam.vres << "\n";
	output << "255\n";

	for ( int x = 0; x <= (int) p.size(); x++)
	{
		double R = p[x].r*255;
		double G = p[x].g*255;
		double B = p[x].b*255;
		

		//std::cout << R << " " << G << " " << B << " # ";

		output << (int) R << " " << (int) G << " " << (int) B << " ";

		if ( i == cam.hres)
		{
			output << "\n";
			i = -1;
		}

		i++;
	}

	output.close();
}
