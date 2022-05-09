#include <iostream>

using namespace std;
class AdjacencyMatrix{
    private:
        int nodes;
        int **adjMatrix;           
    public:
        AdjacencyMatrix(int nodes){
            this->nodes = nodes;
            adjMatrix = new int *[nodes];
            for(int i=0;i<nodes;i++){
                adjMatrix[i] = new int[nodes];
                for(int j=0;j<nodes;j++){
                    adjMatrix[i][j] = 0;
                }
            }
        }

        void display(){
            for(int i=0;i<nodes;i++){
                for(int j=0;j<nodes;j++){
                    cout<<adjMatrix[i][j]<<" ";
                }
                cout<<""<<endl;
            }
        }

        void add_edge(int origin,int destination){
            if(origin <0 || destination < 0 || origin >= nodes || destination >= nodes){
                cout<<"Invalid Node"<<endl;
                return;
            }
            adjMatrix[origin][destination] = 1;
        }

        void delete_edge(int origin,int destination){
            if(origin <0 || destination < 0 || origin >= nodes || destination >= nodes){
                cout<<"Invalid Node"<<endl;
                return;
            }
            adjMatrix[origin][destination] = 0;
        }
};

int main(){
    AdjacencyMatrix mat(5);
    mat.display();
    mat.add_edge(0,1);
    cout<<"---------------"<<endl;
    mat.display();
    mat.delete_edge(0,1);
    cout<<"---------------"<<endl;
    mat.display();
    return 0;
}