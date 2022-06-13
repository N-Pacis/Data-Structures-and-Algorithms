#include <iostream>
#include <list>
using namespace std;

class Graph{
    int numVertices;
    list<int> * adjList;
    bool * visited;

    public:
        Graph(int vertices);
        void add_edge(int src,int dst);
        void BFS(int start);
};

Graph::Graph(int vertices){
    numVertices = vertices;
    adjList = new list<int>[numVertices];
};

void Graph::add_edge(int src,int dst){
    adjList[src].push_back(dst);
    adjList[dst].push_back(src);
}

void Graph::BFS(int startVertex){
    visited = new bool[numVertices];
    for(int i=0;i<numVertices;i++){
        visited[i] = false;
    }

    list<int> queue;

    visited[startVertex] = true;
    queue.push_back(startVertex);

    list<int>::iterator i;

    while(!queue.empty()){
        int currVertex = queue.front();
        cout<< "Visited "<<currVertex<<" ";
        queue.pop_front();

        for(i = adjList[currVertex].begin();i != adjList[currVertex].end();++i){
            int adjVertex = *i;
            if(!visited[adjVertex]){
                visited[adjVertex] = true;
                queue.push_back(adjVertex);
            }
        }
    }
}

int main(){
    Graph g(4);
    g.add_edge(0,1);
    g.add_edge(0,2);
    g.add_edge(0,3);
    g.add_edge(1,3);
    g.add_edge(2,3);
    g.add_edge(3,3);

    g.BFS(1);
}