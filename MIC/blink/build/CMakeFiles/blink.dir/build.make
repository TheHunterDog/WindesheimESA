# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.21

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.21.2/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.21.2/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/markheijnekamp/Windesheim/MIC/blink

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/markheijnekamp/Windesheim/MIC/blink/build

# Include any dependencies generated for this target.
include CMakeFiles/blink.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/blink.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/blink.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/blink.dir/flags.make

CMakeFiles/blink.dir/src/main.cpp.obj: CMakeFiles/blink.dir/flags.make
CMakeFiles/blink.dir/src/main.cpp.obj: ../src/main.cpp
CMakeFiles/blink.dir/src/main.cpp.obj: CMakeFiles/blink.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/markheijnekamp/Windesheim/MIC/blink/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/blink.dir/src/main.cpp.obj"
	/usr/local/bin/avr-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/blink.dir/src/main.cpp.obj -MF CMakeFiles/blink.dir/src/main.cpp.obj.d -o CMakeFiles/blink.dir/src/main.cpp.obj -c /Users/markheijnekamp/Windesheim/MIC/blink/src/main.cpp

CMakeFiles/blink.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/blink.dir/src/main.cpp.i"
	/usr/local/bin/avr-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/markheijnekamp/Windesheim/MIC/blink/src/main.cpp > CMakeFiles/blink.dir/src/main.cpp.i

CMakeFiles/blink.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/blink.dir/src/main.cpp.s"
	/usr/local/bin/avr-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/markheijnekamp/Windesheim/MIC/blink/src/main.cpp -o CMakeFiles/blink.dir/src/main.cpp.s

# Object files for target blink
blink_OBJECTS = \
"CMakeFiles/blink.dir/src/main.cpp.obj"

# External object files for target blink
blink_EXTERNAL_OBJECTS =

blink.elf: CMakeFiles/blink.dir/src/main.cpp.obj
blink.elf: CMakeFiles/blink.dir/build.make
blink.elf: CMakeFiles/blink.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/markheijnekamp/Windesheim/MIC/blink/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable blink.elf"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/blink.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/blink.dir/build: blink.elf
.PHONY : CMakeFiles/blink.dir/build

CMakeFiles/blink.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/blink.dir/cmake_clean.cmake
.PHONY : CMakeFiles/blink.dir/clean

CMakeFiles/blink.dir/depend:
	cd /Users/markheijnekamp/Windesheim/MIC/blink/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/markheijnekamp/Windesheim/MIC/blink /Users/markheijnekamp/Windesheim/MIC/blink /Users/markheijnekamp/Windesheim/MIC/blink/build /Users/markheijnekamp/Windesheim/MIC/blink/build /Users/markheijnekamp/Windesheim/MIC/blink/build/CMakeFiles/blink.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/blink.dir/depend

