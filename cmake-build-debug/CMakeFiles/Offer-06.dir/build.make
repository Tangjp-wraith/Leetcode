# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_SOURCE_DIR = /home/tang/CSProjects/Leetcode

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/tang/CSProjects/Leetcode/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Offer-06.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Offer-06.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Offer-06.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Offer-06.dir/flags.make

CMakeFiles/Offer-06.dir/leetcode/editor/cn/Offer-06.cpp.o: CMakeFiles/Offer-06.dir/flags.make
CMakeFiles/Offer-06.dir/leetcode/editor/cn/Offer-06.cpp.o: ../leetcode/editor/cn/Offer-06.cpp
CMakeFiles/Offer-06.dir/leetcode/editor/cn/Offer-06.cpp.o: CMakeFiles/Offer-06.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tang/CSProjects/Leetcode/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Offer-06.dir/leetcode/editor/cn/Offer-06.cpp.o"
	/usr/bin/clang++-12 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Offer-06.dir/leetcode/editor/cn/Offer-06.cpp.o -MF CMakeFiles/Offer-06.dir/leetcode/editor/cn/Offer-06.cpp.o.d -o CMakeFiles/Offer-06.dir/leetcode/editor/cn/Offer-06.cpp.o -c /home/tang/CSProjects/Leetcode/leetcode/editor/cn/Offer-06.cpp

CMakeFiles/Offer-06.dir/leetcode/editor/cn/Offer-06.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Offer-06.dir/leetcode/editor/cn/Offer-06.cpp.i"
	/usr/bin/clang++-12 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tang/CSProjects/Leetcode/leetcode/editor/cn/Offer-06.cpp > CMakeFiles/Offer-06.dir/leetcode/editor/cn/Offer-06.cpp.i

CMakeFiles/Offer-06.dir/leetcode/editor/cn/Offer-06.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Offer-06.dir/leetcode/editor/cn/Offer-06.cpp.s"
	/usr/bin/clang++-12 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tang/CSProjects/Leetcode/leetcode/editor/cn/Offer-06.cpp -o CMakeFiles/Offer-06.dir/leetcode/editor/cn/Offer-06.cpp.s

# Object files for target Offer-06
Offer__06_OBJECTS = \
"CMakeFiles/Offer-06.dir/leetcode/editor/cn/Offer-06.cpp.o"

# External object files for target Offer-06
Offer__06_EXTERNAL_OBJECTS =

Offer-06: CMakeFiles/Offer-06.dir/leetcode/editor/cn/Offer-06.cpp.o
Offer-06: CMakeFiles/Offer-06.dir/build.make
Offer-06: libleetcode.a
Offer-06: CMakeFiles/Offer-06.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/tang/CSProjects/Leetcode/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Offer-06"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Offer-06.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Offer-06.dir/build: Offer-06
.PHONY : CMakeFiles/Offer-06.dir/build

CMakeFiles/Offer-06.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Offer-06.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Offer-06.dir/clean

CMakeFiles/Offer-06.dir/depend:
	cd /home/tang/CSProjects/Leetcode/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tang/CSProjects/Leetcode /home/tang/CSProjects/Leetcode /home/tang/CSProjects/Leetcode/cmake-build-debug /home/tang/CSProjects/Leetcode/cmake-build-debug /home/tang/CSProjects/Leetcode/cmake-build-debug/CMakeFiles/Offer-06.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Offer-06.dir/depend
