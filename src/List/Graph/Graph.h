//
// Created by ta028963 on 12/14/2023.
//

#ifndef GRAPH_PUZZLE_GAME_TAANNAAYYY_GRAPH_H
#define GRAPH_PUZZLE_GAME_TAANNAAYYY_GRAPH_H


#include "EdgeList.h"
#include "../../General/AbstractGraph.h"
#include "string"
namespace list {

    class Graph : public AbstractGraph {
    private:
        EdgeList *edges;
    public:
        explicit Graph(int vertexCount);

        ~Graph();

        void addEdge(std::string from, std::string to);

        void addEdge(std::string from, std::string to, int weight);

        void connectedComponentsDisjointSet();

        Path *bellmanFord(int source);

        Path *dijkstra(int source);

        void prim();

    protected:
        void depthFirstSearch(bool *visited, int fromNode) override;

        void breadthFirstSearch(bool *visited, int startNode) override;

        Edge *edgeList(int &edgeCount) override;
    };
}

#endif //GRAPH_PUZZLE_GAME_TAANNAAYYY_GRAPH_H
