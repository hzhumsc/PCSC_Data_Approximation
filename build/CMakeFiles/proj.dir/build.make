# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.19

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
CMAKE_COMMAND = /snap/cmake/769/bin/cmake

# The command to remove a file.
RM = /snap/cmake/769/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/haojun/Desktop/MATH-458/math-458/proj

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/haojun/Desktop/MATH-458/math-458/proj/build

# Include any dependencies generated for this target.
include CMakeFiles/proj.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/proj.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/proj.dir/flags.make

CMakeFiles/proj.dir/main.cpp.o: CMakeFiles/proj.dir/flags.make
CMakeFiles/proj.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/haojun/Desktop/MATH-458/math-458/proj/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/proj.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/proj.dir/main.cpp.o -c /home/haojun/Desktop/MATH-458/math-458/proj/main.cpp

CMakeFiles/proj.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/proj.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/haojun/Desktop/MATH-458/math-458/proj/main.cpp > CMakeFiles/proj.dir/main.cpp.i

CMakeFiles/proj.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/proj.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/haojun/Desktop/MATH-458/math-458/proj/main.cpp -o CMakeFiles/proj.dir/main.cpp.s

CMakeFiles/proj.dir/Data.cpp.o: CMakeFiles/proj.dir/flags.make
CMakeFiles/proj.dir/Data.cpp.o: ../Data.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/haojun/Desktop/MATH-458/math-458/proj/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/proj.dir/Data.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/proj.dir/Data.cpp.o -c /home/haojun/Desktop/MATH-458/math-458/proj/Data.cpp

CMakeFiles/proj.dir/Data.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/proj.dir/Data.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/haojun/Desktop/MATH-458/math-458/proj/Data.cpp > CMakeFiles/proj.dir/Data.cpp.i

CMakeFiles/proj.dir/Data.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/proj.dir/Data.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/haojun/Desktop/MATH-458/math-458/proj/Data.cpp -o CMakeFiles/proj.dir/Data.cpp.s

CMakeFiles/proj.dir/Approximator.cpp.o: CMakeFiles/proj.dir/flags.make
CMakeFiles/proj.dir/Approximator.cpp.o: ../Approximator.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/haojun/Desktop/MATH-458/math-458/proj/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/proj.dir/Approximator.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/proj.dir/Approximator.cpp.o -c /home/haojun/Desktop/MATH-458/math-458/proj/Approximator.cpp

CMakeFiles/proj.dir/Approximator.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/proj.dir/Approximator.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/haojun/Desktop/MATH-458/math-458/proj/Approximator.cpp > CMakeFiles/proj.dir/Approximator.cpp.i

CMakeFiles/proj.dir/Approximator.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/proj.dir/Approximator.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/haojun/Desktop/MATH-458/math-458/proj/Approximator.cpp -o CMakeFiles/proj.dir/Approximator.cpp.s

CMakeFiles/proj.dir/Matrix.cpp.o: CMakeFiles/proj.dir/flags.make
CMakeFiles/proj.dir/Matrix.cpp.o: ../Matrix.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/haojun/Desktop/MATH-458/math-458/proj/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/proj.dir/Matrix.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/proj.dir/Matrix.cpp.o -c /home/haojun/Desktop/MATH-458/math-458/proj/Matrix.cpp

CMakeFiles/proj.dir/Matrix.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/proj.dir/Matrix.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/haojun/Desktop/MATH-458/math-458/proj/Matrix.cpp > CMakeFiles/proj.dir/Matrix.cpp.i

CMakeFiles/proj.dir/Matrix.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/proj.dir/Matrix.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/haojun/Desktop/MATH-458/math-458/proj/Matrix.cpp -o CMakeFiles/proj.dir/Matrix.cpp.s

CMakeFiles/proj.dir/UserInterface.cpp.o: CMakeFiles/proj.dir/flags.make
CMakeFiles/proj.dir/UserInterface.cpp.o: ../UserInterface.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/haojun/Desktop/MATH-458/math-458/proj/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/proj.dir/UserInterface.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/proj.dir/UserInterface.cpp.o -c /home/haojun/Desktop/MATH-458/math-458/proj/UserInterface.cpp

