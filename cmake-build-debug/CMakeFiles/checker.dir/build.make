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
CMAKE_SOURCE_DIR = /Users/Scarlett/push_swap

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/Scarlett/push_swap/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/checker.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/checker.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/checker.dir/flags.make

CMakeFiles/checker.dir/srcs/checker.c.o: CMakeFiles/checker.dir/flags.make
CMakeFiles/checker.dir/srcs/checker.c.o: ../srcs/checker.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/Scarlett/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/checker.dir/srcs/checker.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/checker.dir/srcs/checker.c.o   -c /Users/Scarlett/push_swap/srcs/checker.c

CMakeFiles/checker.dir/srcs/checker.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/checker.dir/srcs/checker.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/Scarlett/push_swap/srcs/checker.c > CMakeFiles/checker.dir/srcs/checker.c.i

CMakeFiles/checker.dir/srcs/checker.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/checker.dir/srcs/checker.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/Scarlett/push_swap/srcs/checker.c -o CMakeFiles/checker.dir/srcs/checker.c.s

CMakeFiles/checker.dir/srcs/checker.c.o.requires:

.PHONY : CMakeFiles/checker.dir/srcs/checker.c.o.requires

CMakeFiles/checker.dir/srcs/checker.c.o.provides: CMakeFiles/checker.dir/srcs/checker.c.o.requires
	$(MAKE) -f CMakeFiles/checker.dir/build.make CMakeFiles/checker.dir/srcs/checker.c.o.provides.build
.PHONY : CMakeFiles/checker.dir/srcs/checker.c.o.provides

CMakeFiles/checker.dir/srcs/checker.c.o.provides.build: CMakeFiles/checker.dir/srcs/checker.c.o


CMakeFiles/checker.dir/libft/push_swap/ft_ps_convert_argv.c.o: CMakeFiles/checker.dir/flags.make
CMakeFiles/checker.dir/libft/push_swap/ft_ps_convert_argv.c.o: ../libft/push_swap/ft_ps_convert_argv.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/Scarlett/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/checker.dir/libft/push_swap/ft_ps_convert_argv.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/checker.dir/libft/push_swap/ft_ps_convert_argv.c.o   -c /Users/Scarlett/push_swap/libft/push_swap/ft_ps_convert_argv.c

CMakeFiles/checker.dir/libft/push_swap/ft_ps_convert_argv.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/checker.dir/libft/push_swap/ft_ps_convert_argv.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/Scarlett/push_swap/libft/push_swap/ft_ps_convert_argv.c > CMakeFiles/checker.dir/libft/push_swap/ft_ps_convert_argv.c.i

CMakeFiles/checker.dir/libft/push_swap/ft_ps_convert_argv.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/checker.dir/libft/push_swap/ft_ps_convert_argv.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/Scarlett/push_swap/libft/push_swap/ft_ps_convert_argv.c -o CMakeFiles/checker.dir/libft/push_swap/ft_ps_convert_argv.c.s

CMakeFiles/checker.dir/libft/push_swap/ft_ps_convert_argv.c.o.requires:

.PHONY : CMakeFiles/checker.dir/libft/push_swap/ft_ps_convert_argv.c.o.requires

CMakeFiles/checker.dir/libft/push_swap/ft_ps_convert_argv.c.o.provides: CMakeFiles/checker.dir/libft/push_swap/ft_ps_convert_argv.c.o.requires
	$(MAKE) -f CMakeFiles/checker.dir/build.make CMakeFiles/checker.dir/libft/push_swap/ft_ps_convert_argv.c.o.provides.build
.PHONY : CMakeFiles/checker.dir/libft/push_swap/ft_ps_convert_argv.c.o.provides

CMakeFiles/checker.dir/libft/push_swap/ft_ps_convert_argv.c.o.provides.build: CMakeFiles/checker.dir/libft/push_swap/ft_ps_convert_argv.c.o


CMakeFiles/checker.dir/libft/push_swap/ft_ps_exec_s.c.o: CMakeFiles/checker.dir/flags.make
CMakeFiles/checker.dir/libft/push_swap/ft_ps_exec_s.c.o: ../libft/push_swap/ft_ps_exec_s.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/Scarlett/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/checker.dir/libft/push_swap/ft_ps_exec_s.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/checker.dir/libft/push_swap/ft_ps_exec_s.c.o   -c /Users/Scarlett/push_swap/libft/push_swap/ft_ps_exec_s.c

