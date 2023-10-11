DEBUG_MODE=1
CXX=g++
CXX_STANDARD=c++17
CXX_WARNINGS=-Wall -Wpedantic -Wextra
CXX_FLAGS=$(CXX_WARNINGS) -std=$(CXX_STANDARD)
LDFLAGS=
COMPILER_CALL=$(CXX) $(CXX_FLAGS)

ifeq ($(DEBUG_MODE), 1)
CXX_FLAGS+= -g -O0
EXECUTABLE_NAME=mainDebug
else
CXX_FLAGS+= -O3
EXECUTABLE_NAME=mainRelease
endif


build:
		$(COMPILER_CALL) -c add.cpp
		$(COMPILER_CALL) -c sub.cpp
		$(COMPILER_CALL) -c main.cpp
		$(COMPILER_CALL) main.o add.o sub.o -o $(EXECUTABLE_NAME)

run:
		./$(EXECUTABLE_NAME)

clean:
		rm -f $(EXECUTABLE_NAME)
		rm -f *.o
