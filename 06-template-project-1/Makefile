DEBUG_MODE=1
INCLUDE_DIR=include
SOURCE_DIR=src
BUILD_DIR=build

CXX=g++
CXX_STANDARD=c++17
CXX_WARNINGS=-Wall -Wpedantic -Wextra

CXX_FLAGS=$(CXX_WARNINGS) -std=$(CXX_STANDARD)
CPP_FLAGS=-I $(INCLUDE_DIR)

LDFLAGS=


COMPILER_CALL=$(CXX) $(CXX_FLAGS) $(CPP_FLAGS)

ifeq ($(DEBUG_MODE), 1)
CXX_FLAGS+= -g -O0
EXECUTABLE_NAME=mainDebug
else
CXX_FLAGS+= -O3
EXECUTABLE_NAME=mainRelease
endif

CXX_SOURCES=$(wildcard $(SOURCE_DIR)/*.cpp)
CXX_OBJECTS=$(patsubst $(SOURCE_DIR)/%.cpp, $(BUILD_DIR)/%.o, $(CXX_SOURCES))

build: create_build_dir $(CXX_OBJECTS)
	echo $(CXX_SOURCES)
	$(COMPILER_CALL) $(CXX_OBJECTS) $(LDFLAGS) -o $(BUILD_DIR)/$(EXECUTABLE_NAME)

create_build_dir:
	mkdir build


$(BUILD_DIR)/%.o:$(SOURCE_DIR)/%.cpp
	$(COMPILER_CALL) -c $< -o $@

run:
	./$(BUILD_DIR)/$(EXECUTABLE_NAME)

clean:
	rm -f $(BUILD_DIR)/$(EXECUTABLE_NAME)
	rm -f $(BUILD_DIR)/*.o
