# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.18

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
CMAKE_COMMAND = /Users/ailchuk/.brew/Cellar/cmake/3.18.1/bin/cmake

# The command to remove a file.
RM = /Users/ailchuk/.brew/Cellar/cmake/3.18.1/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/ailchuk/Desktop/utag

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/ailchuk/Desktop/utag/build

# Utility rule file for utag_autogen.

# Include the progress variables for this target.
include app/CMakeFiles/utag_autogen.dir/progress.make

app/CMakeFiles/utag_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/Users/ailchuk/Desktop/utag/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target utag"
	cd /Users/ailchuk/Desktop/utag/build/app && /Users/ailchuk/.brew/Cellar/cmake/3.18.1/bin/cmake -E cmake_autogen /Users/ailchuk/Desktop/utag/build/app/CMakeFiles/utag_autogen.dir/AutogenInfo.json ""

utag_autogen: app/CMakeFiles/utag_autogen
utag_autogen: app/CMakeFiles/utag_autogen.dir/build.make

.PHONY : utag_autogen

# Rule to build all files generated by this target.
app/CMakeFiles/utag_autogen.dir/build: utag_autogen

.PHONY : app/CMakeFiles/utag_autogen.dir/build

app/CMakeFiles/utag_autogen.dir/clean:
	cd /Users/ailchuk/Desktop/utag/build/app && $(CMAKE_COMMAND) -P CMakeFiles/utag_autogen.dir/cmake_clean.cmake
.PHONY : app/CMakeFiles/utag_autogen.dir/clean

app/CMakeFiles/utag_autogen.dir/depend:
	cd /Users/ailchuk/Desktop/utag/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/ailchuk/Desktop/utag /Users/ailchuk/Desktop/utag/app /Users/ailchuk/Desktop/utag/build /Users/ailchuk/Desktop/utag/build/app /Users/ailchuk/Desktop/utag/build/app/CMakeFiles/utag_autogen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : app/CMakeFiles/utag_autogen.dir/depend