CMakeFiles/checker.dir/libft/push_swap/ft_ps_exec_s.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/checker.dir/libft/push_swap/ft_ps_exec_s.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/Scarlett/push_swap/libft/push_swap/ft_ps_exec_s.c > CMakeFiles/checker.dir/libft/push_swap/ft_ps_exec_s.c.i

CMakeFiles/checker.dir/libft/push_swap/ft_ps_exec_s.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/checker.dir/libft/push_swap/ft_ps_exec_s.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/Scarlett/push_swap/libft/push_swap/ft_ps_exec_s.c -o CMakeFiles/checker.dir/libft/push_swap/ft_ps_exec_s.c.s

CMakeFiles/checker.dir/libft/push_swap/ft_ps_exec_s.c.o.requires:

.PHONY : CMakeFiles/checker.dir/libft/push_swap/ft_ps_exec_s.c.o.requires

CMakeFiles/checker.dir/libft/push_swap/ft_ps_exec_s.c.o.provides: CMakeFiles/checker.dir/libft/push_swap/ft_ps_exec_s.c.o.requires
	$(MAKE) -f CMakeFiles/checker.dir/build.make CMakeFiles/checker.dir/libft/push_swap/ft_ps_exec_s.c.o.provides.build
.PHONY : CMakeFiles/checker.dir/libft/push_swap/ft_ps_exec_s.c.o.provides

CMakeFiles/checker.dir/libft/push_swap/ft_ps_exec_s.c.o.provides.build: CMakeFiles/checker.dir/libft/push_swap/ft_ps_exec_s.c.o


CMakeFiles/checker.dir/libft/push_swap/ft_ps_exec_p.c.o: CMakeFiles/checker.dir/flags.make
CMakeFiles/checker.dir/libft/push_swap/ft_ps_exec_p.c.o: ../libft/push_swap/ft_ps_exec_p.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/Scarlett/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/checker.dir/libft/push_swap/ft_ps_exec_p.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/checker.dir/libft/push_swap/ft_ps_exec_p.c.o   -c /Users/Scarlett/push_swap/libft/push_swap/ft_ps_exec_p.c

CMakeFiles/checker.dir/libft/push_swap/ft_ps_exec_p.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/checker.dir/libft/push_swap/ft_ps_exec_p.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/Scarlett/push_swap/libft/push_swap/ft_ps_exec_p.c > CMakeFiles/checker.dir/libft/push_swap/ft_ps_exec_p.c.i

CMakeFiles/checker.dir/libft/push_swap/ft_ps_exec_p.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/checker.dir/libft/push_swap/ft_ps_exec_p.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/Scarlett/push_swap/libft/push_swap/ft_ps_exec_p.c -o CMakeFiles/checker.dir/libft/push_swap/ft_ps_exec_p.c.s

CMakeFiles/checker.dir/libft/push_swap/ft_ps_exec_p.c.o.requires:

.PHONY : CMakeFiles/checker.dir/libft/push_swap/ft_ps_exec_p.c.o.requires

CMakeFiles/checker.dir/libft/push_swap/ft_ps_exec_p.c.o.provides: CMakeFiles/checker.dir/libft/push_swap/ft_ps_exec_p.c.o.requires
	$(MAKE) -f CMakeFiles/checker.dir/build.make CMakeFiles/checker.dir/libft/push_swap/ft_ps_exec_p.c.o.provides.build
.PHONY : CMakeFiles/checker.dir/libft/push_swap/ft_ps_exec_p.c.o.provides

CMakeFiles/checker.dir/libft/push_swap/ft_ps_exec_p.c.o.provides.build: CMakeFiles/checker.dir/libft/push_swap/ft_ps_exec_p.c.o


CMakeFiles/checker.dir/libft/push_swap/ft_ps_exec_r.c.o: CMakeFiles/checker.dir/flags.make
CMakeFiles/checker.dir/libft/push_swap/ft_ps_exec_r.c.o: ../libft/push_swap/ft_ps_exec_r.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/Scarlett/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/checker.dir/libft/push_swap/ft_ps_exec_r.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/checker.dir/libft/push_swap/ft_ps_exec_r.c.o   -c /Users/Scarlett/push_swap/libft/push_swap/ft_ps_exec_r.c

CMakeFiles/checker.dir/libft/push_swap/ft_ps_exec_r.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/checker.dir/libft/push_swap/ft_ps_exec_r.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/Scarlett/push_swap/libft/push_swap/ft_ps_exec_r.c > CMakeFiles/checker.dir/libft/push_swap/ft_ps_exec_r.c.i

