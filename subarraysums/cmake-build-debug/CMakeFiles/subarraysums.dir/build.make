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
CMAKE_SOURCE_DIR = "/Users/SA20102487/CLionProjects/Competitive Coding/Attack/subarraysums"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/SA20102487/CLionProjects/Competitive Coding/Attack/subarraysums/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/subarraysums.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/subarraysums.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/subarraysums.dir/flags.make

CMakeFiles/subarraysums.dir/main.cpp.o: CMakeFiles/subarraysums.dir/flags.make
CMakeFiles/subarraysums.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/SA20102487/CLionProjects/Competitive Coding/Attack/subarraysums/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/subarraysums.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/subarraysums.dir/main.cpp.o -c "/Users/SA20102487/CLionProjects/Competitive Coding/Attack/subarraysums/main.cpp"

CMakeFiles/subarraysums.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/subarraysums.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/SA20102487/CLionProjects/Competitive Coding/Attack/subarraysums/main.cpp" > CMakeFiles/subarraysums.dir/main.cpp.i

CMakeFiles/subarraysums.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/subarraysums.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/SA20102487/CLionProjects/Competitive Coding/Attack/subarraysums/main.cpp" -o CMakeFiles/subarraysums.dir/main.cpp.s

# Object files for target subarraysums
subarraysums_OBJECTS = \
"CMakeFiles/subarraysums.dir/main.cpp.o"

# External object files for target subarraysums
subarraysums_EXTERNAL_OBJECTS =

subarraysums: CMakeFiles/subarraysums.dir/main.cpp.o
subarraysums: CMakeFiles/subarraysums.dir/build.make
subarraysums: CMakeFiles/subarraysums.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/SA20102487/CLionProjects/Competitive Coding/Attack/subarraysums/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable subarraysums"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/subarraysums.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/subarraysums.dir/build: subarraysums

.PHONY : CMakeFiles/subarraysums.dir/build

CMakeFiles/subarraysums.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/subarraysums.dir/cmake_clean.cmake
.PHONY : CMakeFiles/subarraysums.dir/clean

CMakeFiles/subarraysums.dir/depend:
	cd "/Users/SA20102487/CLionProjects/Competitive Coding/Attack/subarraysums/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/SA20102487/CLionProjects/Competitive Coding/Attack/subarraysums" "/Users/SA20102487/CLionProjects/Competitive Coding/Attack/subarraysums" "/Users/SA20102487/CLionProjects/Competitive Coding/Attack/subarraysums/cmake-build-debug" "/Users/SA20102487/CLionProjects/Competitive Coding/Attack/subarraysums/cmake-build-debug" "/Users/SA20102487/CLionProjects/Competitive Coding/Attack/subarraysums/cmake-build-debug/CMakeFiles/subarraysums.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/subarraysums.dir/depend

