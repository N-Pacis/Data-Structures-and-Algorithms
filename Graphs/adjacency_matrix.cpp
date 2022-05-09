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
};

int main(){
    AdjacencyMatrix mat(5);
    mat.display();
}