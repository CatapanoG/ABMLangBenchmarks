# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
CMAKE_COMMAND = /Applications/CMake.app/Contents/bin/cmake

# The command to remove a file.
RM = /Applications/CMake.app/Contents/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/gennaro/git/ABMLangBenchmark/ABMLangBenchmarks/decentralized accounts/cpp"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/gennaro/git/ABMLangBenchmark/ABMLangBenchmarks/decentralized accounts/cpp/bin"

# Include any dependencies generated for this target.
include CMakeFiles/main.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/main.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/main.dir/flags.make

CMakeFiles/main.dir/src/AAAMAIN.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/src/AAAMAIN.cpp.o: ../src/AAAMAIN.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/gennaro/git/ABMLangBenchmark/ABMLangBenchmarks/decentralized accounts/cpp/bin/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/main.dir/src/AAAMAIN.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/main.dir/src/AAAMAIN.cpp.o -c "/Users/gennaro/git/ABMLangBenchmark/ABMLangBenchmarks/decentralized accounts/cpp/src/AAAMAIN.cpp"

CMakeFiles/main.dir/src/AAAMAIN.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/src/AAAMAIN.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/gennaro/git/ABMLangBenchmark/ABMLangBenchmarks/decentralized accounts/cpp/src/AAAMAIN.cpp" > CMakeFiles/main.dir/src/AAAMAIN.cpp.i

CMakeFiles/main.dir/src/AAAMAIN.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/src/AAAMAIN.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/gennaro/git/ABMLangBenchmark/ABMLangBenchmarks/decentralized accounts/cpp/src/AAAMAIN.cpp" -o CMakeFiles/main.dir/src/AAAMAIN.cpp.s

# Object files for target main
main_OBJECTS = \
"CMakeFiles/main.dir/src/AAAMAIN.cpp.o"

# External object files for target main
main_EXTERNAL_OBJECTS =

main: CMakeFiles/main.dir/src/AAAMAIN.cpp.o
main: CMakeFiles/main.dir/build.make
main: ../lib/libmodel.a
main: ../lib/libcentralRegister.a
main: ../lib/libagent.a
main: ../lib/libitem.a
main: CMakeFiles/main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/gennaro/git/ABMLangBenchmark/ABMLangBenchmarks/decentralized accounts/cpp/bin/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable main"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/main.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/main.dir/build: main

.PHONY : CMakeFiles/main.dir/build

CMakeFiles/main.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/main.dir/cmake_clean.cmake
.PHONY : CMakeFiles/main.dir/clean

CMakeFiles/main.dir/depend:
	cd "/Users/gennaro/git/ABMLangBenchmark/ABMLangBenchmarks/decentralized accounts/cpp/bin" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/gennaro/git/ABMLangBenchmark/ABMLangBenchmarks/decentralized accounts/cpp" "/Users/gennaro/git/ABMLangBenchmark/ABMLangBenchmarks/decentralized accounts/cpp" "/Users/gennaro/git/ABMLangBenchmark/ABMLangBenchmarks/decentralized accounts/cpp/bin" "/Users/gennaro/git/ABMLangBenchmark/ABMLangBenchmarks/decentralized accounts/cpp/bin" "/Users/gennaro/git/ABMLangBenchmark/ABMLangBenchmarks/decentralized accounts/cpp/bin/CMakeFiles/main.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/main.dir/depend

