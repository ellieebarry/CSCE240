#Eleanor Barry, 30 September 4:15pm 2020

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

$(TARGET):main.cpp myfunction.h myfunction.cpp
  $(CC) $(CFLAGS) -o $(TARGET) main.cpp myfunction.cpp

clean:
  $(RM) $(TARGET)