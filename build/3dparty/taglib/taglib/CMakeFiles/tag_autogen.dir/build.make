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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.18.1/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.18.1/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/admin/Desktop/utag

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/admin/Desktop/utag/build

# Utility rule file for tag_autogen.

# Include the progress variables for this target.
include 3dparty/taglib/taglib/CMakeFiles/tag_autogen.dir/progress.make

3dparty/taglib/taglib/CMakeFiles/tag_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/Users/admin/Desktop/utag/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target tag"
	cd /Users/admin/Desktop/utag/build/3dparty/taglib/taglib && /usr/local/Cellar/cmake/3.18.1/bin/cmake -E cmake_autogen /Users/admin/Desktop/utag/build/3dparty/taglib/taglib/CMakeFiles/tag_autogen.dir/AutogenInfo.json ""

tag_autogen: 3dparty/taglib/taglib/CMakeFiles/tag_autogen
tag_autogen: 3dparty/taglib/taglib/CMakeFiles/tag_autogen.dir/build.make

.PHONY : tag_autogen

# Rule to build all files generated by this target.
3dparty/taglib/taglib/CMakeFiles/tag_autogen.dir/build: tag_autogen

.PHONY : 3dparty/taglib/taglib/CMakeFiles/tag_autogen.dir/build

3dparty/taglib/taglib/CMakeFiles/tag_autogen.dir/clean:
	cd /Users/admin/Desktop/utag/build/3dparty/taglib/taglib && $(CMAKE_COMMAND) -P CMakeFiles/tag_autogen.dir/cmake_clean.cmake
.PHONY : 3dparty/taglib/taglib/CMakeFiles/tag_autogen.dir/clean

3dparty/taglib/taglib/CMakeFiles/tag_autogen.dir/depend:
	cd /Users/admin/Desktop/utag/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/admin/Desktop/utag /Users/admin/Desktop/utag/3dparty/taglib/taglib /Users/admin/Desktop/utag/build /Users/admin/Desktop/utag/build/3dparty/taglib/taglib /Users/admin/Desktop/utag/build/3dparty/taglib/taglib/CMakeFiles/tag_autogen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : 3dparty/taglib/taglib/CMakeFiles/tag_autogen.dir/depend

