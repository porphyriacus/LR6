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
CMAKE_SOURCE_DIR = /home/porphyriacus/Documents/453502/ОАиП/LR6/Task_1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/porphyriacus/Documents/453502/ОАиП/LR6/Task_1/build

# Include any dependencies generated for this target.
include CMakeFiles/main.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/main.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/main.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/main.dir/flags.make

CMakeFiles/main.dir/input.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/input.cpp.o: ../input.cpp
CMakeFiles/main.dir/input.cpp.o: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/porphyriacus/Documents/453502/ОАиП/LR6/Task_1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/main.dir/input.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/main.dir/input.cpp.o -MF CMakeFiles/main.dir/input.cpp.o.d -o CMakeFiles/main.dir/input.cpp.o -c /home/porphyriacus/Documents/453502/ОАиП/LR6/Task_1/input.cpp

CMakeFiles/main.dir/input.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/input.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/porphyriacus/Documents/453502/ОАиП/LR6/Task_1/input.cpp > CMakeFiles/main.dir/input.cpp.i

CMakeFiles/main.dir/input.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/input.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/porphyriacus/Documents/453502/ОАиП/LR6/Task_1/input.cpp -o CMakeFiles/main.dir/input.cpp.s

CMakeFiles/main.dir/main.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/main.cpp.o: ../main.cpp
CMakeFiles/main.dir/main.cpp.o: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/porphyriacus/Documents/453502/ОАиП/LR6/Task_1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/main.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/main.dir/main.cpp.o -MF CMakeFiles/main.dir/main.cpp.o.d -o CMakeFiles/main.dir/main.cpp.o -c /home/porphyriacus/Documents/453502/ОАиП/LR6/Task_1/main.cpp

CMakeFiles/main.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/porphyriacus/Documents/453502/ОАиП/LR6/Task_1/main.cpp > CMakeFiles/main.dir/main.cpp.i

CMakeFiles/main.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/porphyriacus/Documents/453502/ОАиП/LR6/Task_1/main.cpp -o CMakeFiles/main.dir/main.cpp.s

CMakeFiles/main.dir/solve.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/solve.cpp.o: ../solve.cpp
CMakeFiles/main.dir/solve.cpp.o: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/porphyriacus/Documents/453502/ОАиП/LR6/Task_1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/main.dir/solve.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/main.dir/solve.cpp.o -MF CMakeFiles/main.dir/solve.cpp.o.d -o CMakeFiles/main.dir/solve.cpp.o -c /home/porphyriacus/Documents/453502/ОАиП/LR6/Task_1/solve.cpp

CMakeFiles/main.dir/solve.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/solve.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/porphyriacus/Documents/453502/ОАиП/LR6/Task_1/solve.cpp > CMakeFiles/main.dir/solve.cpp.i

CMakeFiles/main.dir/solve.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/solve.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/porphyriacus/Documents/453502/ОАиП/LR6/Task_1/solve.cpp -o CMakeFiles/main.dir/solve.cpp.s

CMakeFiles/main.dir/str.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/str.cpp.o: ../str.cpp
CMakeFiles/main.dir/str.cpp.o: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/porphyriacus/Documents/453502/ОАиП/LR6/Task_1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/main.dir/str.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/main.dir/str.cpp.o -MF CMakeFiles/main.dir/str.cpp.o.d -o CMakeFiles/main.dir/str.cpp.o -c /home/porphyriacus/Documents/453502/ОАиП/LR6/Task_1/str.cpp

CMakeFiles/main.dir/str.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/str.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/porphyriacus/Documents/453502/ОАиП/LR6/Task_1/str.cpp > CMakeFiles/main.dir/str.cpp.i

CMakeFiles/main.dir/str.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/str.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/porphyriacus/Documents/453502/ОАиП/LR6/Task_1/str.cpp -o CMakeFiles/main.dir/str.cpp.s

# Object files for target main
main_OBJECTS = \
"CMakeFiles/main.dir/input.cpp.o" \
"CMakeFiles/main.dir/main.cpp.o" \
"CMakeFiles/main.dir/solve.cpp.o" \
"CMakeFiles/main.dir/str.cpp.o"

# External object files for target main
main_EXTERNAL_OBJECTS =

main: CMakeFiles/main.dir/input.cpp.o
main: CMakeFiles/main.dir/main.cpp.o
main: CMakeFiles/main.dir/solve.cpp.o
main: CMakeFiles/main.dir/str.cpp.o
main: CMakeFiles/main.dir/build.make
main: CMakeFiles/main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/porphyriacus/Documents/453502/ОАиП/LR6/Task_1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable main"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/main.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/main.dir/build: main
.PHONY : CMakeFiles/main.dir/build

CMakeFiles/main.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/main.dir/cmake_clean.cmake
.PHONY : CMakeFiles/main.dir/clean

CMakeFiles/main.dir/depend:
	cd /home/porphyriacus/Documents/453502/ОАиП/LR6/Task_1/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/porphyriacus/Documents/453502/ОАиП/LR6/Task_1 /home/porphyriacus/Documents/453502/ОАиП/LR6/Task_1 /home/porphyriacus/Documents/453502/ОАиП/LR6/Task_1/build /home/porphyriacus/Documents/453502/ОАиП/LR6/Task_1/build /home/porphyriacus/Documents/453502/ОАиП/LR6/Task_1/build/CMakeFiles/main.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/main.dir/depend

