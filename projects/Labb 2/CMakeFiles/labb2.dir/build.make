# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/lazyplayer74/Desktop/LinuxSetup/lab-env-master

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/lazyplayer74/Desktop/LinuxSetup/lab-env-master

# Include any dependencies generated for this target.
include projects/Labb\ 2/CMakeFiles/labb2.dir/depend.make

# Include the progress variables for this target.
include projects/Labb\ 2/CMakeFiles/labb2.dir/progress.make

# Include the compile flags for this target's objects.
include projects/Labb\ 2/CMakeFiles/labb2.dir/flags.make

projects/Labb\ 2/CMakeFiles/labb2.dir/code/exampleapp.cc.o: projects/Labb\ 2/CMakeFiles/labb2.dir/flags.make
projects/Labb\ 2/CMakeFiles/labb2.dir/code/exampleapp.cc.o: projects/Labb\ 2/code/exampleapp.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lazyplayer74/Desktop/LinuxSetup/lab-env-master/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object projects/Labb 2/CMakeFiles/labb2.dir/code/exampleapp.cc.o"
	cd "/home/lazyplayer74/Desktop/LinuxSetup/lab-env-master/projects/Labb 2" && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/labb2.dir/code/exampleapp.cc.o -c "/home/lazyplayer74/Desktop/LinuxSetup/lab-env-master/projects/Labb 2/code/exampleapp.cc"

projects/Labb\ 2/CMakeFiles/labb2.dir/code/exampleapp.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/labb2.dir/code/exampleapp.cc.i"
	cd "/home/lazyplayer74/Desktop/LinuxSetup/lab-env-master/projects/Labb 2" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/lazyplayer74/Desktop/LinuxSetup/lab-env-master/projects/Labb 2/code/exampleapp.cc" > CMakeFiles/labb2.dir/code/exampleapp.cc.i

projects/Labb\ 2/CMakeFiles/labb2.dir/code/exampleapp.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/labb2.dir/code/exampleapp.cc.s"
	cd "/home/lazyplayer74/Desktop/LinuxSetup/lab-env-master/projects/Labb 2" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/lazyplayer74/Desktop/LinuxSetup/lab-env-master/projects/Labb 2/code/exampleapp.cc" -o CMakeFiles/labb2.dir/code/exampleapp.cc.s

projects/Labb\ 2/CMakeFiles/labb2.dir/code/exampleapp.cc.o.requires:

.PHONY : projects/Labb\ 2/CMakeFiles/labb2.dir/code/exampleapp.cc.o.requires

projects/Labb\ 2/CMakeFiles/labb2.dir/code/exampleapp.cc.o.provides: projects/Labb\ 2/CMakeFiles/labb2.dir/code/exampleapp.cc.o.requires
	$(MAKE) -f "projects/Labb 2/CMakeFiles/labb2.dir/build.make" "projects/Labb 2/CMakeFiles/labb2.dir/code/exampleapp.cc.o.provides.build"
.PHONY : projects/Labb\ 2/CMakeFiles/labb2.dir/code/exampleapp.cc.o.provides

projects/Labb\ 2/CMakeFiles/labb2.dir/code/exampleapp.cc.o.provides.build: projects/Labb\ 2/CMakeFiles/labb2.dir/code/exampleapp.cc.o


projects/Labb\ 2/CMakeFiles/labb2.dir/code/main.cc.o: projects/Labb\ 2/CMakeFiles/labb2.dir/flags.make
projects/Labb\ 2/CMakeFiles/labb2.dir/code/main.cc.o: projects/Labb\ 2/code/main.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lazyplayer74/Desktop/LinuxSetup/lab-env-master/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object projects/Labb 2/CMakeFiles/labb2.dir/code/main.cc.o"
	cd "/home/lazyplayer74/Desktop/LinuxSetup/lab-env-master/projects/Labb 2" && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/labb2.dir/code/main.cc.o -c "/home/lazyplayer74/Desktop/LinuxSetup/lab-env-master/projects/Labb 2/code/main.cc"

projects/Labb\ 2/CMakeFiles/labb2.dir/code/main.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/labb2.dir/code/main.cc.i"
	cd "/home/lazyplayer74/Desktop/LinuxSetup/lab-env-master/projects/Labb 2" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/lazyplayer74/Desktop/LinuxSetup/lab-env-master/projects/Labb 2/code/main.cc" > CMakeFiles/labb2.dir/code/main.cc.i

projects/Labb\ 2/CMakeFiles/labb2.dir/code/main.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/labb2.dir/code/main.cc.s"
	cd "/home/lazyplayer74/Desktop/LinuxSetup/lab-env-master/projects/Labb 2" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/lazyplayer74/Desktop/LinuxSetup/lab-env-master/projects/Labb 2/code/main.cc" -o CMakeFiles/labb2.dir/code/main.cc.s

projects/Labb\ 2/CMakeFiles/labb2.dir/code/main.cc.o.requires:

