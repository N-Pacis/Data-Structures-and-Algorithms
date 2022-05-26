#include <iostream>
#include <list>

using namespace std;

class Graph{
    int numVertices;
    list<int>* adjLists;
    bool* visited;
};