# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/phil/CLionProjects/GeneticAlgorithm

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/phil/CLionProjects/GeneticAlgorithm/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/GeneticAlgorithm.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/GeneticAlgorithm.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/GeneticAlgorithm.dir/flags.make

CMakeFiles/GeneticAlgorithm.dir/main.cpp.o: CMakeFiles/GeneticAlgorithm.dir/flags.make
CMakeFiles/GeneticAlgorithm.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/phil/CLionProjects/GeneticAlgorithm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/GeneticAlgorithm.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GeneticAlgorithm.dir/main.cpp.o -c /Users/phil/CLionProjects/GeneticAlgorithm/main.cpp

CMakeFiles/GeneticAlgorithm.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GeneticAlgorithm.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/phil/CLionProjects/GeneticAlgorithm/main.cpp > CMakeFiles/GeneticAlgorithm.dir/main.cpp.i

CMakeFiles/GeneticAlgorithm.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GeneticAlgorithm.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/phil/CLionProjects/GeneticAlgorithm/main.cpp -o CMakeFiles/GeneticAlgorithm.dir/main.cpp.s

CMakeFiles/GeneticAlgorithm.dir/city.cpp.o: CMakeFiles/GeneticAlgorithm.dir/flags.make
CMakeFiles/GeneticAlgorithm.dir/city.cpp.o: ../city.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/phil/CLionProjects/GeneticAlgorithm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/GeneticAlgorithm.dir/city.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GeneticAlgorithm.dir/city.cpp.o -c /Users/phil/CLionProjects/GeneticAlgorithm/city.cpp

CMakeFiles/GeneticAlgorithm.dir/city.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GeneticAlgorithm.dir/city.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/phil/CLionProjects/GeneticAlgorithm/city.cpp > CMakeFiles/GeneticAlgorithm.dir/city.cpp.i

CMakeFiles/GeneticAlgorithm.dir/city.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GeneticAlgorithm.dir/city.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/phil/CLionProjects/GeneticAlgorithm/city.cpp -o CMakeFiles/GeneticAlgorithm.dir/city.cpp.s

CMakeFiles/GeneticAlgorithm.dir/tour.cpp.o: CMakeFiles/GeneticAlgorithm.dir/flags.make
CMakeFiles/GeneticAlgorithm.dir/tour.cpp.o: ../tour.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/phil/CLionProjects/GeneticAlgorithm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/GeneticAlgorithm.dir/tour.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GeneticAlgorithm.dir/tour.cpp.o -c /Users/phil/CLionProjects/GeneticAlgorithm/tour.cpp

CMakeFiles/GeneticAlgorithm.dir/tour.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GeneticAlgorithm.dir/tour.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/phil/CLionProjects/GeneticAlgorithm/tour.cpp > CMakeFiles/GeneticAlgorithm.dir/tour.cpp.i

CMakeFiles/GeneticAlgorithm.dir/tour.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GeneticAlgorithm.dir/tour.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/phil/CLionProjects/GeneticAlgorithm/tour.cpp -o CMakeFiles/GeneticAlgorithm.dir/tour.cpp.s

CMakeFiles/GeneticAlgorithm.dir/catch_amalgamated.cpp.o: CMakeFiles/GeneticAlgorithm.dir/flags.make
CMakeFiles/GeneticAlgorithm.dir/catch_amalgamated.cpp.o: ../catch_amalgamated.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/phil/CLionProjects/GeneticAlgorithm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/GeneticAlgorithm.dir/catch_amalgamated.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GeneticAlgorithm.dir/catch_amalgamated.cpp.o -c /Users/phil/CLionProjects/GeneticAlgorithm/catch_amalgamated.cpp

CMakeFiles/GeneticAlgorithm.dir/catch_amalgamated.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GeneticAlgorithm.dir/catch_amalgamated.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/phil/CLionProjects/GeneticAlgorithm/catch_amalgamated.cpp > CMakeFiles/GeneticAlgorithm.dir/catch_amalgamated.cpp.i

CMakeFiles/GeneticAlgorithm.dir/catch_amalgamated.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GeneticAlgorithm.dir/catch_amalgamated.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/phil/CLionProjects/GeneticAlgorithm/catch_amalgamated.cpp -o CMakeFiles/GeneticAlgorithm.dir/catch_amalgamated.cpp.s

CMakeFiles/GeneticAlgorithm.dir/unit_test.cpp.o: CMakeFiles/GeneticAlgorithm.dir/flags.make
CMakeFiles/GeneticAlgorithm.dir/unit_test.cpp.o: ../unit_test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/phil/CLionProjects/GeneticAlgorithm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/GeneticAlgorithm.dir/unit_test.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GeneticAlgorithm.dir/unit_test.cpp.o -c /Users/phil/CLionProjects/GeneticAlgorithm/unit_test.cpp

CMakeFiles/GeneticAlgorithm.dir/unit_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GeneticAlgorithm.dir/unit_test.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/phil/CLionProjects/GeneticAlgorithm/unit_test.cpp > CMakeFiles/GeneticAlgorithm.dir/unit_test.cpp.i

