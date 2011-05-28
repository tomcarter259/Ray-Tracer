#ifndef _PPM_HPP_
#define _PPM_HPP_

//#include <iostream>
#include <fstream>
#include <vector>

#include "utils/RGB.hpp"
#include "Camera.hpp"

class PPM
{

	public:
		//data structure to store PPM image before writing
		std::vector<RGB> p; 

		//default constructor
	//	PPM(void);

		//destructor
	//	~PPM(void);

		//read an image

		//write image header
	//	void writeHeader(const char* filename, const Camera& cam);

		//write to an image
		void writeToPPM(const char* filename, const Camera& cam);

	protected:

	private:

};

#endif
