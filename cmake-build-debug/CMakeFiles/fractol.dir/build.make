# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/pmelodi/Projects/fractol

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/pmelodi/Projects/fractol/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/fractol.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/fractol.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/fractol.dir/flags.make

CMakeFiles/fractol.dir/srcs/main.c.o: CMakeFiles/fractol.dir/flags.make
CMakeFiles/fractol.dir/srcs/main.c.o: ../srcs/main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/pmelodi/Projects/fractol/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/fractol.dir/srcs/main.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/fractol.dir/srcs/main.c.o   -c /Users/pmelodi/Projects/fractol/srcs/main.c

CMakeFiles/fractol.dir/srcs/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/fractol.dir/srcs/main.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/pmelodi/Projects/fractol/srcs/main.c > CMakeFiles/fractol.dir/srcs/main.c.i

CMakeFiles/fractol.dir/srcs/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/fractol.dir/srcs/main.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/pmelodi/Projects/fractol/srcs/main.c -o CMakeFiles/fractol.dir/srcs/main.c.s

CMakeFiles/fractol.dir/srcs/error.c.o: CMakeFiles/fractol.dir/flags.make
CMakeFiles/fractol.dir/srcs/error.c.o: ../srcs/error.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/pmelodi/Projects/fractol/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/fractol.dir/srcs/error.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/fractol.dir/srcs/error.c.o   -c /Users/pmelodi/Projects/fractol/srcs/error.c

CMakeFiles/fractol.dir/srcs/error.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/fractol.dir/srcs/error.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/pmelodi/Projects/fractol/srcs/error.c > CMakeFiles/fractol.dir/srcs/error.c.i

CMakeFiles/fractol.dir/srcs/error.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/fractol.dir/srcs/error.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/pmelodi/Projects/fractol/srcs/error.c -o CMakeFiles/fractol.dir/srcs/error.c.s

CMakeFiles/fractol.dir/srcs/fr_keyboard.c.o: CMakeFiles/fractol.dir/flags.make
CMakeFiles/fractol.dir/srcs/fr_keyboard.c.o: ../srcs/fr_keyboard.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/pmelodi/Projects/fractol/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/fractol.dir/srcs/fr_keyboard.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/fractol.dir/srcs/fr_keyboard.c.o   -c /Users/pmelodi/Projects/fractol/srcs/fr_keyboard.c

CMakeFiles/fractol.dir/srcs/fr_keyboard.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/fractol.dir/srcs/fr_keyboard.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/pmelodi/Projects/fractol/srcs/fr_keyboard.c > CMakeFiles/fractol.dir/srcs/fr_keyboard.c.i

CMakeFiles/fractol.dir/srcs/fr_keyboard.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/fractol.dir/srcs/fr_keyboard.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/pmelodi/Projects/fractol/srcs/fr_keyboard.c -o CMakeFiles/fractol.dir/srcs/fr_keyboard.c.s

CMakeFiles/fractol.dir/srcs/ft_change_map.c.o: CMakeFiles/fractol.dir/flags.make
CMakeFiles/fractol.dir/srcs/ft_change_map.c.o: ../srcs/ft_change_map.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/pmelodi/Projects/fractol/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/fractol.dir/srcs/ft_change_map.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/fractol.dir/srcs/ft_change_map.c.o   -c /Users/pmelodi/Projects/fractol/srcs/ft_change_map.c

CMakeFiles/fractol.dir/srcs/ft_change_map.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/fractol.dir/srcs/ft_change_map.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/pmelodi/Projects/fractol/srcs/ft_change_map.c > CMakeFiles/fractol.dir/srcs/ft_change_map.c.i

CMakeFiles/fractol.dir/srcs/ft_change_map.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/fractol.dir/srcs/ft_change_map.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/pmelodi/Projects/fractol/srcs/ft_change_map.c -o CMakeFiles/fractol.dir/srcs/ft_change_map.c.s

CMakeFiles/fractol.dir/srcs/fr_init.c.o: CMakeFiles/fractol.dir/flags.make
CMakeFiles/fractol.dir/srcs/fr_init.c.o: ../srcs/fr_init.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/pmelodi/Projects/fractol/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/fractol.dir/srcs/fr_init.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/fractol.dir/srcs/fr_init.c.o   -c /Users/pmelodi/Projects/fractol/srcs/fr_init.c

CMakeFiles/fractol.dir/srcs/fr_init.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/fractol.dir/srcs/fr_init.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/pmelodi/Projects/fractol/srcs/fr_init.c > CMakeFiles/fractol.dir/srcs/fr_init.c.i

CMakeFiles/fractol.dir/srcs/fr_init.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/fractol.dir/srcs/fr_init.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/pmelodi/Projects/fractol/srcs/fr_init.c -o CMakeFiles/fractol.dir/srcs/fr_init.c.s

# Object files for target fractol
fractol_OBJECTS = \
"CMakeFiles/fractol.dir/srcs/main.c.o" \
"CMakeFiles/fractol.dir/srcs/error.c.o" \
"CMakeFiles/fractol.dir/srcs/fr_keyboard.c.o" \
"CMakeFiles/fractol.dir/srcs/ft_change_map.c.o" \
"CMakeFiles/fractol.dir/srcs/fr_init.c.o"

# External object files for target fractol
fractol_EXTERNAL_OBJECTS =

fractol: CMakeFiles/fractol.dir/srcs/main.c.o
fractol: CMakeFiles/fractol.dir/srcs/error.c.o
fractol: CMakeFiles/fractol.dir/srcs/fr_keyboard.c.o
fractol: CMakeFiles/fractol.dir/srcs/ft_change_map.c.o
fractol: CMakeFiles/fractol.dir/srcs/fr_init.c.o
fractol: CMakeFiles/fractol.dir/build.make
fractol: minilibx/liblibft.a
fractol: CMakeFiles/fractol.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/pmelodi/Projects/fractol/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking C executable fractol"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/fractol.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/fractol.dir/build: fractol

.PHONY : CMakeFiles/fractol.dir/build

CMakeFiles/fractol.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/fractol.dir/cmake_clean.cmake
.PHONY : CMakeFiles/fractol.dir/clean

CMakeFiles/fractol.dir/depend:
	cd /Users/pmelodi/Projects/fractol/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/pmelodi/Projects/fractol /Users/pmelodi/Projects/fractol /Users/pmelodi/Projects/fractol/cmake-build-debug /Users/pmelodi/Projects/fractol/cmake-build-debug /Users/pmelodi/Projects/fractol/cmake-build-debug/CMakeFiles/fractol.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/fractol.dir/depend

