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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/Scarlett/42Projects/push_swap

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/Scarlett/42Projects/push_swap/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/push_swap.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/push_swap.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/push_swap.dir/flags.make

CMakeFiles/push_swap.dir/srcs/push_swap.c.o: CMakeFiles/push_swap.dir/flags.make
CMakeFiles/push_swap.dir/srcs/push_swap.c.o: ../srcs/push_swap.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/Scarlett/42Projects/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/push_swap.dir/srcs/push_swap.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/push_swap.dir/srcs/push_swap.c.o   -c /Users/Scarlett/42Projects/push_swap/srcs/push_swap.c

CMakeFiles/push_swap.dir/srcs/push_swap.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/push_swap.dir/srcs/push_swap.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/Scarlett/42Projects/push_swap/srcs/push_swap.c > CMakeFiles/push_swap.dir/srcs/push_swap.c.i

CMakeFiles/push_swap.dir/srcs/push_swap.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/push_swap.dir/srcs/push_swap.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/Scarlett/42Projects/push_swap/srcs/push_swap.c -o CMakeFiles/push_swap.dir/srcs/push_swap.c.s

CMakeFiles/push_swap.dir/srcs/push_swap.c.o.requires:

.PHONY : CMakeFiles/push_swap.dir/srcs/push_swap.c.o.requires

CMakeFiles/push_swap.dir/srcs/push_swap.c.o.provides: CMakeFiles/push_swap.dir/srcs/push_swap.c.o.requires
	$(MAKE) -f CMakeFiles/push_swap.dir/build.make CMakeFiles/push_swap.dir/srcs/push_swap.c.o.provides.build
.PHONY : CMakeFiles/push_swap.dir/srcs/push_swap.c.o.provides

CMakeFiles/push_swap.dir/srcs/push_swap.c.o.provides.build: CMakeFiles/push_swap.dir/srcs/push_swap.c.o


CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_convert_argv.c.o: CMakeFiles/push_swap.dir/flags.make
CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_convert_argv.c.o: ../libft/push_swap/ft_ps_convert_argv.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/Scarlett/42Projects/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_convert_argv.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_convert_argv.c.o   -c /Users/Scarlett/42Projects/push_swap/libft/push_swap/ft_ps_convert_argv.c

CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_convert_argv.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_convert_argv.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/Scarlett/42Projects/push_swap/libft/push_swap/ft_ps_convert_argv.c > CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_convert_argv.c.i

CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_convert_argv.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_convert_argv.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/Scarlett/42Projects/push_swap/libft/push_swap/ft_ps_convert_argv.c -o CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_convert_argv.c.s

CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_convert_argv.c.o.requires:

.PHONY : CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_convert_argv.c.o.requires

CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_convert_argv.c.o.provides: CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_convert_argv.c.o.requires
	$(MAKE) -f CMakeFiles/push_swap.dir/build.make CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_convert_argv.c.o.provides.build
.PHONY : CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_convert_argv.c.o.provides

CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_convert_argv.c.o.provides.build: CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_convert_argv.c.o


CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_exec_s.c.o: CMakeFiles/push_swap.dir/flags.make
CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_exec_s.c.o: ../libft/push_swap/ft_ps_exec_s.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/Scarlett/42Projects/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_exec_s.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_exec_s.c.o   -c /Users/Scarlett/42Projects/push_swap/libft/push_swap/ft_ps_exec_s.c

CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_exec_s.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_exec_s.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/Scarlett/42Projects/push_swap/libft/push_swap/ft_ps_exec_s.c > CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_exec_s.c.i

CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_exec_s.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_exec_s.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/Scarlett/42Projects/push_swap/libft/push_swap/ft_ps_exec_s.c -o CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_exec_s.c.s

CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_exec_s.c.o.requires:

.PHONY : CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_exec_s.c.o.requires

CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_exec_s.c.o.provides: CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_exec_s.c.o.requires
	$(MAKE) -f CMakeFiles/push_swap.dir/build.make CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_exec_s.c.o.provides.build
.PHONY : CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_exec_s.c.o.provides

CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_exec_s.c.o.provides.build: CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_exec_s.c.o


CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_exec_p.c.o: CMakeFiles/push_swap.dir/flags.make
CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_exec_p.c.o: ../libft/push_swap/ft_ps_exec_p.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/Scarlett/42Projects/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_exec_p.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_exec_p.c.o   -c /Users/Scarlett/42Projects/push_swap/libft/push_swap/ft_ps_exec_p.c

CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_exec_p.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_exec_p.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/Scarlett/42Projects/push_swap/libft/push_swap/ft_ps_exec_p.c > CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_exec_p.c.i

CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_exec_p.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_exec_p.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/Scarlett/42Projects/push_swap/libft/push_swap/ft_ps_exec_p.c -o CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_exec_p.c.s

CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_exec_p.c.o.requires:

.PHONY : CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_exec_p.c.o.requires

CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_exec_p.c.o.provides: CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_exec_p.c.o.requires
	$(MAKE) -f CMakeFiles/push_swap.dir/build.make CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_exec_p.c.o.provides.build
.PHONY : CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_exec_p.c.o.provides

CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_exec_p.c.o.provides.build: CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_exec_p.c.o


CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_exec_r.c.o: CMakeFiles/push_swap.dir/flags.make
CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_exec_r.c.o: ../libft/push_swap/ft_ps_exec_r.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/Scarlett/42Projects/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_exec_r.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_exec_r.c.o   -c /Users/Scarlett/42Projects/push_swap/libft/push_swap/ft_ps_exec_r.c

CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_exec_r.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_exec_r.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/Scarlett/42Projects/push_swap/libft/push_swap/ft_ps_exec_r.c > CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_exec_r.c.i

CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_exec_r.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_exec_r.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/Scarlett/42Projects/push_swap/libft/push_swap/ft_ps_exec_r.c -o CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_exec_r.c.s

CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_exec_r.c.o.requires:

.PHONY : CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_exec_r.c.o.requires

CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_exec_r.c.o.provides: CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_exec_r.c.o.requires
	$(MAKE) -f CMakeFiles/push_swap.dir/build.make CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_exec_r.c.o.provides.build
.PHONY : CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_exec_r.c.o.provides

CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_exec_r.c.o.provides.build: CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_exec_r.c.o


CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_opp.c.o: CMakeFiles/push_swap.dir/flags.make
CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_opp.c.o: ../libft/push_swap/ft_ps_opp.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/Scarlett/42Projects/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_opp.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_opp.c.o   -c /Users/Scarlett/42Projects/push_swap/libft/push_swap/ft_ps_opp.c

CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_opp.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_opp.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/Scarlett/42Projects/push_swap/libft/push_swap/ft_ps_opp.c > CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_opp.c.i

CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_opp.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_opp.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/Scarlett/42Projects/push_swap/libft/push_swap/ft_ps_opp.c -o CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_opp.c.s

CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_opp.c.o.requires:

.PHONY : CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_opp.c.o.requires

CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_opp.c.o.provides: CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_opp.c.o.requires
	$(MAKE) -f CMakeFiles/push_swap.dir/build.make CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_opp.c.o.provides.build
.PHONY : CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_opp.c.o.provides

CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_opp.c.o.provides.build: CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_opp.c.o


CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_ops.c.o: CMakeFiles/push_swap.dir/flags.make
CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_ops.c.o: ../libft/push_swap/ft_ps_ops.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/Scarlett/42Projects/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_ops.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_ops.c.o   -c /Users/Scarlett/42Projects/push_swap/libft/push_swap/ft_ps_ops.c

CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_ops.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_ops.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/Scarlett/42Projects/push_swap/libft/push_swap/ft_ps_ops.c > CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_ops.c.i

CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_ops.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_ops.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/Scarlett/42Projects/push_swap/libft/push_swap/ft_ps_ops.c -o CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_ops.c.s

CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_ops.c.o.requires:

.PHONY : CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_ops.c.o.requires

CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_ops.c.o.provides: CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_ops.c.o.requires
	$(MAKE) -f CMakeFiles/push_swap.dir/build.make CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_ops.c.o.provides.build
.PHONY : CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_ops.c.o.provides

CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_ops.c.o.provides.build: CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_ops.c.o


CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_oprr.c.o: CMakeFiles/push_swap.dir/flags.make
CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_oprr.c.o: ../libft/push_swap/ft_ps_oprr.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/Scarlett/42Projects/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building C object CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_oprr.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_oprr.c.o   -c /Users/Scarlett/42Projects/push_swap/libft/push_swap/ft_ps_oprr.c

CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_oprr.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_oprr.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/Scarlett/42Projects/push_swap/libft/push_swap/ft_ps_oprr.c > CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_oprr.c.i

CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_oprr.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_oprr.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/Scarlett/42Projects/push_swap/libft/push_swap/ft_ps_oprr.c -o CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_oprr.c.s

CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_oprr.c.o.requires:

.PHONY : CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_oprr.c.o.requires

CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_oprr.c.o.provides: CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_oprr.c.o.requires
	$(MAKE) -f CMakeFiles/push_swap.dir/build.make CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_oprr.c.o.provides.build
.PHONY : CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_oprr.c.o.provides

CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_oprr.c.o.provides.build: CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_oprr.c.o


CMakeFiles/push_swap.dir/libft/lst/ft_arerelpos_next.c.o: CMakeFiles/push_swap.dir/flags.make
CMakeFiles/push_swap.dir/libft/lst/ft_arerelpos_next.c.o: ../libft/lst/ft_arerelpos_next.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/Scarlett/42Projects/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building C object CMakeFiles/push_swap.dir/libft/lst/ft_arerelpos_next.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/push_swap.dir/libft/lst/ft_arerelpos_next.c.o   -c /Users/Scarlett/42Projects/push_swap/libft/lst/ft_arerelpos_next.c

CMakeFiles/push_swap.dir/libft/lst/ft_arerelpos_next.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/push_swap.dir/libft/lst/ft_arerelpos_next.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/Scarlett/42Projects/push_swap/libft/lst/ft_arerelpos_next.c > CMakeFiles/push_swap.dir/libft/lst/ft_arerelpos_next.c.i

CMakeFiles/push_swap.dir/libft/lst/ft_arerelpos_next.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/push_swap.dir/libft/lst/ft_arerelpos_next.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/Scarlett/42Projects/push_swap/libft/lst/ft_arerelpos_next.c -o CMakeFiles/push_swap.dir/libft/lst/ft_arerelpos_next.c.s

CMakeFiles/push_swap.dir/libft/lst/ft_arerelpos_next.c.o.requires:

.PHONY : CMakeFiles/push_swap.dir/libft/lst/ft_arerelpos_next.c.o.requires

CMakeFiles/push_swap.dir/libft/lst/ft_arerelpos_next.c.o.provides: CMakeFiles/push_swap.dir/libft/lst/ft_arerelpos_next.c.o.requires
	$(MAKE) -f CMakeFiles/push_swap.dir/build.make CMakeFiles/push_swap.dir/libft/lst/ft_arerelpos_next.c.o.provides.build
.PHONY : CMakeFiles/push_swap.dir/libft/lst/ft_arerelpos_next.c.o.provides

CMakeFiles/push_swap.dir/libft/lst/ft_arerelpos_next.c.o.provides.build: CMakeFiles/push_swap.dir/libft/lst/ft_arerelpos_next.c.o


CMakeFiles/push_swap.dir/libft/lst/ft_getlst_maxval.c.o: CMakeFiles/push_swap.dir/flags.make
CMakeFiles/push_swap.dir/libft/lst/ft_getlst_maxval.c.o: ../libft/lst/ft_getlst_maxval.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/Scarlett/42Projects/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building C object CMakeFiles/push_swap.dir/libft/lst/ft_getlst_maxval.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/push_swap.dir/libft/lst/ft_getlst_maxval.c.o   -c /Users/Scarlett/42Projects/push_swap/libft/lst/ft_getlst_maxval.c

CMakeFiles/push_swap.dir/libft/lst/ft_getlst_maxval.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/push_swap.dir/libft/lst/ft_getlst_maxval.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/Scarlett/42Projects/push_swap/libft/lst/ft_getlst_maxval.c > CMakeFiles/push_swap.dir/libft/lst/ft_getlst_maxval.c.i

CMakeFiles/push_swap.dir/libft/lst/ft_getlst_maxval.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/push_swap.dir/libft/lst/ft_getlst_maxval.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/Scarlett/42Projects/push_swap/libft/lst/ft_getlst_maxval.c -o CMakeFiles/push_swap.dir/libft/lst/ft_getlst_maxval.c.s

