#include <iostream>

using namespace std;

bool hasNumberZero(int *arr, int size){
    for(int i=0;i<size;i++){
        if(arr[i] == 0){
            return true;
        }
    }
    return false;
}

bool hasPrimeNumber(int * arr, int size){
    for(int i=0;i<size;i++){
        bool isPrime = true;
        if(arr[i] <= 1){
            isPrime = false;
            break;
        }
        for(int j=2;j<arr[i]/2;j++){
            if(arr[i] % j == 0){
                isPrime = false;
                break;
            }
        }
        if(isPrime){
            return true;
        }
    }
    return false;
}

bool isMeeraArray(int *arr, int size){
    bool hasZero = hasNumberZero(arr,size);
    bool hasPrime = hasPrimeNumber(arr,size);
    if((hasZero && !hasPrime) || (hasPrime && !hasZero)){
        return false;
    }
    return true;
}


int main(){
    int arr[] = {7, 6, 0,10, 1};
    int size = sizeof(arr)/sizeof(arr[0]);
    if(isMeeraArray(arr,size)){
        cout << "The array is meera array"<<endl;
    }
    else{
        cout<< "The array is not a meera array"<<endl;
    }
}