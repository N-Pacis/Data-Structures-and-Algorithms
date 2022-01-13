#include <iostream>

using namespace std;

int checkArrayCentralization(int arr[],int size){
    if(size % 2 == 0 || size < 3){
        return 0;
    }
    int middleIndex = (size - 1) / 2;
    int middleEl = arr[(size-1)/2];

    for(int j=0;j<=middleIndex;j++){
        if(j < middleIndex ){
            if(arr[j] <= middleEl){
                return 0;
            }
        }
        else{
            if(middleIndex != size){
                middleIndex = size;
            }
        }
    }
    return 1;
}

int main(){
    int arr[] = {1, 2, 1, 4, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int centralized = checkArrayCentralization(arr,size);
    if(centralized == 0){
        cout<<"Not centralized";
    }
    else{
        cout<<"Centralized";
    }
}