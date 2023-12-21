//
// Created by ta028963 on 12/14/2023.
//

#ifndef GRAPH_PUZZLE_GAME_TAANNAAYYY_EDGE_H
#define GRAPH_PUZZLE_GAME_TAANNAAYYY_EDGE_H


#include <string>

class Edge {
private:
    std::string from;
    std::string to;
    int weight;
    Edge* next;
public:
    Edge();
    Edge(std::string from, std::string to, int weight);
    void setNext(Edge* _next);
    Edge* getNext() const;
    std::string getFrom() const;
    std::string getTo() const;
    int getWeight() const;
};


#endif //GRAPH_PUZZLE_GAME_TAANNAAYYY_EDGE_H
