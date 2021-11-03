#include <iostream>
#include <string>

using namespace std;

int main(){
    string names[3] = {};
    int arrSize = sizeof(names)/sizeof(names[0]);
    for(int i=0;i<arrSize;i++){
        cout<<"Enter value "<<i+1<<":";
        cin>>names[i];
    }
    cout<<"-------------------------------------\n";
    for(int i=0;i<arrSize;i++){
        cout<<"Value "<< i+1 << ": "<<names[i]<<"\n";
    }
    cout<<"-------------------------------------\n";
}