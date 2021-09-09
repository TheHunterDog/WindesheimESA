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
CMAKE_SOURCE_DIR = /Users/markheijnekamp/Windesheim/MIC/BlinkSerial

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/markheijnekamp/Windesheim/MIC/BlinkSerial/build

# Utility rule file for upload_eeprom.

# Include any custom commands dependencies for this target.
include CMakeFiles/upload_eeprom.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/upload_eeprom.dir/progress.make

CMakeFiles/upload_eeprom:
	/usr/local/bin/avrdude -c arduino -p atmega328p -U eeprom:w:blinkserial.eep

upload_eeprom: CMakeFiles/upload_eeprom
upload_eeprom: CMakeFiles/upload_eeprom.dir/build.make
.PHONY : upload_eeprom

# Rule to build all files generated by this target.
CMakeFiles/upload_eeprom.dir/build: upload_eeprom
.PHONY : CMakeFiles/upload_eeprom.dir/build

CMakeFiles/upload_eeprom.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/upload_eeprom.dir/cmake_clean.cmake
.PHONY : CMakeFiles/upload_eeprom.dir/clean

CMakeFiles/upload_eeprom.dir/depend:
	cd /Users/markheijnekamp/Windesheim/MIC/BlinkSerial/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/markheijnekamp/Windesheim/MIC/BlinkSerial /Users/markheijnekamp/Windesheim/MIC/BlinkSerial /Users/markheijnekamp/Windesheim/MIC/BlinkSerial/build /Users/markheijnekamp/Windesheim/MIC/BlinkSerial/build /Users/markheijnekamp/Windesheim/MIC/BlinkSerial/build/CMakeFiles/upload_eeprom.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/upload_eeprom.dir/depend

