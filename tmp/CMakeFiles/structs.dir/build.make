# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.31

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
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
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/yareg/Documents/Projects/arithmeticLibrary

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/yareg/Documents/Projects/arithmeticLibrary/tmp

# Include any dependencies generated for this target.
include CMakeFiles/structs.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/structs.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/structs.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/structs.dir/flags.make

CMakeFiles/structs.dir/codegen:
.PHONY : CMakeFiles/structs.dir/codegen

CMakeFiles/structs.dir/src/dataStructures/Structs.cpp.o: CMakeFiles/structs.dir/flags.make
CMakeFiles/structs.dir/src/dataStructures/Structs.cpp.o: /home/yareg/Documents/Projects/arithmeticLibrary/src/dataStructures/Structs.cpp
CMakeFiles/structs.dir/src/dataStructures/Structs.cpp.o: CMakeFiles/structs.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/yareg/Documents/Projects/arithmeticLibrary/tmp/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/structs.dir/src/dataStructures/Structs.cpp.o"
	/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/structs.dir/src/dataStructures/Structs.cpp.o -MF CMakeFiles/structs.dir/src/dataStructures/Structs.cpp.o.d -o CMakeFiles/structs.dir/src/dataStructures/Structs.cpp.o -c /home/yareg/Documents/Projects/arithmeticLibrary/src/dataStructures/Structs.cpp

CMakeFiles/structs.dir/src/dataStructures/Structs.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/structs.dir/src/dataStructures/Structs.cpp.i"
	/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yareg/Documents/Projects/arithmeticLibrary/src/dataStructures/Structs.cpp > CMakeFiles/structs.dir/src/dataStructures/Structs.cpp.i

CMakeFiles/structs.dir/src/dataStructures/Structs.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/structs.dir/src/dataStructures/Structs.cpp.s"
	/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yareg/Documents/Projects/arithmeticLibrary/src/dataStructures/Structs.cpp -o CMakeFiles/structs.dir/src/dataStructures/Structs.cpp.s

# Object files for target structs
structs_OBJECTS = \
"CMakeFiles/structs.dir/src/dataStructures/Structs.cpp.o"

# External object files for target structs
structs_EXTERNAL_OBJECTS =

libstructs.a: CMakeFiles/structs.dir/src/dataStructures/Structs.cpp.o
libstructs.a: CMakeFiles/structs.dir/build.make
libstructs.a: CMakeFiles/structs.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/yareg/Documents/Projects/arithmeticLibrary/tmp/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libstructs.a"
	$(CMAKE_COMMAND) -P CMakeFiles/structs.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/structs.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/structs.dir/build: libstructs.a
.PHONY : CMakeFiles/structs.dir/build

CMakeFiles/structs.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/structs.dir/cmake_clean.cmake
.PHONY : CMakeFiles/structs.dir/clean

CMakeFiles/structs.dir/depend:
	cd /home/yareg/Documents/Projects/arithmeticLibrary/tmp && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/yareg/Documents/Projects/arithmeticLibrary /home/yareg/Documents/Projects/arithmeticLibrary /home/yareg/Documents/Projects/arithmeticLibrary/tmp /home/yareg/Documents/Projects/arithmeticLibrary/tmp /home/yareg/Documents/Projects/arithmeticLibrary/tmp/CMakeFiles/structs.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/structs.dir/depend