.PHONY : projects/Labb\ 2/CMakeFiles/labb2.dir/code/main.cc.o.requires

projects/Labb\ 2/CMakeFiles/labb2.dir/code/main.cc.o.provides: projects/Labb\ 2/CMakeFiles/labb2.dir/code/main.cc.o.requires
	$(MAKE) -f "projects/Labb 2/CMakeFiles/labb2.dir/build.make" "projects/Labb 2/CMakeFiles/labb2.dir/code/main.cc.o.provides.build"
.PHONY : projects/Labb\ 2/CMakeFiles/labb2.dir/code/main.cc.o.provides

projects/Labb\ 2/CMakeFiles/labb2.dir/code/main.cc.o.provides.build: projects/Labb\ 2/CMakeFiles/labb2.dir/code/main.cc.o


# Object files for target labb2
labb2_OBJECTS = \
"CMakeFiles/labb2.dir/code/exampleapp.cc.o" \
"CMakeFiles/labb2.dir/code/main.cc.o"

# External object files for target labb2
labb2_EXTERNAL_OBJECTS =

projects/Labb\ 2/labb2: projects/Labb\ 2/CMakeFiles/labb2.dir/code/exampleapp.cc.o
projects/Labb\ 2/labb2: projects/Labb\ 2/CMakeFiles/labb2.dir/code/main.cc.o
projects/Labb\ 2/labb2: projects/Labb\ 2/CMakeFiles/labb2.dir/build.make
projects/Labb\ 2/labb2: engine/core/libcore.a
projects/Labb\ 2/labb2: engine/render/librender.a
projects/Labb\ 2/labb2: engine/core/libcore.a
projects/Labb\ 2/labb2: engine/render/librender.a
projects/Labb\ 2/labb2: exts/glew/libglew.a
projects/Labb\ 2/labb2: exts/glfw/src/libglfw3.a
projects/Labb\ 2/labb2: /usr/lib/x86_64-linux-gnu/librt.so
projects/Labb\ 2/labb2: /usr/lib/x86_64-linux-gnu/libm.so
projects/Labb\ 2/labb2: /usr/lib/x86_64-linux-gnu/libX11.so
projects/Labb\ 2/labb2: /usr/lib/x86_64-linux-gnu/libXrandr.so
projects/Labb\ 2/labb2: /usr/lib/x86_64-linux-gnu/libXinerama.so
projects/Labb\ 2/labb2: /usr/lib/x86_64-linux-gnu/libXxf86vm.so
projects/Labb\ 2/labb2: /usr/lib/x86_64-linux-gnu/libXcursor.so
projects/Labb\ 2/labb2: exts/libimgui.a
projects/Labb\ 2/labb2: exts/libnanovg.a
projects/Labb\ 2/labb2: exts/libimgui.a
projects/Labb\ 2/labb2: exts/libnanovg.a
projects/Labb\ 2/labb2: projects/Labb\ 2/CMakeFiles/labb2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/lazyplayer74/Desktop/LinuxSetup/lab-env-master/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable labb2"
	cd "/home/lazyplayer74/Desktop/LinuxSetup/lab-env-master/projects/Labb 2" && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/labb2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
projects/Labb\ 2/CMakeFiles/labb2.dir/build: projects/Labb\ 2/labb2

.PHONY : projects/Labb\ 2/CMakeFiles/labb2.dir/build

projects/Labb\ 2/CMakeFiles/labb2.dir/requires: projects/Labb\ 2/CMakeFiles/labb2.dir/code/exampleapp.cc.o.requires
projects/Labb\ 2/CMakeFiles/labb2.dir/requires: projects/Labb\ 2/CMakeFiles/labb2.dir/code/main.cc.o.requires

.PHONY : projects/Labb\ 2/CMakeFiles/labb2.dir/requires

projects/Labb\ 2/CMakeFiles/labb2.dir/clean:
	cd "/home/lazyplayer74/Desktop/LinuxSetup/lab-env-master/projects/Labb 2" && $(CMAKE_COMMAND) -P CMakeFiles/labb2.dir/cmake_clean.cmake
.PHONY : projects/Labb\ 2/CMakeFiles/labb2.dir/clean

projects/Labb\ 2/CMakeFiles/labb2.dir/depend:
	cd /home/lazyplayer74/Desktop/LinuxSetup/lab-env-master && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/lazyplayer74/Desktop/LinuxSetup/lab-env-master "/home/lazyplayer74/Desktop/LinuxSetup/lab-env-master/projects/Labb 2" /home/lazyplayer74/Desktop/LinuxSetup/lab-env-master "/home/lazyplayer74/Desktop/LinuxSetup/lab-env-master/projects/Labb 2" "/home/lazyplayer74/Desktop/LinuxSetup/lab-env-master/projects/Labb 2/CMakeFiles/labb2.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : projects/Labb\ 2/CMakeFiles/labb2.dir/depend