CMakeFiles/GeneticAlgorithm.dir/unit_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GeneticAlgorithm.dir/unit_test.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/phil/CLionProjects/GeneticAlgorithm/unit_test.cpp -o CMakeFiles/GeneticAlgorithm.dir/unit_test.cpp.s

CMakeFiles/GeneticAlgorithm.dir/population.cpp.o: CMakeFiles/GeneticAlgorithm.dir/flags.make
CMakeFiles/GeneticAlgorithm.dir/population.cpp.o: ../population.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/phil/CLionProjects/GeneticAlgorithm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/GeneticAlgorithm.dir/population.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GeneticAlgorithm.dir/population.cpp.o -c /Users/phil/CLionProjects/GeneticAlgorithm/population.cpp

CMakeFiles/GeneticAlgorithm.dir/population.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GeneticAlgorithm.dir/population.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/phil/CLionProjects/GeneticAlgorithm/population.cpp > CMakeFiles/GeneticAlgorithm.dir/population.cpp.i

CMakeFiles/GeneticAlgorithm.dir/population.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GeneticAlgorithm.dir/population.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/phil/CLionProjects/GeneticAlgorithm/population.cpp -o CMakeFiles/GeneticAlgorithm.dir/population.cpp.s

CMakeFiles/GeneticAlgorithm.dir/master_list.cpp.o: CMakeFiles/GeneticAlgorithm.dir/flags.make
CMakeFiles/GeneticAlgorithm.dir/master_list.cpp.o: ../master_list.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/phil/CLionProjects/GeneticAlgorithm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/GeneticAlgorithm.dir/master_list.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GeneticAlgorithm.dir/master_list.cpp.o -c /Users/phil/CLionProjects/GeneticAlgorithm/master_list.cpp

CMakeFiles/GeneticAlgorithm.dir/master_list.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GeneticAlgorithm.dir/master_list.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/phil/CLionProjects/GeneticAlgorithm/master_list.cpp > CMakeFiles/GeneticAlgorithm.dir/master_list.cpp.i

CMakeFiles/GeneticAlgorithm.dir/master_list.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GeneticAlgorithm.dir/master_list.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/phil/CLionProjects/GeneticAlgorithm/master_list.cpp -o CMakeFiles/GeneticAlgorithm.dir/master_list.cpp.s

# Object files for target GeneticAlgorithm
GeneticAlgorithm_OBJECTS = \
"CMakeFiles/GeneticAlgorithm.dir/main.cpp.o" \
"CMakeFiles/GeneticAlgorithm.dir/city.cpp.o" \
"CMakeFiles/GeneticAlgorithm.dir/tour.cpp.o" \
"CMakeFiles/GeneticAlgorithm.dir/catch_amalgamated.cpp.o" \
"CMakeFiles/GeneticAlgorithm.dir/unit_test.cpp.o" \
"CMakeFiles/GeneticAlgorithm.dir/population.cpp.o" \
"CMakeFiles/GeneticAlgorithm.dir/master_list.cpp.o"

# External object files for target GeneticAlgorithm
GeneticAlgorithm_EXTERNAL_OBJECTS =

GeneticAlgorithm: CMakeFiles/GeneticAlgorithm.dir/main.cpp.o
GeneticAlgorithm: CMakeFiles/GeneticAlgorithm.dir/city.cpp.o
GeneticAlgorithm: CMakeFiles/GeneticAlgorithm.dir/tour.cpp.o
GeneticAlgorithm: CMakeFiles/GeneticAlgorithm.dir/catch_amalgamated.cpp.o
GeneticAlgorithm: CMakeFiles/GeneticAlgorithm.dir/unit_test.cpp.o
GeneticAlgorithm: CMakeFiles/GeneticAlgorithm.dir/population.cpp.o
GeneticAlgorithm: CMakeFiles/GeneticAlgorithm.dir/master_list.cpp.o
GeneticAlgorithm: CMakeFiles/GeneticAlgorithm.dir/build.make
GeneticAlgorithm: CMakeFiles/GeneticAlgorithm.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/phil/CLionProjects/GeneticAlgorithm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX executable GeneticAlgorithm"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/GeneticAlgorithm.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/GeneticAlgorithm.dir/build: GeneticAlgorithm

.PHONY : CMakeFiles/GeneticAlgorithm.dir/build

CMakeFiles/GeneticAlgorithm.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/GeneticAlgorithm.dir/cmake_clean.cmake
.PHONY : CMakeFiles/GeneticAlgorithm.dir/clean

CMakeFiles/GeneticAlgorithm.dir/depend:
	cd /Users/phil/CLionProjects/GeneticAlgorithm/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/phil/CLionProjects/GeneticAlgorithm /Users/phil/CLionProjects/GeneticAlgorithm /Users/phil/CLionProjects/GeneticAlgorithm/cmake-build-debug /Users/phil/CLionProjects/GeneticAlgorithm/cmake-build-debug /Users/phil/CLionProjects/GeneticAlgorithm/cmake-build-debug/CMakeFiles/GeneticAlgorithm.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/GeneticAlgorithm.dir/depend

