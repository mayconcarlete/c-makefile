##############
#  Patterns  #
##############
DEBUG_MODE=1
CXX=g++
CXX_STANDARD=c++17
CXX_WARNINGS=-Wall -Wextra -Wpedantic
CXX_FLAGS=$(CXX_WARNINGS) -std=$(CXX_STANDARD)
LDFLAGS=
COMPILER_CALL=$(CXX) $(CXX_FLAGS)

ifeq ($(DEBUG_MODE), 1)
CXX_FLAGS += -g -O0
EXECUTABLE_NAME=mainDebug
else
CXX_FLAGS += -O3
EXECUTABLE_NAME=mainRelease
endif


CXX_SOURCES = $(wildcard *.cpp) # get a list of .cpp files in the directory

CXX_OBJECTS = $(patsubst %.cpp, %.o, $(CXX_SOURCES)) # replace the string *.cpp to *.o based on a list provided.

build: $(CXX_OBJECTS)
	echo $(CXX_OBJECTS)
	$(COMPILER_CALL) $(CXX_OBJECTS) $(LDFLAGS) -o $(EXECUTABLE_NAME)

###############
#   patterns  #
###############
# $@: the file name of the target
# $<: the name of the first dependency
# $^: the name of all prerequisites
%.o:%.cpp
	$(COMPILER_CALL) -c $< -o $@

run:
	./$(EXECUTABLE_NAME)

clean:
	rm -f *.o
	rm -f $(EXECUTABLE_NAME)