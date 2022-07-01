#include <iostream>
#include<vector>
using namespace std;
void add_edge(vector<int> adj[], int s, int d)
{
    adj[s].push_back(d);
    adj[d].push_back(s);
}

void remove_edge(vector<int> adj[],int src,int dst){
    for(int i=0;i<adj[src].size();i++){
        if(adj[src][i] == dst){
            adj[src].erase(adj[src].begin()+i);
        }
    }
    for(int i=0;i<adj[dst].size();i++){
        if(adj[dst][i] == src){
            adj[dst].erase(adj[dst].begin() + i);
        }
    }
}

void print_graph(vector<int> adj[], int V)
{
    for (int d = 0; d < V; ++d)
    {
        cout << "\n Vertex " << d;
        for (auto x : adj[d])
        {
            cout << " -> " << x;
        }
        cout<<"\n";
    }
}

int main()
{
    int V = 5;

    vector<int> adj[V];

    add_edge(adj, 0, 1);
    add_edge(adj, 0, 2);
    add_edge(adj, 0, 3);
    add_edge(adj, 1, 2);
    add_edge(adj, 4, 0);
    add_edge(adj, 4, 2);
    print_graph(adj, V);
}