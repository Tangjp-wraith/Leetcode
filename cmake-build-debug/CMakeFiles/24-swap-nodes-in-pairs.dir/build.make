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
include CMakeFiles/24-swap-nodes-in-pairs.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/24-swap-nodes-in-pairs.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/24-swap-nodes-in-pairs.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/24-swap-nodes-in-pairs.dir/flags.make

CMakeFiles/24-swap-nodes-in-pairs.dir/leetcode/editor/cn/24-swap-nodes-in-pairs.cpp.o: CMakeFiles/24-swap-nodes-in-pairs.dir/flags.make
CMakeFiles/24-swap-nodes-in-pairs.dir/leetcode/editor/cn/24-swap-nodes-in-pairs.cpp.o: ../leetcode/editor/cn/24-swap-nodes-in-pairs.cpp
CMakeFiles/24-swap-nodes-in-pairs.dir/leetcode/editor/cn/24-swap-nodes-in-pairs.cpp.o: CMakeFiles/24-swap-nodes-in-pairs.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tang/CSProjects/Leetcode/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/24-swap-nodes-in-pairs.dir/leetcode/editor/cn/24-swap-nodes-in-pairs.cpp.o"
	/usr/bin/clang++-12 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/24-swap-nodes-in-pairs.dir/leetcode/editor/cn/24-swap-nodes-in-pairs.cpp.o -MF CMakeFiles/24-swap-nodes-in-pairs.dir/leetcode/editor/cn/24-swap-nodes-in-pairs.cpp.o.d -o CMakeFiles/24-swap-nodes-in-pairs.dir/leetcode/editor/cn/24-swap-nodes-in-pairs.cpp.o -c /home/tang/CSProjects/Leetcode/leetcode/editor/cn/24-swap-nodes-in-pairs.cpp

CMakeFiles/24-swap-nodes-in-pairs.dir/leetcode/editor/cn/24-swap-nodes-in-pairs.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/24-swap-nodes-in-pairs.dir/leetcode/editor/cn/24-swap-nodes-in-pairs.cpp.i"
	/usr/bin/clang++-12 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tang/CSProjects/Leetcode/leetcode/editor/cn/24-swap-nodes-in-pairs.cpp > CMakeFiles/24-swap-nodes-in-pairs.dir/leetcode/editor/cn/24-swap-nodes-in-pairs.cpp.i

CMakeFiles/24-swap-nodes-in-pairs.dir/leetcode/editor/cn/24-swap-nodes-in-pairs.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/24-swap-nodes-in-pairs.dir/leetcode/editor/cn/24-swap-nodes-in-pairs.cpp.s"
	/usr/bin/clang++-12 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tang/CSProjects/Leetcode/leetcode/editor/cn/24-swap-nodes-in-pairs.cpp -o CMakeFiles/24-swap-nodes-in-pairs.dir/leetcode/editor/cn/24-swap-nodes-in-pairs.cpp.s

# Object files for target 24-swap-nodes-in-pairs
24__swap__nodes__in__pairs_OBJECTS = \
"CMakeFiles/24-swap-nodes-in-pairs.dir/leetcode/editor/cn/24-swap-nodes-in-pairs.cpp.o"

# External object files for target 24-swap-nodes-in-pairs
24__swap__nodes__in__pairs_EXTERNAL_OBJECTS =

24-swap-nodes-in-pairs: CMakeFiles/24-swap-nodes-in-pairs.dir/leetcode/editor/cn/24-swap-nodes-in-pairs.cpp.o
24-swap-nodes-in-pairs: CMakeFiles/24-swap-nodes-in-pairs.dir/build.make
24-swap-nodes-in-pairs: libleetcode.a
24-swap-nodes-in-pairs: CMakeFiles/24-swap-nodes-in-pairs.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/tang/CSProjects/Leetcode/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 24-swap-nodes-in-pairs"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/24-swap-nodes-in-pairs.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/24-swap-nodes-in-pairs.dir/build: 24-swap-nodes-in-pairs
.PHONY : CMakeFiles/24-swap-nodes-in-pairs.dir/build

CMakeFiles/24-swap-nodes-in-pairs.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/24-swap-nodes-in-pairs.dir/cmake_clean.cmake
.PHONY : CMakeFiles/24-swap-nodes-in-pairs.dir/clean

CMakeFiles/24-swap-nodes-in-pairs.dir/depend:
	cd /home/tang/CSProjects/Leetcode/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tang/CSProjects/Leetcode /home/tang/CSProjects/Leetcode /home/tang/CSProjects/Leetcode/cmake-build-debug /home/tang/CSProjects/Leetcode/cmake-build-debug /home/tang/CSProjects/Leetcode/cmake-build-debug/CMakeFiles/24-swap-nodes-in-pairs.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/24-swap-nodes-in-pairs.dir/depend