CMakeFiles/proj.dir/UserInterface.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/proj.dir/UserInterface.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/haojun/Desktop/MATH-458/math-458/proj/UserInterface.cpp > CMakeFiles/proj.dir/UserInterface.cpp.i

CMakeFiles/proj.dir/UserInterface.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/proj.dir/UserInterface.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/haojun/Desktop/MATH-458/math-458/proj/UserInterface.cpp -o CMakeFiles/proj.dir/UserInterface.cpp.s

CMakeFiles/proj.dir/test/GeneralTest.cpp.o: CMakeFiles/proj.dir/flags.make
CMakeFiles/proj.dir/test/GeneralTest.cpp.o: ../test/GeneralTest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/haojun/Desktop/MATH-458/math-458/proj/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/proj.dir/test/GeneralTest.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/proj.dir/test/GeneralTest.cpp.o -c /home/haojun/Desktop/MATH-458/math-458/proj/test/GeneralTest.cpp

CMakeFiles/proj.dir/test/GeneralTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/proj.dir/test/GeneralTest.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/haojun/Desktop/MATH-458/math-458/proj/test/GeneralTest.cpp > CMakeFiles/proj.dir/test/GeneralTest.cpp.i

CMakeFiles/proj.dir/test/GeneralTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/proj.dir/test/GeneralTest.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/haojun/Desktop/MATH-458/math-458/proj/test/GeneralTest.cpp -o CMakeFiles/proj.dir/test/GeneralTest.cpp.s

CMakeFiles/proj.dir/test/Test_1.cpp.o: CMakeFiles/proj.dir/flags.make
CMakeFiles/proj.dir/test/Test_1.cpp.o: ../test/Test_1.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/haojun/Desktop/MATH-458/math-458/proj/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/proj.dir/test/Test_1.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/proj.dir/test/Test_1.cpp.o -c /home/haojun/Desktop/MATH-458/math-458/proj/test/Test_1.cpp

CMakeFiles/proj.dir/test/Test_1.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/proj.dir/test/Test_1.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/haojun/Desktop/MATH-458/math-458/proj/test/Test_1.cpp > CMakeFiles/proj.dir/test/Test_1.cpp.i

CMakeFiles/proj.dir/test/Test_1.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/proj.dir/test/Test_1.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/haojun/Desktop/MATH-458/math-458/proj/test/Test_1.cpp -o CMakeFiles/proj.dir/test/Test_1.cpp.s

CMakeFiles/proj.dir/test/Test_2.cpp.o: CMakeFiles/proj.dir/flags.make
CMakeFiles/proj.dir/test/Test_2.cpp.o: ../test/Test_2.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/haojun/Desktop/MATH-458/math-458/proj/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/proj.dir/test/Test_2.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/proj.dir/test/Test_2.cpp.o -c /home/haojun/Desktop/MATH-458/math-458/proj/test/Test_2.cpp

CMakeFiles/proj.dir/test/Test_2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/proj.dir/test/Test_2.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/haojun/Desktop/MATH-458/math-458/proj/test/Test_2.cpp > CMakeFiles/proj.dir/test/Test_2.cpp.i

CMakeFiles/proj.dir/test/Test_2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/proj.dir/test/Test_2.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/haojun/Desktop/MATH-458/math-458/proj/test/Test_2.cpp -o CMakeFiles/proj.dir/test/Test_2.cpp.s

CMakeFiles/proj.dir/test/Test_3.cpp.o: CMakeFiles/proj.dir/flags.make
CMakeFiles/proj.dir/test/Test_3.cpp.o: ../test/Test_3.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/haojun/Desktop/MATH-458/math-458/proj/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/proj.dir/test/Test_3.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/proj.dir/test/Test_3.cpp.o -c /home/haojun/Desktop/MATH-458/math-458/proj/test/Test_3.cpp