CMakeFiles/checker.dir/libft/push_swap/ft_ps_exec_r.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/checker.dir/libft/push_swap/ft_ps_exec_r.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/Scarlett/push_swap/libft/push_swap/ft_ps_exec_r.c -o CMakeFiles/checker.dir/libft/push_swap/ft_ps_exec_r.c.s

CMakeFiles/checker.dir/libft/push_swap/ft_ps_exec_r.c.o.requires:

.PHONY : CMakeFiles/checker.dir/libft/push_swap/ft_ps_exec_r.c.o.requires

CMakeFiles/checker.dir/libft/push_swap/ft_ps_exec_r.c.o.provides: CMakeFiles/checker.dir/libft/push_swap/ft_ps_exec_r.c.o.requires
	$(MAKE) -f CMakeFiles/checker.dir/build.make CMakeFiles/checker.dir/libft/push_swap/ft_ps_exec_r.c.o.provides.build
.PHONY : CMakeFiles/checker.dir/libft/push_swap/ft_ps_exec_r.c.o.provides

CMakeFiles/checker.dir/libft/push_swap/ft_ps_exec_r.c.o.provides.build: CMakeFiles/checker.dir/libft/push_swap/ft_ps_exec_r.c.o


CMakeFiles/checker.dir/libft/push_swap/ft_ps_opp.c.o: CMakeFiles/checker.dir/flags.make
CMakeFiles/checker.dir/libft/push_swap/ft_ps_opp.c.o: ../libft/push_swap/ft_ps_opp.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/Scarlett/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/checker.dir/libft/push_swap/ft_ps_opp.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/checker.dir/libft/push_swap/ft_ps_opp.c.o   -c /Users/Scarlett/push_swap/libft/push_swap/ft_ps_opp.c

CMakeFiles/checker.dir/libft/push_swap/ft_ps_opp.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/checker.dir/libft/push_swap/ft_ps_opp.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/Scarlett/push_swap/libft/push_swap/ft_ps_opp.c > CMakeFiles/checker.dir/libft/push_swap/ft_ps_opp.c.i

CMakeFiles/checker.dir/libft/push_swap/ft_ps_opp.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/checker.dir/libft/push_swap/ft_ps_opp.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/Scarlett/push_swap/libft/push_swap/ft_ps_opp.c -o CMakeFiles/checker.dir/libft/push_swap/ft_ps_opp.c.s

CMakeFiles/checker.dir/libft/push_swap/ft_ps_opp.c.o.requires:

.PHONY : CMakeFiles/checker.dir/libft/push_swap/ft_ps_opp.c.o.requires

CMakeFiles/checker.dir/libft/push_swap/ft_ps_opp.c.o.provides: CMakeFiles/checker.dir/libft/push_swap/ft_ps_opp.c.o.requires
	$(MAKE) -f CMakeFiles/checker.dir/build.make CMakeFiles/checker.dir/libft/push_swap/ft_ps_opp.c.o.provides.build
.PHONY : CMakeFiles/checker.dir/libft/push_swap/ft_ps_opp.c.o.provides

CMakeFiles/checker.dir/libft/push_swap/ft_ps_opp.c.o.provides.build: CMakeFiles/checker.dir/libft/push_swap/ft_ps_opp.c.o


CMakeFiles/checker.dir/libft/push_swap/ft_ps_ops.c.o: CMakeFiles/checker.dir/flags.make
CMakeFiles/checker.dir/libft/push_swap/ft_ps_ops.c.o: ../libft/push_swap/ft_ps_ops.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/Scarlett/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object CMakeFiles/checker.dir/libft/push_swap/ft_ps_ops.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/checker.dir/libft/push_swap/ft_ps_ops.c.o   -c /Users/Scarlett/push_swap/libft/push_swap/ft_ps_ops.c

CMakeFiles/checker.dir/libft/push_swap/ft_ps_ops.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/checker.dir/libft/push_swap/ft_ps_ops.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/Scarlett/push_swap/libft/push_swap/ft_ps_ops.c > CMakeFiles/checker.dir/libft/push_swap/ft_ps_ops.c.i

CMakeFiles/checker.dir/libft/push_swap/ft_ps_ops.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/checker.dir/libft/push_swap/ft_ps_ops.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/Scarlett/push_swap/libft/push_swap/ft_ps_ops.c -o CMakeFiles/checker.dir/libft/push_swap/ft_ps_ops.c.s

