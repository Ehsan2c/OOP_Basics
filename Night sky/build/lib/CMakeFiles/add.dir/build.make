# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.31

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "G:\C++\HW2\Night sky"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "G:\C++\HW2\Night sky\build"

# Include any dependencies generated for this target.
include lib/CMakeFiles/add.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include lib/CMakeFiles/add.dir/compiler_depend.make

# Include the progress variables for this target.
include lib/CMakeFiles/add.dir/progress.make

# Include the compile flags for this target's objects.
include lib/CMakeFiles/add.dir/flags.make

lib/CMakeFiles/add.dir/codegen:
.PHONY : lib/CMakeFiles/add.dir/codegen

lib/CMakeFiles/add.dir/star.cpp.obj: lib/CMakeFiles/add.dir/flags.make
lib/CMakeFiles/add.dir/star.cpp.obj: lib/CMakeFiles/add.dir/includes_CXX.rsp
lib/CMakeFiles/add.dir/star.cpp.obj: G:/C++/HW2/Night\ sky/lib/star.cpp
lib/CMakeFiles/add.dir/star.cpp.obj: lib/CMakeFiles/add.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="G:\C++\HW2\Night sky\build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object lib/CMakeFiles/add.dir/star.cpp.obj"
	cd /d "G:\C++\HW2\Night sky\build\lib" && C:\MinGW\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT lib/CMakeFiles/add.dir/star.cpp.obj -MF CMakeFiles\add.dir\star.cpp.obj.d -o CMakeFiles\add.dir\star.cpp.obj -c "G:\C++\HW2\Night sky\lib\star.cpp"

lib/CMakeFiles/add.dir/star.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/add.dir/star.cpp.i"
	cd /d "G:\C++\HW2\Night sky\build\lib" && C:\MinGW\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "G:\C++\HW2\Night sky\lib\star.cpp" > CMakeFiles\add.dir\star.cpp.i

lib/CMakeFiles/add.dir/star.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/add.dir/star.cpp.s"
	cd /d "G:\C++\HW2\Night sky\build\lib" && C:\MinGW\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "G:\C++\HW2\Night sky\lib\star.cpp" -o CMakeFiles\add.dir\star.cpp.s

lib/CMakeFiles/add.dir/sky.cpp.obj: lib/CMakeFiles/add.dir/flags.make
lib/CMakeFiles/add.dir/sky.cpp.obj: lib/CMakeFiles/add.dir/includes_CXX.rsp
lib/CMakeFiles/add.dir/sky.cpp.obj: G:/C++/HW2/Night\ sky/lib/sky.cpp
lib/CMakeFiles/add.dir/sky.cpp.obj: lib/CMakeFiles/add.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="G:\C++\HW2\Night sky\build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object lib/CMakeFiles/add.dir/sky.cpp.obj"
	cd /d "G:\C++\HW2\Night sky\build\lib" && C:\MinGW\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT lib/CMakeFiles/add.dir/sky.cpp.obj -MF CMakeFiles\add.dir\sky.cpp.obj.d -o CMakeFiles\add.dir\sky.cpp.obj -c "G:\C++\HW2\Night sky\lib\sky.cpp"

lib/CMakeFiles/add.dir/sky.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/add.dir/sky.cpp.i"
	cd /d "G:\C++\HW2\Night sky\build\lib" && C:\MinGW\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "G:\C++\HW2\Night sky\lib\sky.cpp" > CMakeFiles\add.dir\sky.cpp.i

lib/CMakeFiles/add.dir/sky.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/add.dir/sky.cpp.s"
	cd /d "G:\C++\HW2\Night sky\build\lib" && C:\MinGW\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "G:\C++\HW2\Night sky\lib\sky.cpp" -o CMakeFiles\add.dir\sky.cpp.s

# Object files for target add
add_OBJECTS = \
"CMakeFiles/add.dir/star.cpp.obj" \
"CMakeFiles/add.dir/sky.cpp.obj"

# External object files for target add
add_EXTERNAL_OBJECTS =

lib/libadd.a: lib/CMakeFiles/add.dir/star.cpp.obj
lib/libadd.a: lib/CMakeFiles/add.dir/sky.cpp.obj
lib/libadd.a: lib/CMakeFiles/add.dir/build.make
lib/libadd.a: lib/CMakeFiles/add.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir="G:\C++\HW2\Night sky\build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX static library libadd.a"
	cd /d "G:\C++\HW2\Night sky\build\lib" && $(CMAKE_COMMAND) -P CMakeFiles\add.dir\cmake_clean_target.cmake
	cd /d "G:\C++\HW2\Night sky\build\lib" && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\add.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
lib/CMakeFiles/add.dir/build: lib/libadd.a
.PHONY : lib/CMakeFiles/add.dir/build

lib/CMakeFiles/add.dir/clean:
	cd /d "G:\C++\HW2\Night sky\build\lib" && $(CMAKE_COMMAND) -P CMakeFiles\add.dir\cmake_clean.cmake
.PHONY : lib/CMakeFiles/add.dir/clean

lib/CMakeFiles/add.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "G:\C++\HW2\Night sky" "G:\C++\HW2\Night sky\lib" "G:\C++\HW2\Night sky\build" "G:\C++\HW2\Night sky\build\lib" "G:\C++\HW2\Night sky\build\lib\CMakeFiles\add.dir\DependInfo.cmake" "--color=$(COLOR)"
.PHONY : lib/CMakeFiles/add.dir/depend

