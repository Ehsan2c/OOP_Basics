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
CMAKE_SOURCE_DIR = "G:\C++\HW2\Calendar Event"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "G:\C++\HW2\Calendar Event\build"

# Include any dependencies generated for this target.
include src/CMakeFiles/calendarevent.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/CMakeFiles/calendarevent.dir/compiler_depend.make

# Include the progress variables for this target.
include src/CMakeFiles/calendarevent.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/calendarevent.dir/flags.make

src/CMakeFiles/calendarevent.dir/codegen:
.PHONY : src/CMakeFiles/calendarevent.dir/codegen

src/CMakeFiles/calendarevent.dir/main.cpp.obj: src/CMakeFiles/calendarevent.dir/flags.make
src/CMakeFiles/calendarevent.dir/main.cpp.obj: src/CMakeFiles/calendarevent.dir/includes_CXX.rsp
src/CMakeFiles/calendarevent.dir/main.cpp.obj: G:/C++/HW2/Calendar\ Event/src/main.cpp
src/CMakeFiles/calendarevent.dir/main.cpp.obj: src/CMakeFiles/calendarevent.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="G:\C++\HW2\Calendar Event\build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/calendarevent.dir/main.cpp.obj"
	cd /d "G:\C++\HW2\Calendar Event\build\src" && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/calendarevent.dir/main.cpp.obj -MF CMakeFiles\calendarevent.dir\main.cpp.obj.d -o CMakeFiles\calendarevent.dir\main.cpp.obj -c "G:\C++\HW2\Calendar Event\src\main.cpp"

src/CMakeFiles/calendarevent.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/calendarevent.dir/main.cpp.i"
	cd /d "G:\C++\HW2\Calendar Event\build\src" && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "G:\C++\HW2\Calendar Event\src\main.cpp" > CMakeFiles\calendarevent.dir\main.cpp.i

src/CMakeFiles/calendarevent.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/calendarevent.dir/main.cpp.s"
	cd /d "G:\C++\HW2\Calendar Event\build\src" && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "G:\C++\HW2\Calendar Event\src\main.cpp" -o CMakeFiles\calendarevent.dir\main.cpp.s

# Object files for target calendarevent
calendarevent_OBJECTS = \
"CMakeFiles/calendarevent.dir/main.cpp.obj"

# External object files for target calendarevent
calendarevent_EXTERNAL_OBJECTS =

G:/C++/HW2/Calendar\ Event/bin/calendarevent.exe: src/CMakeFiles/calendarevent.dir/main.cpp.obj
G:/C++/HW2/Calendar\ Event/bin/calendarevent.exe: src/CMakeFiles/calendarevent.dir/build.make
G:/C++/HW2/Calendar\ Event/bin/calendarevent.exe: lib/libadd.a
G:/C++/HW2/Calendar\ Event/bin/calendarevent.exe: src/CMakeFiles/calendarevent.dir/linkLibs.rsp
G:/C++/HW2/Calendar\ Event/bin/calendarevent.exe: src/CMakeFiles/calendarevent.dir/objects1.rsp
G:/C++/HW2/Calendar\ Event/bin/calendarevent.exe: src/CMakeFiles/calendarevent.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir="G:\C++\HW2\Calendar Event\build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable \"G:\C++\HW2\Calendar Event\bin\calendarevent.exe\""
	cd /d "G:\C++\HW2\Calendar Event\build\src" && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\calendarevent.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/calendarevent.dir/build: G:/C++/HW2/Calendar\ Event/bin/calendarevent.exe
.PHONY : src/CMakeFiles/calendarevent.dir/build

src/CMakeFiles/calendarevent.dir/clean:
	cd /d "G:\C++\HW2\Calendar Event\build\src" && $(CMAKE_COMMAND) -P CMakeFiles\calendarevent.dir\cmake_clean.cmake
.PHONY : src/CMakeFiles/calendarevent.dir/clean

src/CMakeFiles/calendarevent.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "G:\C++\HW2\Calendar Event" "G:\C++\HW2\Calendar Event\src" "G:\C++\HW2\Calendar Event\build" "G:\C++\HW2\Calendar Event\build\src" "G:\C++\HW2\Calendar Event\build\src\CMakeFiles\calendarevent.dir\DependInfo.cmake" "--color=$(COLOR)"
.PHONY : src/CMakeFiles/calendarevent.dir/depend

