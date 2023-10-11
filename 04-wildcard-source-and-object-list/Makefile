##############
#  Patterns  #
##############

EXECUTABLE_NAME=main
CXX=g++
CXX_STANDARD=c++17
CXX_WARNINGS=-Wall -Wextra -Wpedantic
CXX_FLAGS=$(CXX_WARNINGS) -std=$(CXX_STANDARD)
LDFLAGS=
COMPILER_CALL=$(CXX) $(CXX_FLAGS)
CXX_OBJECTS = main.o add.o sub.o

build: $(CXX_OBJECTS)
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