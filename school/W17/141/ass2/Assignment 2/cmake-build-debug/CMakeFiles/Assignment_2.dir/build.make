# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.6

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
CMAKE_COMMAND = /cygdrive/c/Users/Moe/.CLion2016.3/system/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/Moe/.CLion2016.3/system/cygwin_cmake/bin/cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/cygdrive/c/Mordor/school/W17/141/ass2/Assignment 2"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/cygdrive/c/Mordor/school/W17/141/ass2/Assignment 2/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Assignment_2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Assignment_2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Assignment_2.dir/flags.make

CMakeFiles/Assignment_2.dir/main.cpp.o: CMakeFiles/Assignment_2.dir/flags.make
CMakeFiles/Assignment_2.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/cygdrive/c/Mordor/school/W17/141/ass2/Assignment 2/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Assignment_2.dir/main.cpp.o"
	/usr/bin/c++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Assignment_2.dir/main.cpp.o -c "/cygdrive/c/Mordor/school/W17/141/ass2/Assignment 2/main.cpp"

CMakeFiles/Assignment_2.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Assignment_2.dir/main.cpp.i"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/cygdrive/c/Mordor/school/W17/141/ass2/Assignment 2/main.cpp" > CMakeFiles/Assignment_2.dir/main.cpp.i

CMakeFiles/Assignment_2.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Assignment_2.dir/main.cpp.s"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/cygdrive/c/Mordor/school/W17/141/ass2/Assignment 2/main.cpp" -o CMakeFiles/Assignment_2.dir/main.cpp.s

CMakeFiles/Assignment_2.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/Assignment_2.dir/main.cpp.o.requires

CMakeFiles/Assignment_2.dir/main.cpp.o.provides: CMakeFiles/Assignment_2.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/Assignment_2.dir/build.make CMakeFiles/Assignment_2.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/Assignment_2.dir/main.cpp.o.provides

CMakeFiles/Assignment_2.dir/main.cpp.o.provides.build: CMakeFiles/Assignment_2.dir/main.cpp.o


# Object files for target Assignment_2
Assignment_2_OBJECTS = \
"CMakeFiles/Assignment_2.dir/main.cpp.o"

# External object files for target Assignment_2
Assignment_2_EXTERNAL_OBJECTS =

Assignment_2.exe: CMakeFiles/Assignment_2.dir/main.cpp.o
Assignment_2.exe: CMakeFiles/Assignment_2.dir/build.make
Assignment_2.exe: CMakeFiles/Assignment_2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/cygdrive/c/Mordor/school/W17/141/ass2/Assignment 2/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Assignment_2.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Assignment_2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Assignment_2.dir/build: Assignment_2.exe

.PHONY : CMakeFiles/Assignment_2.dir/build

CMakeFiles/Assignment_2.dir/requires: CMakeFiles/Assignment_2.dir/main.cpp.o.requires

.PHONY : CMakeFiles/Assignment_2.dir/requires

CMakeFiles/Assignment_2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Assignment_2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Assignment_2.dir/clean

CMakeFiles/Assignment_2.dir/depend:
	cd "/cygdrive/c/Mordor/school/W17/141/ass2/Assignment 2/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/cygdrive/c/Mordor/school/W17/141/ass2/Assignment 2" "/cygdrive/c/Mordor/school/W17/141/ass2/Assignment 2" "/cygdrive/c/Mordor/school/W17/141/ass2/Assignment 2/cmake-build-debug" "/cygdrive/c/Mordor/school/W17/141/ass2/Assignment 2/cmake-build-debug" "/cygdrive/c/Mordor/school/W17/141/ass2/Assignment 2/cmake-build-debug/CMakeFiles/Assignment_2.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Assignment_2.dir/depend

