# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.6

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canoncical targets will work.
.SUFFIXES:

# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list

# Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/tom/Documents/rayTracer

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/tom/Documents/rayTracer

# Include any dependencies generated for this target.
include src/lights/CMakeFiles/lights.dir/depend.make

# Include the progress variables for this target.
include src/lights/CMakeFiles/lights.dir/progress.make

# Include the compile flags for this target's objects.
include src/lights/CMakeFiles/lights.dir/flags.make

src/lights/CMakeFiles/lights.dir/PointLight.o: src/lights/CMakeFiles/lights.dir/flags.make
src/lights/CMakeFiles/lights.dir/PointLight.o: src/lights/PointLight.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/tom/Documents/rayTracer/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/lights/CMakeFiles/lights.dir/PointLight.o"
	cd /home/tom/Documents/rayTracer/src/lights && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/lights.dir/PointLight.o -c /home/tom/Documents/rayTracer/src/lights/PointLight.cpp

src/lights/CMakeFiles/lights.dir/PointLight.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lights.dir/PointLight.i"
	cd /home/tom/Documents/rayTracer/src/lights && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/tom/Documents/rayTracer/src/lights/PointLight.cpp > CMakeFiles/lights.dir/PointLight.i

src/lights/CMakeFiles/lights.dir/PointLight.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lights.dir/PointLight.s"
	cd /home/tom/Documents/rayTracer/src/lights && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/tom/Documents/rayTracer/src/lights/PointLight.cpp -o CMakeFiles/lights.dir/PointLight.s

src/lights/CMakeFiles/lights.dir/PointLight.o.requires:
.PHONY : src/lights/CMakeFiles/lights.dir/PointLight.o.requires

src/lights/CMakeFiles/lights.dir/PointLight.o.provides: src/lights/CMakeFiles/lights.dir/PointLight.o.requires
	$(MAKE) -f src/lights/CMakeFiles/lights.dir/build.make src/lights/CMakeFiles/lights.dir/PointLight.o.provides.build
.PHONY : src/lights/CMakeFiles/lights.dir/PointLight.o.provides

src/lights/CMakeFiles/lights.dir/PointLight.o.provides.build: src/lights/CMakeFiles/lights.dir/PointLight.o
.PHONY : src/lights/CMakeFiles/lights.dir/PointLight.o.provides.build

src/lights/CMakeFiles/lights.dir/Ambient.o: src/lights/CMakeFiles/lights.dir/flags.make
src/lights/CMakeFiles/lights.dir/Ambient.o: src/lights/Ambient.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/tom/Documents/rayTracer/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/lights/CMakeFiles/lights.dir/Ambient.o"
	cd /home/tom/Documents/rayTracer/src/lights && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/lights.dir/Ambient.o -c /home/tom/Documents/rayTracer/src/lights/Ambient.cpp

src/lights/CMakeFiles/lights.dir/Ambient.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lights.dir/Ambient.i"
	cd /home/tom/Documents/rayTracer/src/lights && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/tom/Documents/rayTracer/src/lights/Ambient.cpp > CMakeFiles/lights.dir/Ambient.i

src/lights/CMakeFiles/lights.dir/Ambient.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lights.dir/Ambient.s"
	cd /home/tom/Documents/rayTracer/src/lights && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/tom/Documents/rayTracer/src/lights/Ambient.cpp -o CMakeFiles/lights.dir/Ambient.s

src/lights/CMakeFiles/lights.dir/Ambient.o.requires:
.PHONY : src/lights/CMakeFiles/lights.dir/Ambient.o.requires

src/lights/CMakeFiles/lights.dir/Ambient.o.provides: src/lights/CMakeFiles/lights.dir/Ambient.o.requires
	$(MAKE) -f src/lights/CMakeFiles/lights.dir/build.make src/lights/CMakeFiles/lights.dir/Ambient.o.provides.build
.PHONY : src/lights/CMakeFiles/lights.dir/Ambient.o.provides

src/lights/CMakeFiles/lights.dir/Ambient.o.provides.build: src/lights/CMakeFiles/lights.dir/Ambient.o
.PHONY : src/lights/CMakeFiles/lights.dir/Ambient.o.provides.build

