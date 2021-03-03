#Eleanor Barry, 24 November 2020

# Build and executable named test file
# The compiler: gcc for C program, define as g++ for C++
CC = g++

# Compiler flags
# -g adds debugging information to the executable file
# -Wall turns on most, but not all, compiler warnings
CFLAGS = -g -Wall

# Build the target executable
TARGET = test1

all: s(TARGET)

$(TARGET): Assignment6_Barry.cpp
  $(CC) $(CFLAGS) -o $(TARGET) Assignment6_Barry.cpp

clean:
  $(RM) $(TARGET)