# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.14

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\Programmi\JetBrains\CLion 2019.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\Programmi\JetBrains\CLion 2019.2\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\pippo\Desktop\Uni info\Gestionale_in_C"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\pippo\Desktop\Uni info\Gestionale_in_C\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Gestionale_in_C.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Gestionale_in_C.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Gestionale_in_C.dir/flags.make

CMakeFiles/Gestionale_in_C.dir/main.c.obj: CMakeFiles/Gestionale_in_C.dir/flags.make
CMakeFiles/Gestionale_in_C.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\pippo\Desktop\Uni info\Gestionale_in_C\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Gestionale_in_C.dir/main.c.obj"
	D:\Programmi\mingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Gestionale_in_C.dir\main.c.obj   -c "C:\Users\pippo\Desktop\Uni info\Gestionale_in_C\main.c"

CMakeFiles/Gestionale_in_C.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Gestionale_in_C.dir/main.c.i"
	D:\Programmi\mingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\Users\pippo\Desktop\Uni info\Gestionale_in_C\main.c" > CMakeFiles\Gestionale_in_C.dir\main.c.i

CMakeFiles/Gestionale_in_C.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Gestionale_in_C.dir/main.c.s"
	D:\Programmi\mingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "C:\Users\pippo\Desktop\Uni info\Gestionale_in_C\main.c" -o CMakeFiles\Gestionale_in_C.dir\main.c.s

# Object files for target Gestionale_in_C
Gestionale_in_C_OBJECTS = \
"CMakeFiles/Gestionale_in_C.dir/main.c.obj"

# External object files for target Gestionale_in_C
Gestionale_in_C_EXTERNAL_OBJECTS =

Gestionale_in_C.exe: CMakeFiles/Gestionale_in_C.dir/main.c.obj
Gestionale_in_C.exe: CMakeFiles/Gestionale_in_C.dir/build.make
Gestionale_in_C.exe: CMakeFiles/Gestionale_in_C.dir/linklibs.rsp
Gestionale_in_C.exe: CMakeFiles/Gestionale_in_C.dir/objects1.rsp
Gestionale_in_C.exe: CMakeFiles/Gestionale_in_C.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\pippo\Desktop\Uni info\Gestionale_in_C\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Gestionale_in_C.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Gestionale_in_C.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Gestionale_in_C.dir/build: Gestionale_in_C.exe

.PHONY : CMakeFiles/Gestionale_in_C.dir/build

CMakeFiles/Gestionale_in_C.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Gestionale_in_C.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Gestionale_in_C.dir/clean

CMakeFiles/Gestionale_in_C.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\pippo\Desktop\Uni info\Gestionale_in_C" "C:\Users\pippo\Desktop\Uni info\Gestionale_in_C" "C:\Users\pippo\Desktop\Uni info\Gestionale_in_C\cmake-build-debug" "C:\Users\pippo\Desktop\Uni info\Gestionale_in_C\cmake-build-debug" "C:\Users\pippo\Desktop\Uni info\Gestionale_in_C\cmake-build-debug\CMakeFiles\Gestionale_in_C.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Gestionale_in_C.dir/depend

