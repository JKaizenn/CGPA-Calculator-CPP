CXX = g++
CXXFLAGS = -I./include -std=c++17

main: src/main.cpp
	$(CXX) $(CXXFLAGS) src/main.cpp -o bin/main