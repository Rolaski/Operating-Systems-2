# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.29

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
CMAKE_COMMAND = "C:\Aplikacje i gry\CLion 2024.2.2\bin\cmake\win\x64\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Aplikacje i gry\CLion 2024.2.2\bin\cmake\win\x64\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "D:\Github things\Operating-Systems-2"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\Github things\Operating-Systems-2\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Operating_Systems_2.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Operating_Systems_2.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Operating_Systems_2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Operating_Systems_2.dir/flags.make

CMakeFiles/Operating_Systems_2.dir/class_no.4/5_4_3.c.obj: CMakeFiles/Operating_Systems_2.dir/flags.make
CMakeFiles/Operating_Systems_2.dir/class_no.4/5_4_3.c.obj: D:/Github\ things/Operating-Systems-2/class\ no.4/5_4_3.c
CMakeFiles/Operating_Systems_2.dir/class_no.4/5_4_3.c.obj: CMakeFiles/Operating_Systems_2.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="D:\Github things\Operating-Systems-2\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Operating_Systems_2.dir/class_no.4/5_4_3.c.obj"
	C:\APLIKA~1\CLION2~1.2\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/Operating_Systems_2.dir/class_no.4/5_4_3.c.obj -MF CMakeFiles\Operating_Systems_2.dir\class_no.4\5_4_3.c.obj.d -o CMakeFiles\Operating_Systems_2.dir\class_no.4\5_4_3.c.obj -c "D:\Github things\Operating-Systems-2\class no.4\5_4_3.c"

CMakeFiles/Operating_Systems_2.dir/class_no.4/5_4_3.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/Operating_Systems_2.dir/class_no.4/5_4_3.c.i"
	C:\APLIKA~1\CLION2~1.2\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "D:\Github things\Operating-Systems-2\class no.4\5_4_3.c" > CMakeFiles\Operating_Systems_2.dir\class_no.4\5_4_3.c.i

CMakeFiles/Operating_Systems_2.dir/class_no.4/5_4_3.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/Operating_Systems_2.dir/class_no.4/5_4_3.c.s"
	C:\APLIKA~1\CLION2~1.2\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "D:\Github things\Operating-Systems-2\class no.4\5_4_3.c" -o CMakeFiles\Operating_Systems_2.dir\class_no.4\5_4_3.c.s

# Object files for target Operating_Systems_2
Operating_Systems_2_OBJECTS = \
"CMakeFiles/Operating_Systems_2.dir/class_no.4/5_4_3.c.obj"

# External object files for target Operating_Systems_2
Operating_Systems_2_EXTERNAL_OBJECTS =

Operating_Systems_2.exe: CMakeFiles/Operating_Systems_2.dir/class_no.4/5_4_3.c.obj
Operating_Systems_2.exe: CMakeFiles/Operating_Systems_2.dir/build.make
Operating_Systems_2.exe: CMakeFiles/Operating_Systems_2.dir/linkLibs.rsp
Operating_Systems_2.exe: CMakeFiles/Operating_Systems_2.dir/objects1.rsp
Operating_Systems_2.exe: CMakeFiles/Operating_Systems_2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir="D:\Github things\Operating-Systems-2\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Operating_Systems_2.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Operating_Systems_2.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Operating_Systems_2.dir/build: Operating_Systems_2.exe
.PHONY : CMakeFiles/Operating_Systems_2.dir/build

CMakeFiles/Operating_Systems_2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Operating_Systems_2.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Operating_Systems_2.dir/clean

CMakeFiles/Operating_Systems_2.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\Github things\Operating-Systems-2" "D:\Github things\Operating-Systems-2" "D:\Github things\Operating-Systems-2\cmake-build-debug" "D:\Github things\Operating-Systems-2\cmake-build-debug" "D:\Github things\Operating-Systems-2\cmake-build-debug\CMakeFiles\Operating_Systems_2.dir\DependInfo.cmake" "--color=$(COLOR)"
.PHONY : CMakeFiles/Operating_Systems_2.dir/depend

