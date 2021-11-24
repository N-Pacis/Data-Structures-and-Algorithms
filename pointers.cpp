#include <iostream>

using namespace std;

int main(){
    int a =5;
    cout<<"Value of a is: "<<a<<endl;
    int b=6;
    cout<<"Value of b is: "<<b<<endl;
    int *d;
    d = &b;
    cout<<"Value of d is: "<<d<<endl;
    *d = a;
    cout<<"Value of d is: "<<*d<<endl;
    cout<<"Value of a is: "<<a<<endl;
    cout<<"Value of b is: "<<b<<endl;

}