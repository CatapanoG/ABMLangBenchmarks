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
include CMakeFiles/centralRegister.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/centralRegister.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/centralRegister.dir/flags.make

CMakeFiles/centralRegister.dir/src/Centralregister.cpp.o: CMakeFiles/centralRegister.dir/flags.make
CMakeFiles/centralRegister.dir/src/Centralregister.cpp.o: ../src/Centralregister.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/gennaro/git/ABMLangBenchmark/ABMLangBenchmarks/decentralized accounts/cpp/bin/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/centralRegister.dir/src/Centralregister.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/centralRegister.dir/src/Centralregister.cpp.o -c "/Users/gennaro/git/ABMLangBenchmark/ABMLangBenchmarks/decentralized accounts/cpp/src/Centralregister.cpp"

CMakeFiles/centralRegister.dir/src/Centralregister.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/centralRegister.dir/src/Centralregister.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/gennaro/git/ABMLangBenchmark/ABMLangBenchmarks/decentralized accounts/cpp/src/Centralregister.cpp" > CMakeFiles/centralRegister.dir/src/Centralregister.cpp.i

CMakeFiles/centralRegister.dir/src/Centralregister.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/centralRegister.dir/src/Centralregister.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/gennaro/git/ABMLangBenchmark/ABMLangBenchmarks/decentralized accounts/cpp/src/Centralregister.cpp" -o CMakeFiles/centralRegister.dir/src/Centralregister.cpp.s

# Object files for target centralRegister
centralRegister_OBJECTS = \
"CMakeFiles/centralRegister.dir/src/Centralregister.cpp.o"

# External object files for target centralRegister
centralRegister_EXTERNAL_OBJECTS =

../lib/libcentralRegister.a: CMakeFiles/centralRegister.dir/src/Centralregister.cpp.o
../lib/libcentralRegister.a: CMakeFiles/centralRegister.dir/build.make
../lib/libcentralRegister.a: CMakeFiles/centralRegister.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/gennaro/git/ABMLangBenchmark/ABMLangBenchmarks/decentralized accounts/cpp/bin/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library ../lib/libcentralRegister.a"
	$(CMAKE_COMMAND) -P CMakeFiles/centralRegister.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/centralRegister.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/centralRegister.dir/build: ../lib/libcentralRegister.a

.PHONY : CMakeFiles/centralRegister.dir/build

CMakeFiles/centralRegister.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/centralRegister.dir/cmake_clean.cmake
.PHONY : CMakeFiles/centralRegister.dir/clean

CMakeFiles/centralRegister.dir/depend:
	cd "/Users/gennaro/git/ABMLangBenchmark/ABMLangBenchmarks/decentralized accounts/cpp/bin" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/gennaro/git/ABMLangBenchmark/ABMLangBenchmarks/decentralized accounts/cpp" "/Users/gennaro/git/ABMLangBenchmark/ABMLangBenchmarks/decentralized accounts/cpp" "/Users/gennaro/git/ABMLangBenchmark/ABMLangBenchmarks/decentralized accounts/cpp/bin" "/Users/gennaro/git/ABMLangBenchmark/ABMLangBenchmarks/decentralized accounts/cpp/bin" "/Users/gennaro/git/ABMLangBenchmark/ABMLangBenchmarks/decentralized accounts/cpp/bin/CMakeFiles/centralRegister.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/centralRegister.dir/depend