CMakeFiles/proj.dir/test/Test_3.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/proj.dir/test/Test_3.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/haojun/Desktop/MATH-458/math-458/proj/test/Test_3.cpp > CMakeFiles/proj.dir/test/Test_3.cpp.i

CMakeFiles/proj.dir/test/Test_3.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/proj.dir/test/Test_3.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/haojun/Desktop/MATH-458/math-458/proj/test/Test_3.cpp -o CMakeFiles/proj.dir/test/Test_3.cpp.s

CMakeFiles/proj.dir/test/Test_4.cpp.o: CMakeFiles/proj.dir/flags.make
CMakeFiles/proj.dir/test/Test_4.cpp.o: ../test/Test_4.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/haojun/Desktop/MATH-458/math-458/proj/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/proj.dir/test/Test_4.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/proj.dir/test/Test_4.cpp.o -c /home/haojun/Desktop/MATH-458/math-458/proj/test/Test_4.cpp

CMakeFiles/proj.dir/test/Test_4.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/proj.dir/test/Test_4.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/haojun/Desktop/MATH-458/math-458/proj/test/Test_4.cpp > CMakeFiles/proj.dir/test/Test_4.cpp.i

CMakeFiles/proj.dir/test/Test_4.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/proj.dir/test/Test_4.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/haojun/Desktop/MATH-458/math-458/proj/test/Test_4.cpp -o CMakeFiles/proj.dir/test/Test_4.cpp.s

# Object files for target proj
proj_OBJECTS = \
"CMakeFiles/proj.dir/main.cpp.o" \
"CMakeFiles/proj.dir/Data.cpp.o" \
"CMakeFiles/proj.dir/Approximator.cpp.o" \
"CMakeFiles/proj.dir/Matrix.cpp.o" \
"CMakeFiles/proj.dir/UserInterface.cpp.o" \
"CMakeFiles/proj.dir/test/GeneralTest.cpp.o" \
"CMakeFiles/proj.dir/test/Test_1.cpp.o" \
"CMakeFiles/proj.dir/test/Test_2.cpp.o" \
"CMakeFiles/proj.dir/test/Test_3.cpp.o" \
"CMakeFiles/proj.dir/test/Test_4.cpp.o"

# External object files for target proj
proj_EXTERNAL_OBJECTS =

proj: CMakeFiles/proj.dir/main.cpp.o
proj: CMakeFiles/proj.dir/Data.cpp.o
proj: CMakeFiles/proj.dir/Approximator.cpp.o
proj: CMakeFiles/proj.dir/Matrix.cpp.o
proj: CMakeFiles/proj.dir/UserInterface.cpp.o
proj: CMakeFiles/proj.dir/test/GeneralTest.cpp.o
proj: CMakeFiles/proj.dir/test/Test_1.cpp.o
proj: CMakeFiles/proj.dir/test/Test_2.cpp.o
proj: CMakeFiles/proj.dir/test/Test_3.cpp.o
proj: CMakeFiles/proj.dir/test/Test_4.cpp.o
proj: CMakeFiles/proj.dir/build.make
proj: CMakeFiles/proj.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/haojun/Desktop/MATH-458/math-458/proj/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Linking CXX executable proj"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/proj.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/proj.dir/build: proj

.PHONY : CMakeFiles/proj.dir/build

CMakeFiles/proj.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/proj.dir/cmake_clean.cmake
.PHONY : CMakeFiles/proj.dir/clean

CMakeFiles/proj.dir/depend:
	cd /home/haojun/Desktop/MATH-458/math-458/proj/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/haojun/Desktop/MATH-458/math-458/proj /home/haojun/Desktop/MATH-458/math-458/proj /home/haojun/Desktop/MATH-458/math-458/proj/build /home/haojun/Desktop/MATH-458/math-458/proj/build /home/haojun/Desktop/MATH-458/math-458/proj/build/CMakeFiles/proj.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/proj.dir/depend