CMakeFiles/checker.dir/libft/push_swap/ft_ps_ops.c.o.requires:

.PHONY : CMakeFiles/checker.dir/libft/push_swap/ft_ps_ops.c.o.requires

CMakeFiles/checker.dir/libft/push_swap/ft_ps_ops.c.o.provides: CMakeFiles/checker.dir/libft/push_swap/ft_ps_ops.c.o.requires
	$(MAKE) -f CMakeFiles/checker.dir/build.make CMakeFiles/checker.dir/libft/push_swap/ft_ps_ops.c.o.provides.build
.PHONY : CMakeFiles/checker.dir/libft/push_swap/ft_ps_ops.c.o.provides

CMakeFiles/checker.dir/libft/push_swap/ft_ps_ops.c.o.provides.build: CMakeFiles/checker.dir/libft/push_swap/ft_ps_ops.c.o


CMakeFiles/checker.dir/libft/push_swap/ft_ps_oprr.c.o: CMakeFiles/checker.dir/flags.make
CMakeFiles/checker.dir/libft/push_swap/ft_ps_oprr.c.o: ../libft/push_swap/ft_ps_oprr.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/Scarlett/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building C object CMakeFiles/checker.dir/libft/push_swap/ft_ps_oprr.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/checker.dir/libft/push_swap/ft_ps_oprr.c.o   -c /Users/Scarlett/push_swap/libft/push_swap/ft_ps_oprr.c

CMakeFiles/checker.dir/libft/push_swap/ft_ps_oprr.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/checker.dir/libft/push_swap/ft_ps_oprr.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/Scarlett/push_swap/libft/push_swap/ft_ps_oprr.c > CMakeFiles/checker.dir/libft/push_swap/ft_ps_oprr.c.i

CMakeFiles/checker.dir/libft/push_swap/ft_ps_oprr.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/checker.dir/libft/push_swap/ft_ps_oprr.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/Scarlett/push_swap/libft/push_swap/ft_ps_oprr.c -o CMakeFiles/checker.dir/libft/push_swap/ft_ps_oprr.c.s

CMakeFiles/checker.dir/libft/push_swap/ft_ps_oprr.c.o.requires:

.PHONY : CMakeFiles/checker.dir/libft/push_swap/ft_ps_oprr.c.o.requires

CMakeFiles/checker.dir/libft/push_swap/ft_ps_oprr.c.o.provides: CMakeFiles/checker.dir/libft/push_swap/ft_ps_oprr.c.o.requires
	$(MAKE) -f CMakeFiles/checker.dir/build.make CMakeFiles/checker.dir/libft/push_swap/ft_ps_oprr.c.o.provides.build
.PHONY : CMakeFiles/checker.dir/libft/push_swap/ft_ps_oprr.c.o.provides

CMakeFiles/checker.dir/libft/push_swap/ft_ps_oprr.c.o.provides.build: CMakeFiles/checker.dir/libft/push_swap/ft_ps_oprr.c.o


CMakeFiles/checker.dir/libft/lst/ft_is_abspos_is_relpos.c.o: CMakeFiles/checker.dir/flags.make
CMakeFiles/checker.dir/libft/lst/ft_is_abspos_is_relpos.c.o: ../libft/lst/ft_is_abspos_is_relpos.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/Scarlett/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building C object CMakeFiles/checker.dir/libft/lst/ft_is_abspos_is_relpos.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/checker.dir/libft/lst/ft_is_abspos_is_relpos.c.o   -c /Users/Scarlett/push_swap/libft/lst/ft_is_abspos_is_relpos.c

CMakeFiles/checker.dir/libft/lst/ft_is_abspos_is_relpos.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/checker.dir/libft/lst/ft_is_abspos_is_relpos.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/Scarlett/push_swap/libft/lst/ft_is_abspos_is_relpos.c > CMakeFiles/checker.dir/libft/lst/ft_is_abspos_is_relpos.c.i

CMakeFiles/checker.dir/libft/lst/ft_is_abspos_is_relpos.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/checker.dir/libft/lst/ft_is_abspos_is_relpos.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/Scarlett/push_swap/libft/lst/ft_is_abspos_is_relpos.c -o CMakeFiles/checker.dir/libft/lst/ft_is_abspos_is_relpos.c.s

CMakeFiles/checker.dir/libft/lst/ft_is_abspos_is_relpos.c.o.requires:

.PHONY : CMakeFiles/checker.dir/libft/lst/ft_is_abspos_is_relpos.c.o.requires

CMakeFiles/checker.dir/libft/lst/ft_is_abspos_is_relpos.c.o.provides: CMakeFiles/checker.dir/libft/lst/ft_is_abspos_is_relpos.c.o.requires
	$(MAKE) -f CMakeFiles/checker.dir/build.make CMakeFiles/checker.dir/libft/lst/ft_is_abspos_is_relpos.c.o.provides.build
.PHONY : CMakeFiles/checker.dir/libft/lst/ft_is_abspos_is_relpos.c.o.provides

CMakeFiles/checker.dir/libft/lst/ft_is_abspos_is_relpos.c.o.provides.build: CMakeFiles/checker.dir/libft/lst/ft_is_abspos_is_relpos.c.o


CMakeFiles/checker.dir/libft/lst/ft_arerelpos_next.c.o: CMakeFiles/checker.dir/flags.make
CMakeFiles/checker.dir/libft/lst/ft_arerelpos_next.c.o: ../libft/lst/ft_arerelpos_next.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/Scarlett/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building C object CMakeFiles/checker.dir/libft/lst/ft_arerelpos_next.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/checker.dir/libft/lst/ft_arerelpos_next.c.o   -c /Users/Scarlett/push_swap/libft/lst/ft_arerelpos_next.c

CMakeFiles/checker.dir/libft/lst/ft_arerelpos_next.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/checker.dir/libft/lst/ft_arerelpos_next.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/Scarlett/push_swap/libft/lst/ft_arerelpos_next.c > CMakeFiles/checker.dir/libft/lst/ft_arerelpos_next.c.i

CMakeFiles/checker.dir/libft/lst/ft_arerelpos_next.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/checker.dir/libft/lst/ft_arerelpos_next.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/Scarlett/push_swap/libft/lst/ft_arerelpos_next.c -o CMakeFiles/checker.dir/libft/lst/ft_arerelpos_next.c.s

CMakeFiles/checker.dir/libft/lst/ft_arerelpos_next.c.o.requires:

.PHONY : CMakeFiles/checker.dir/libft/lst/ft_arerelpos_next.c.o.requires

CMakeFiles/checker.dir/libft/lst/ft_arerelpos_next.c.o.provides: CMakeFiles/checker.dir/libft/lst/ft_arerelpos_next.c.o.requires
	$(MAKE) -f CMakeFiles/checker.dir/build.make CMakeFiles/checker.dir/libft/lst/ft_arerelpos_next.c.o.provides.build
.PHONY : CMakeFiles/checker.dir/libft/lst/ft_arerelpos_next.c.o.provides

CMakeFiles/checker.dir/libft/lst/ft_arerelpos_next.c.o.provides.build: CMakeFiles/checker.dir/libft/lst/ft_arerelpos_next.c.o


CMakeFiles/checker.dir/srcs/12.c.o: CMakeFiles/checker.dir/flags.make
CMakeFiles/checker.dir/srcs/12.c.o: ../srcs/12.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/Scarlett/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building C object CMakeFiles/checker.dir/srcs/12.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/checker.dir/srcs/12.c.o   -c /Users/Scarlett/push_swap/srcs/12.c

CMakeFiles/checker.dir/srcs/12.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/checker.dir/srcs/12.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/Scarlett/push_swap/srcs/12.c > CMakeFiles/checker.dir/srcs/12.c.i

CMakeFiles/checker.dir/srcs/12.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/checker.dir/srcs/12.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/Scarlett/push_swap/srcs/12.c -o CMakeFiles/checker.dir/srcs/12.c.s

CMakeFiles/checker.dir/srcs/12.c.o.requires:

.PHONY : CMakeFiles/checker.dir/srcs/12.c.o.requires

CMakeFiles/checker.dir/srcs/12.c.o.provides: CMakeFiles/checker.dir/srcs/12.c.o.requires
	$(MAKE) -f CMakeFiles/checker.dir/build.make CMakeFiles/checker.dir/srcs/12.c.o.provides.build
.PHONY : CMakeFiles/checker.dir/srcs/12.c.o.provides

CMakeFiles/checker.dir/srcs/12.c.o.provides.build: CMakeFiles/checker.dir/srcs/12.c.o