src/lights/CMakeFiles/lights.dir/Light.o: src/lights/CMakeFiles/lights.dir/flags.make
src/lights/CMakeFiles/lights.dir/Light.o: src/lights/Light.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/tom/Documents/rayTracer/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/lights/CMakeFiles/lights.dir/Light.o"
	cd /home/tom/Documents/rayTracer/src/lights && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/lights.dir/Light.o -c /home/tom/Documents/rayTracer/src/lights/Light.cpp

src/lights/CMakeFiles/lights.dir/Light.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lights.dir/Light.i"
	cd /home/tom/Documents/rayTracer/src/lights && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/tom/Documents/rayTracer/src/lights/Light.cpp > CMakeFiles/lights.dir/Light.i

src/lights/CMakeFiles/lights.dir/Light.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lights.dir/Light.s"
	cd /home/tom/Documents/rayTracer/src/lights && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/tom/Documents/rayTracer/src/lights/Light.cpp -o CMakeFiles/lights.dir/Light.s

src/lights/CMakeFiles/lights.dir/Light.o.requires:
.PHONY : src/lights/CMakeFiles/lights.dir/Light.o.requires

src/lights/CMakeFiles/lights.dir/Light.o.provides: src/lights/CMakeFiles/lights.dir/Light.o.requires
	$(MAKE) -f src/lights/CMakeFiles/lights.dir/build.make src/lights/CMakeFiles/lights.dir/Light.o.provides.build
.PHONY : src/lights/CMakeFiles/lights.dir/Light.o.provides

src/lights/CMakeFiles/lights.dir/Light.o.provides.build: src/lights/CMakeFiles/lights.dir/Light.o
.PHONY : src/lights/CMakeFiles/lights.dir/Light.o.provides.build

# Object files for target lights
lights_OBJECTS = \
"CMakeFiles/lights.dir/PointLight.o" \
"CMakeFiles/lights.dir/Ambient.o" \
"CMakeFiles/lights.dir/Light.o"

# External object files for target lights
lights_EXTERNAL_OBJECTS =

lib/liblights.a: src/lights/CMakeFiles/lights.dir/PointLight.o
lib/liblights.a: src/lights/CMakeFiles/lights.dir/Ambient.o
lib/liblights.a: src/lights/CMakeFiles/lights.dir/Light.o
lib/liblights.a: src/lights/CMakeFiles/lights.dir/build.make
lib/liblights.a: src/lights/CMakeFiles/lights.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX static library ../../lib/liblights.a"
	cd /home/tom/Documents/rayTracer/src/lights && $(CMAKE_COMMAND) -P CMakeFiles/lights.dir/cmake_clean_target.cmake
	cd /home/tom/Documents/rayTracer/src/lights && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/lights.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/lights/CMakeFiles/lights.dir/build: lib/liblights.a
.PHONY : src/lights/CMakeFiles/lights.dir/build

src/lights/CMakeFiles/lights.dir/requires: src/lights/CMakeFiles/lights.dir/PointLight.o.requires
src/lights/CMakeFiles/lights.dir/requires: src/lights/CMakeFiles/lights.dir/Ambient.o.requires
src/lights/CMakeFiles/lights.dir/requires: src/lights/CMakeFiles/lights.dir/Light.o.requires
.PHONY : src/lights/CMakeFiles/lights.dir/requires

src/lights/CMakeFiles/lights.dir/clean:
	cd /home/tom/Documents/rayTracer/src/lights && $(CMAKE_COMMAND) -P CMakeFiles/lights.dir/cmake_clean.cmake
.PHONY : src/lights/CMakeFiles/lights.dir/clean

src/lights/CMakeFiles/lights.dir/depend:
	cd /home/tom/Documents/rayTracer && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tom/Documents/rayTracer /home/tom/Documents/rayTracer/src/lights /home/tom/Documents/rayTracer /home/tom/Documents/rayTracer/src/lights /home/tom/Documents/rayTracer/src/lights/CMakeFiles/lights.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/lights/CMakeFiles/lights.dir/depend

