cmake_minimum_required(VERSION 3.25)
project(graph_puzzle_game_taannaayyy)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(src)
include_directories(src/List)
include_directories(src/List/Graph)

add_executable(graph_puzzle_game_taannaayyy
        src/List/Graph/Edge.cpp
        src/List/Graph/Edge.h
        src/List/Graph/EdgeList.cpp
        src/List/Graph/EdgeList.h
        src/List/Graph/Graph.cpp
        src/List/Graph/Graph.h src/Array/DisjointSet.cpp src/Array/Set.cpp src/General/AbstractGraph.cpp src/General/Path.cpp src/List/Queue.cpp src/List/Node.cpp src/Array/Heap/Minheap.cpp src/Array/Heap/Heap.cpp src/Array/Heap/HeapNode.cpp src/main.h src/main.cpp)
