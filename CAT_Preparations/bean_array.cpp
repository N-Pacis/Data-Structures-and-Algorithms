#include <iostream>

using namespace std;

bool containsNumber(int * arr, int size,int n){
    for(int i=0;i<size;i++){
        if(arr[i] == n){
            return true;
        }
    }
    return false;
}

bool isBeanArray(int * arr,int size){
    bool isBean = false;
    for(int i=0;i<size;i++){
        if(containsNumber(arr,size,arr[i]+1) || containsNumber(arr,size,arr[i]-1)){
            isBean = true;
        }
    }
    return isBean;
}

int main(){
    //for every n element in the array there must be an element which is n-1 or n+1
    int arr[] = {2,10,9,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    bool isBean = isBeanArray(arr,size);
    if(isBean){ 
        cout << "The array is bean array"<<endl;
    }
    else{
        cout<< "The array is not a bean array";
    }
}
