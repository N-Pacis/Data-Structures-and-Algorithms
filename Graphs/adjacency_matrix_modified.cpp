#include <iostream>

using namespace std;

void add_edge(int **adjMatrix,int src,int dst){
    adjMatrix[src][dst] = 1;
}

void remove_edge(int **adjMatrix,int src,int dst){
    adjMatrix[src][dst] = 0;
}

void display(int **adjMatrix,int V){
    for(int i=0;i<V;i++){
        for(int j=0;j<V;j++){
            cout<<adjMatrix[i][j]<<" ";
        }
        cout<<"\n";
    }
}

int main(){
    int V = 5;

    int **adjMatrix;
    adjMatrix = new int *[V];
    for(int i=0;i<V;i++){
        adjMatrix[i] = new int[V];
        for(int j=0;j<V;j++){
            adjMatrix[i][j] = 0;
        }
    }
}