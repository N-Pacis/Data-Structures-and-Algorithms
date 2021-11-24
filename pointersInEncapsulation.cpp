#include <iostream>

using namespace std;

class EncapsulationKilled{
    private: int x;
    public: 
        int readx(){
            return x;
        }
        int * exposex(){
            return &x;
        }
};

int main(){
    EncapsulationKilled killed;
    int * k = killed.exposex();
    *k = 10;
    cout<< "Value of x: "<<killed.readx()<<endl;
}