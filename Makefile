CXX = g++
CXXFLAGS = -I./include -std=c++20
SRCS = $(wildcard src/*.cpp)

main: $(SRCS)
	$(CXX) $(CXXFLAGS) $(SRCS) -o bin/main