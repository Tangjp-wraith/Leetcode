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
include CMakeFiles/Offer-42.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Offer-42.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Offer-42.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Offer-42.dir/flags.make

CMakeFiles/Offer-42.dir/leetcode/editor/cn/Offer-42.cpp.o: CMakeFiles/Offer-42.dir/flags.make
CMakeFiles/Offer-42.dir/leetcode/editor/cn/Offer-42.cpp.o: ../leetcode/editor/cn/Offer-42.cpp
CMakeFiles/Offer-42.dir/leetcode/editor/cn/Offer-42.cpp.o: CMakeFiles/Offer-42.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tang/CSProjects/Leetcode/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Offer-42.dir/leetcode/editor/cn/Offer-42.cpp.o"
	/usr/bin/clang++-12 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Offer-42.dir/leetcode/editor/cn/Offer-42.cpp.o -MF CMakeFiles/Offer-42.dir/leetcode/editor/cn/Offer-42.cpp.o.d -o CMakeFiles/Offer-42.dir/leetcode/editor/cn/Offer-42.cpp.o -c /home/tang/CSProjects/Leetcode/leetcode/editor/cn/Offer-42.cpp

CMakeFiles/Offer-42.dir/leetcode/editor/cn/Offer-42.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Offer-42.dir/leetcode/editor/cn/Offer-42.cpp.i"
	/usr/bin/clang++-12 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tang/CSProjects/Leetcode/leetcode/editor/cn/Offer-42.cpp > CMakeFiles/Offer-42.dir/leetcode/editor/cn/Offer-42.cpp.i

CMakeFiles/Offer-42.dir/leetcode/editor/cn/Offer-42.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Offer-42.dir/leetcode/editor/cn/Offer-42.cpp.s"
	/usr/bin/clang++-12 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tang/CSProjects/Leetcode/leetcode/editor/cn/Offer-42.cpp -o CMakeFiles/Offer-42.dir/leetcode/editor/cn/Offer-42.cpp.s

# Object files for target Offer-42
Offer__42_OBJECTS = \
"CMakeFiles/Offer-42.dir/leetcode/editor/cn/Offer-42.cpp.o"

# External object files for target Offer-42
Offer__42_EXTERNAL_OBJECTS =

Offer-42: CMakeFiles/Offer-42.dir/leetcode/editor/cn/Offer-42.cpp.o
Offer-42: CMakeFiles/Offer-42.dir/build.make
Offer-42: libleetcode.a
Offer-42: CMakeFiles/Offer-42.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/tang/CSProjects/Leetcode/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Offer-42"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Offer-42.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Offer-42.dir/build: Offer-42
.PHONY : CMakeFiles/Offer-42.dir/build

CMakeFiles/Offer-42.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Offer-42.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Offer-42.dir/clean

CMakeFiles/Offer-42.dir/depend:
	cd /home/tang/CSProjects/Leetcode/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tang/CSProjects/Leetcode /home/tang/CSProjects/Leetcode /home/tang/CSProjects/Leetcode/cmake-build-debug /home/tang/CSProjects/Leetcode/cmake-build-debug /home/tang/CSProjects/Leetcode/cmake-build-debug/CMakeFiles/Offer-42.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Offer-42.dir/depend

