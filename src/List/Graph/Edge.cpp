//
// Created by ta028963 on 12/14/2023.
//


#include "Edge.h"

Edge::Edge(std::string from, std::string to, int weight) {
    this->from = from;
    this->to = to;
    this->weight = weight;
    next = nullptr;
}

void Edge::setNext(Edge *_next) {
    next = _next;
}

Edge *Edge::getNext() const{
    return next;
}

std::string Edge::getFrom() const{
    return from;
}

std::string Edge::getTo() const{
    return to;
}

int Edge::getWeight() const{
    return weight;
}

Edge::Edge() {

}
#include "Edge.h"
