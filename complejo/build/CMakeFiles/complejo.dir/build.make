# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
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

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/usuario/practicas/practica11/ib-practica11-oop-cmake-RaimonMejias/complejo

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/usuario/practicas/practica11/ib-practica11-oop-cmake-RaimonMejias/complejo/build

# Include any dependencies generated for this target.
include CMakeFiles/complejo.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/complejo.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/complejo.dir/flags.make

CMakeFiles/complejo.dir/src/complejo_functions.cc.o: CMakeFiles/complejo.dir/flags.make
CMakeFiles/complejo.dir/src/complejo_functions.cc.o: ../src/complejo_functions.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/usuario/practicas/practica11/ib-practica11-oop-cmake-RaimonMejias/complejo/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/complejo.dir/src/complejo_functions.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/complejo.dir/src/complejo_functions.cc.o -c /home/usuario/practicas/practica11/ib-practica11-oop-cmake-RaimonMejias/complejo/src/complejo_functions.cc

CMakeFiles/complejo.dir/src/complejo_functions.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/complejo.dir/src/complejo_functions.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/usuario/practicas/practica11/ib-practica11-oop-cmake-RaimonMejias/complejo/src/complejo_functions.cc > CMakeFiles/complejo.dir/src/complejo_functions.cc.i

CMakeFiles/complejo.dir/src/complejo_functions.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/complejo.dir/src/complejo_functions.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/usuario/practicas/practica11/ib-practica11-oop-cmake-RaimonMejias/complejo/src/complejo_functions.cc -o CMakeFiles/complejo.dir/src/complejo_functions.cc.s

CMakeFiles/complejo.dir/src/complejo_functions.cc.o.requires:

.PHONY : CMakeFiles/complejo.dir/src/complejo_functions.cc.o.requires

CMakeFiles/complejo.dir/src/complejo_functions.cc.o.provides: CMakeFiles/complejo.dir/src/complejo_functions.cc.o.requires
	$(MAKE) -f CMakeFiles/complejo.dir/build.make CMakeFiles/complejo.dir/src/complejo_functions.cc.o.provides.build
.PHONY : CMakeFiles/complejo.dir/src/complejo_functions.cc.o.provides

CMakeFiles/complejo.dir/src/complejo_functions.cc.o.provides.build: CMakeFiles/complejo.dir/src/complejo_functions.cc.o


CMakeFiles/complejo.dir/src/complejo_main.cc.o: CMakeFiles/complejo.dir/flags.make
CMakeFiles/complejo.dir/src/complejo_main.cc.o: ../src/complejo_main.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/usuario/practicas/practica11/ib-practica11-oop-cmake-RaimonMejias/complejo/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/complejo.dir/src/complejo_main.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/complejo.dir/src/complejo_main.cc.o -c /home/usuario/practicas/practica11/ib-practica11-oop-cmake-RaimonMejias/complejo/src/complejo_main.cc

CMakeFiles/complejo.dir/src/complejo_main.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/complejo.dir/src/complejo_main.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/usuario/practicas/practica11/ib-practica11-oop-cmake-RaimonMejias/complejo/src/complejo_main.cc > CMakeFiles/complejo.dir/src/complejo_main.cc.i

CMakeFiles/complejo.dir/src/complejo_main.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/complejo.dir/src/complejo_main.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/usuario/practicas/practica11/ib-practica11-oop-cmake-RaimonMejias/complejo/src/complejo_main.cc -o CMakeFiles/complejo.dir/src/complejo_main.cc.s

CMakeFiles/complejo.dir/src/complejo_main.cc.o.requires:

.PHONY : CMakeFiles/complejo.dir/src/complejo_main.cc.o.requires

CMakeFiles/complejo.dir/src/complejo_main.cc.o.provides: CMakeFiles/complejo.dir/src/complejo_main.cc.o.requires
	$(MAKE) -f CMakeFiles/complejo.dir/build.make CMakeFiles/complejo.dir/src/complejo_main.cc.o.provides.build
.PHONY : CMakeFiles/complejo.dir/src/complejo_main.cc.o.provides

CMakeFiles/complejo.dir/src/complejo_main.cc.o.provides.build: CMakeFiles/complejo.dir/src/complejo_main.cc.o


# Object files for target complejo
complejo_OBJECTS = \
"CMakeFiles/complejo.dir/src/complejo_functions.cc.o" \
"CMakeFiles/complejo.dir/src/complejo_main.cc.o"

# External object files for target complejo
complejo_EXTERNAL_OBJECTS =

complejo: CMakeFiles/complejo.dir/src/complejo_functions.cc.o
complejo: CMakeFiles/complejo.dir/src/complejo_main.cc.o
complejo: CMakeFiles/complejo.dir/build.make
complejo: CMakeFiles/complejo.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/usuario/practicas/practica11/ib-practica11-oop-cmake-RaimonMejias/complejo/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable complejo"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/complejo.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/complejo.dir/build: complejo

.PHONY : CMakeFiles/complejo.dir/build

CMakeFiles/complejo.dir/requires: CMakeFiles/complejo.dir/src/complejo_functions.cc.o.requires
CMakeFiles/complejo.dir/requires: CMakeFiles/complejo.dir/src/complejo_main.cc.o.requires

.PHONY : CMakeFiles/complejo.dir/requires

CMakeFiles/complejo.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/complejo.dir/cmake_clean.cmake
.PHONY : CMakeFiles/complejo.dir/clean

CMakeFiles/complejo.dir/depend:
	cd /home/usuario/practicas/practica11/ib-practica11-oop-cmake-RaimonMejias/complejo/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/usuario/practicas/practica11/ib-practica11-oop-cmake-RaimonMejias/complejo /home/usuario/practicas/practica11/ib-practica11-oop-cmake-RaimonMejias/complejo /home/usuario/practicas/practica11/ib-practica11-oop-cmake-RaimonMejias/complejo/build /home/usuario/practicas/practica11/ib-practica11-oop-cmake-RaimonMejias/complejo/build /home/usuario/practicas/practica11/ib-practica11-oop-cmake-RaimonMejias/complejo/build/CMakeFiles/complejo.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/complejo.dir/depend
