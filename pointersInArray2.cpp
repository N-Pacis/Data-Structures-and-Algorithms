#include <iostream>

using namespace std;

int main(){
    int k = 10;
    int *x;
    x =&k;
    for(int n=0;n<10;n++){
        int *memory;
        memory = x + n;
        int b = (*x+n);
        cout<<"The value of memory "<<*memory<<endl;
    }

}