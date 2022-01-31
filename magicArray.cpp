#include <iostream>

using namespace std;

bool isPrime(int n){
    if(n <=1){
        return false;
    }
    for(int i=2;i<=n/2;i++){
        if(n % i == 0){
            return false;
            break;
        }
    }
    return true;

}

bool isMagicArray(int *arr, int size){
    int firstElement;
    int primeSum=0;
    if(size <= 0){
        return false;
    }
    firstElement = arr[0];
    for(int i=0;i<size;i++){
        if(isPrime(arr[i])){
            primeSum += arr[i];
        }            
    }
    if(primeSum != firstElement){
        return false;
    }
    return true;
}

int main(){
    int arr[]= {0, 6, 8, 20};
    int size = sizeof(arr)/sizeof(arr[0]);
    if(isMagicArray(arr,size)){
        cout<<"The provided array is a magic array";
    }
    else{
        cout<<"The provided array is not a magic array";
    }
}

