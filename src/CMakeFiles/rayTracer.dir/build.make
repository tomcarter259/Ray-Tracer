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
include src/CMakeFiles/rayTracer.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/rayTracer.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/rayTracer.dir/flags.make

src/CMakeFiles/rayTracer.dir/Main.cpp.o: src/CMakeFiles/rayTracer.dir/flags.make
src/CMakeFiles/rayTracer.dir/Main.cpp.o: src/Main.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/tom/Documents/rayTracer/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/CMakeFiles/rayTracer.dir/Main.cpp.o"
	cd /home/tom/Documents/rayTracer/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/rayTracer.dir/Main.cpp.o -c /home/tom/Documents/rayTracer/src/Main.cpp

src/CMakeFiles/rayTracer.dir/Main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/rayTracer.dir/Main.cpp.i"
	cd /home/tom/Documents/rayTracer/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/tom/Documents/rayTracer/src/Main.cpp > CMakeFiles/rayTracer.dir/Main.cpp.i

src/CMakeFiles/rayTracer.dir/Main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/rayTracer.dir/Main.cpp.s"
	cd /home/tom/Documents/rayTracer/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/tom/Documents/rayTracer/src/Main.cpp -o CMakeFiles/rayTracer.dir/Main.cpp.s

src/CMakeFiles/rayTracer.dir/Main.cpp.o.requires:
.PHONY : src/CMakeFiles/rayTracer.dir/Main.cpp.o.requires

src/CMakeFiles/rayTracer.dir/Main.cpp.o.provides: src/CMakeFiles/rayTracer.dir/Main.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/rayTracer.dir/build.make src/CMakeFiles/rayTracer.dir/Main.cpp.o.provides.build
.PHONY : src/CMakeFiles/rayTracer.dir/Main.cpp.o.provides

src/CMakeFiles/rayTracer.dir/Main.cpp.o.provides.build: src/CMakeFiles/rayTracer.dir/Main.cpp.o
.PHONY : src/CMakeFiles/rayTracer.dir/Main.cpp.o.provides.build

# Object files for target rayTracer
rayTracer_OBJECTS = \
"CMakeFiles/rayTracer.dir/Main.cpp.o"

# External object files for target rayTracer
rayTracer_EXTERNAL_OBJECTS =

bin/rayTracer: src/CMakeFiles/rayTracer.dir/Main.cpp.o
bin/rayTracer: lib/libcommon.a
bin/rayTracer: lib/libgeometry.a
bin/rayTracer: lib/libutils.a
bin/rayTracer: lib/libtracers.a
bin/rayTracer: lib/liblights.a
bin/rayTracer: lib/libmaterials.a
bin/rayTracer: lib/libcommon.a
bin/rayTracer: src/CMakeFiles/rayTracer.dir/build.make
bin/rayTracer: src/CMakeFiles/rayTracer.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable ../bin/rayTracer"
	cd /home/tom/Documents/rayTracer/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/rayTracer.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/rayTracer.dir/build: bin/rayTracer
.PHONY : src/CMakeFiles/rayTracer.dir/build

src/CMakeFiles/rayTracer.dir/requires: src/CMakeFiles/rayTracer.dir/Main.cpp.o.requires
.PHONY : src/CMakeFiles/rayTracer.dir/requires

src/CMakeFiles/rayTracer.dir/clean:
	cd /home/tom/Documents/rayTracer/src && $(CMAKE_COMMAND) -P CMakeFiles/rayTracer.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/rayTracer.dir/clean

src/CMakeFiles/rayTracer.dir/depend:
	cd /home/tom/Documents/rayTracer && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tom/Documents/rayTracer /home/tom/Documents/rayTracer/src /home/tom/Documents/rayTracer /home/tom/Documents/rayTracer/src /home/tom/Documents/rayTracer/src/CMakeFiles/rayTracer.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/rayTracer.dir/depend

