#include <iostream>

using namespace std;

int main(){
    int array[5] = {10,2,3,7,17};
    int *p;
    p = array;

    for(int i=0;i<(sizeof(array)/sizeof(array[0]));i++){
        cout<<"Value at "<<i<<": "<<*(p+i)<<endl;
    }
}