CMakeFiles/push_swap.dir/libft/lst/ft_getlst_maxval.c.o.requires:

.PHONY : CMakeFiles/push_swap.dir/libft/lst/ft_getlst_maxval.c.o.requires

CMakeFiles/push_swap.dir/libft/lst/ft_getlst_maxval.c.o.provides: CMakeFiles/push_swap.dir/libft/lst/ft_getlst_maxval.c.o.requires
	$(MAKE) -f CMakeFiles/push_swap.dir/build.make CMakeFiles/push_swap.dir/libft/lst/ft_getlst_maxval.c.o.provides.build
.PHONY : CMakeFiles/push_swap.dir/libft/lst/ft_getlst_maxval.c.o.provides

CMakeFiles/push_swap.dir/libft/lst/ft_getlst_maxval.c.o.provides.build: CMakeFiles/push_swap.dir/libft/lst/ft_getlst_maxval.c.o


# Object files for target push_swap
push_swap_OBJECTS = \
"CMakeFiles/push_swap.dir/srcs/push_swap.c.o" \
"CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_convert_argv.c.o" \
"CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_exec_s.c.o" \
"CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_exec_p.c.o" \
"CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_exec_r.c.o" \
"CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_opp.c.o" \
"CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_ops.c.o" \
"CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_oprr.c.o" \
"CMakeFiles/push_swap.dir/libft/lst/ft_arerelpos_next.c.o" \
"CMakeFiles/push_swap.dir/libft/lst/ft_getlst_maxval.c.o"

# External object files for target push_swap
push_swap_EXTERNAL_OBJECTS =

push_swap: CMakeFiles/push_swap.dir/srcs/push_swap.c.o
push_swap: CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_convert_argv.c.o
push_swap: CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_exec_s.c.o
push_swap: CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_exec_p.c.o
push_swap: CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_exec_r.c.o
push_swap: CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_opp.c.o
push_swap: CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_ops.c.o
push_swap: CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_oprr.c.o
push_swap: CMakeFiles/push_swap.dir/libft/lst/ft_arerelpos_next.c.o
push_swap: CMakeFiles/push_swap.dir/libft/lst/ft_getlst_maxval.c.o
push_swap: CMakeFiles/push_swap.dir/build.make
push_swap: ../libft/libft.a
push_swap: CMakeFiles/push_swap.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/Scarlett/42Projects/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Linking C executable push_swap"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/push_swap.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/push_swap.dir/build: push_swap

.PHONY : CMakeFiles/push_swap.dir/build

CMakeFiles/push_swap.dir/requires: CMakeFiles/push_swap.dir/srcs/push_swap.c.o.requires
CMakeFiles/push_swap.dir/requires: CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_convert_argv.c.o.requires
CMakeFiles/push_swap.dir/requires: CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_exec_s.c.o.requires
CMakeFiles/push_swap.dir/requires: CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_exec_p.c.o.requires
CMakeFiles/push_swap.dir/requires: CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_exec_r.c.o.requires
CMakeFiles/push_swap.dir/requires: CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_opp.c.o.requires
CMakeFiles/push_swap.dir/requires: CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_ops.c.o.requires
CMakeFiles/push_swap.dir/requires: CMakeFiles/push_swap.dir/libft/push_swap/ft_ps_oprr.c.o.requires
CMakeFiles/push_swap.dir/requires: CMakeFiles/push_swap.dir/libft/lst/ft_arerelpos_next.c.o.requires
CMakeFiles/push_swap.dir/requires: CMakeFiles/push_swap.dir/libft/lst/ft_getlst_maxval.c.o.requires

.PHONY : CMakeFiles/push_swap.dir/requires

CMakeFiles/push_swap.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/push_swap.dir/cmake_clean.cmake
.PHONY : CMakeFiles/push_swap.dir/clean

CMakeFiles/push_swap.dir/depend:
	cd /Users/Scarlett/42Projects/push_swap/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/Scarlett/42Projects/push_swap /Users/Scarlett/42Projects/push_swap /Users/Scarlett/42Projects/push_swap/cmake-build-debug /Users/Scarlett/42Projects/push_swap/cmake-build-debug /Users/Scarlett/42Projects/push_swap/cmake-build-debug/CMakeFiles/push_swap.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/push_swap.dir/depend

