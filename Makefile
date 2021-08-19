CXX = g++
LDFLAGS = -g
LDFLAGS += -Wall
LDFLAGS += -std=c++11
HEADERS = migration.hpp sqlite3.h 
EXECUTABLE = gigachad
default:
        $(CXX) $(LDFLAGS) sqlite3.c migration.cpp main.cpp -o $(EXECUTABLE)
clean:
        rm $(EXECUTABLE)