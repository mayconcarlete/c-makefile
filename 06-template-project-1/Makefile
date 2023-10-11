DEBUG_MODE=1
ENABLE_WARNINGS=1
WARNING_AS_ERRORS=0

INCLUDE_DIR=include
SOURCE_DIR=src
BUILD_DIR=build

CXX=g++
CXX_STANDARD=c++17

ifeq ($(ENABLE_WARNINGS), 1)
CXX_WARNINGS=-Wall -Wpedantic -Wextra
else
CXX_WARNINGS=
endif

ifeq ($(WARNING_AS_ERRORS), 1)
CXX_WARNINGS+= -Werror
endif

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

all: create_build_dir build

build: $(CXX_OBJECTS)
	echo $(CXX_SOURCES)
	$(COMPILER_CALL) $(CXX_OBJECTS) $(LDFLAGS) -o $(BUILD_DIR)/$(EXECUTABLE_NAME)

create_build_dir:
	mkdir -p build
# mkdir -p creates a new folder if not exists 


$(BUILD_DIR)/%.o:$(SOURCE_DIR)/%.cpp
	$(COMPILER_CALL) -c $< -o $@

run:
	./$(BUILD_DIR)/$(EXECUTABLE_NAME)

clean:
	rm -f $(BUILD_DIR)/$(EXECUTABLE_NAME)
	rm -f $(BUILD_DIR)/*.o

###############
#### PHONY ####
###############
# indicates that the target isn't a file
.PHONY : build create_build_dir run clean