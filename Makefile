CXX      := -g++
LDFLAGS  := -L/usr/lib -lstdc++ -lm
BUILD    := ./build
TARGET   := VideoLibraryApp
INCLUDE  := -Iincludes/
SRC      :=                      \
   $(wildcard src/*.cpp)         \

all: build compile run

compile: build
	g++ -o $(BUILD)/$(TARGET) $(INCLUDE) $(SRC)

run: build compile
	./$(BUILD)/$(TARGET)

build:
	@mkdir -p $(BUILD)

clean:
	-@rm -rvf $(BUILD)
