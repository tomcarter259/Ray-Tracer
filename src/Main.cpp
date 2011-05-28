#include "Main.hpp"

using namespace std;

int main(int argc, char **argv)
{

	if (argc != 2)
	{
		cerr << "ERROR: incorrect number of arguements" << endl;
		cerr << "Usage: raytracer <filename>" << endl;
		return 1;
	}

	cout << "Ray Tracer started" << endl;

	string i = string(argv[1]);
	const char* filename = i.c_str();

	World w;
	cout << "Building world from " << filename;
	w.build(filename);
	cout << "     done!" << endl;
	w.render();
	cout << "Ray tracing complete" << endl;

	return 0;
}