# Object files for target checker
checker_OBJECTS = \
"CMakeFiles/checker.dir/srcs/checker.c.o" \
"CMakeFiles/checker.dir/libft/push_swap/ft_ps_convert_argv.c.o" \
"CMakeFiles/checker.dir/libft/push_swap/ft_ps_exec_s.c.o" \
"CMakeFiles/checker.dir/libft/push_swap/ft_ps_exec_p.c.o" \
"CMakeFiles/checker.dir/libft/push_swap/ft_ps_exec_r.c.o" \
"CMakeFiles/checker.dir/libft/push_swap/ft_ps_opp.c.o" \
"CMakeFiles/checker.dir/libft/push_swap/ft_ps_ops.c.o" \
"CMakeFiles/checker.dir/libft/push_swap/ft_ps_oprr.c.o" \
"CMakeFiles/checker.dir/libft/lst/ft_is_abspos_is_relpos.c.o" \
"CMakeFiles/checker.dir/libft/lst/ft_arerelpos_next.c.o" \
"CMakeFiles/checker.dir/srcs/12.c.o"

# External object files for target checker
checker_EXTERNAL_OBJECTS =

checker: CMakeFiles/checker.dir/srcs/checker.c.o
checker: CMakeFiles/checker.dir/libft/push_swap/ft_ps_convert_argv.c.o
checker: CMakeFiles/checker.dir/libft/push_swap/ft_ps_exec_s.c.o
checker: CMakeFiles/checker.dir/libft/push_swap/ft_ps_exec_p.c.o
checker: CMakeFiles/checker.dir/libft/push_swap/ft_ps_exec_r.c.o
checker: CMakeFiles/checker.dir/libft/push_swap/ft_ps_opp.c.o
checker: CMakeFiles/checker.dir/libft/push_swap/ft_ps_ops.c.o
checker: CMakeFiles/checker.dir/libft/push_swap/ft_ps_oprr.c.o
checker: CMakeFiles/checker.dir/libft/lst/ft_is_abspos_is_relpos.c.o
checker: CMakeFiles/checker.dir/libft/lst/ft_arerelpos_next.c.o
checker: CMakeFiles/checker.dir/srcs/12.c.o
checker: CMakeFiles/checker.dir/build.make
checker: ../libft/libft.a
checker: CMakeFiles/checker.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/Scarlett/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Linking C executable checker"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/checker.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/checker.dir/build: checker

.PHONY : CMakeFiles/checker.dir/build

CMakeFiles/checker.dir/requires: CMakeFiles/checker.dir/srcs/checker.c.o.requires
CMakeFiles/checker.dir/requires: CMakeFiles/checker.dir/libft/push_swap/ft_ps_convert_argv.c.o.requires
CMakeFiles/checker.dir/requires: CMakeFiles/checker.dir/libft/push_swap/ft_ps_exec_s.c.o.requires
CMakeFiles/checker.dir/requires: CMakeFiles/checker.dir/libft/push_swap/ft_ps_exec_p.c.o.requires
CMakeFiles/checker.dir/requires: CMakeFiles/checker.dir/libft/push_swap/ft_ps_exec_r.c.o.requires
CMakeFiles/checker.dir/requires: CMakeFiles/checker.dir/libft/push_swap/ft_ps_opp.c.o.requires
CMakeFiles/checker.dir/requires: CMakeFiles/checker.dir/libft/push_swap/ft_ps_ops.c.o.requires
CMakeFiles/checker.dir/requires: CMakeFiles/checker.dir/libft/push_swap/ft_ps_oprr.c.o.requires
CMakeFiles/checker.dir/requires: CMakeFiles/checker.dir/libft/lst/ft_is_abspos_is_relpos.c.o.requires
CMakeFiles/checker.dir/requires: CMakeFiles/checker.dir/libft/lst/ft_arerelpos_next.c.o.requires
CMakeFiles/checker.dir/requires: CMakeFiles/checker.dir/srcs/12.c.o.requires

.PHONY : CMakeFiles/checker.dir/requires

CMakeFiles/checker.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/checker.dir/cmake_clean.cmake
.PHONY : CMakeFiles/checker.dir/clean

CMakeFiles/checker.dir/depend:
	cd /Users/Scarlett/push_swap/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/Scarlett/push_swap /Users/Scarlett/push_swap /Users/Scarlett/push_swap/cmake-build-debug /Users/Scarlett/push_swap/cmake-build-debug /Users/Scarlett/push_swap/cmake-build-debug/CMakeFiles/checker.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/checker.dir/depend

