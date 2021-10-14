#include <iostream>
using namespace std;
int main(int argc,char * argv[]){
    for(int i=1;i<argc;i++){
        cout<< "Value:"<<i<<":"<<argv[i]<<endl;
    }
    return 0;
}