CXX = g++
CXXFLAGS = -I./include -std=c++17
SRCS = $(wildcard src/*.cpp)

main: $(SRCS)
	$(CXX) $(CXXFLAGS) $(SRCS) -o bin/main