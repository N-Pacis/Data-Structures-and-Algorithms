#include <iostream>

using namespace std;

bool isFibonnaci(int n){
    int n1 = 1;
    int n2 = 1;
    int n3,i;
    if(n == 1){
        return true;
    }
    for(i=2;i<=n;i++){
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        if(n3 == n){
            return true;
        }
    }
    return false; 
}

int main(){
    int n = 13;
    if(isFibonnaci(n)){
        cout<<"The number is fibonnaci"<<endl;
    }
    else{
        cout<<"The number is not fibonnaci"<<endl;
    }
    return 0;
}