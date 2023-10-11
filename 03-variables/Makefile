###############
#  Variables  #
###############
# Note: Variables can only be strings
# Note: single or double quotes for variables names or values have no meaning to Make
# Common variables
# CC: Program for compiling C programs; default cc;
# CXX: Program for compiling c++ programs; default g++
# CFLAGS: Extra flags to give to the C compiler
# CXX_FLAGS: Extra flags to give to the c++ compiler
# LDFLAGS: Extra flags to give to the linker (-lmath/-lm for example)

# make -p to see pre defined variables
# we can pass variables when build the makefile, ex: make build CXXSTANDARD=c++14 will replace the c++17

DEBUG_MODE=1
EXECUTABLE_NAME=main
CXX_STANDARD=c++17
CXX_WARNINGS = -Wall -Wextra -Wpedantic
CXX=g++
CXX_FLAGS=$(CXX_WARNINGS) -std=$(CXX_STANDARD)
LDFLAGS=-lm

ifeq ($(DEBUG_MODE), 1)
CXX_FLAGS=-g -O0
else
CXX_FLAGS=-O3
endif

COMPILER_CALL = $(CXX) $(CXX_FLAGS)

build: main.o my_lib.o
		$(COMPILER_CALL) main.o my_lib.o $(LDFLAGS) -o $(EXECUTABLE_NAME)
main.o:
		$(COMPILER_CALL) main.cpp -c
my_lib.o:
		$(COMPILER_CALL) my_lib.cpp -c

run:
		./main

clean:
		rm -f *.o
		rm -f main