# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/wilber/ClionProjects/Programming-Contest

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/wilber/ClionProjects/Programming-Contest/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/testrunner.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/testrunner.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/testrunner.dir/flags.make

CMakeFiles/testrunner.dir/testrunner/main.cpp.o: CMakeFiles/testrunner.dir/flags.make
CMakeFiles/testrunner.dir/testrunner/main.cpp.o: ../testrunner/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/wilber/ClionProjects/Programming-Contest/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/testrunner.dir/testrunner/main.cpp.o"
	/usr/local/Cellar/gcc/9.2.0/bin/g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/testrunner.dir/testrunner/main.cpp.o -c /Users/wilber/ClionProjects/Programming-Contest/testrunner/main.cpp

CMakeFiles/testrunner.dir/testrunner/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/testrunner.dir/testrunner/main.cpp.i"
	/usr/local/Cellar/gcc/9.2.0/bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/wilber/ClionProjects/Programming-Contest/testrunner/main.cpp > CMakeFiles/testrunner.dir/testrunner/main.cpp.i

CMakeFiles/testrunner.dir/testrunner/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/testrunner.dir/testrunner/main.cpp.s"
	/usr/local/Cellar/gcc/9.2.0/bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/wilber/ClionProjects/Programming-Contest/testrunner/main.cpp -o CMakeFiles/testrunner.dir/testrunner/main.cpp.s

# Object files for target testrunner
testrunner_OBJECTS = \
"CMakeFiles/testrunner.dir/testrunner/main.cpp.o"

# External object files for target testrunner
testrunner_EXTERNAL_OBJECTS =

testrunner: CMakeFiles/testrunner.dir/testrunner/main.cpp.o
testrunner: CMakeFiles/testrunner.dir/build.make
testrunner: CMakeFiles/testrunner.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/wilber/ClionProjects/Programming-Contest/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable testrunner"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/testrunner.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/testrunner.dir/build: testrunner

.PHONY : CMakeFiles/testrunner.dir/build

CMakeFiles/testrunner.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/testrunner.dir/cmake_clean.cmake
.PHONY : CMakeFiles/testrunner.dir/clean

CMakeFiles/testrunner.dir/depend:
	cd /Users/wilber/ClionProjects/Programming-Contest/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/wilber/ClionProjects/Programming-Contest /Users/wilber/ClionProjects/Programming-Contest /Users/wilber/ClionProjects/Programming-Contest/cmake-build-debug /Users/wilber/ClionProjects/Programming-Contest/cmake-build-debug /Users/wilber/ClionProjects/Programming-Contest/cmake-build-debug/CMakeFiles/testrunner.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/testrunner.dir/depend

