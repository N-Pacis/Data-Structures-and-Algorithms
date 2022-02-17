#include <iostream>

using namespace std;

int *sort(int *arr,int size){
    for(int i=0;i<size - 1;i++){
        for(int j=i+1;j<size;j++){
            int temp;
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    return arr;
}

bool isTrippleArray(int *arr, int size){
    arr = sort(arr,size);
    bool isTripple = false;
    for(int i=0;i<size;i++){
        cout<<"iteration "<<i<<endl;
        if(arr[i] == arr[i + 2] && arr[i] != arr[i+3]){
            isTripple = true;
            i = i+2;
        }
        else{
            return false;
        }
    }
    return isTripple;
}

int main(){
    int arr[] =  {3, 1, 2, 1, 3, 1, 3, 2, 2};
    int size = sizeof(arr)/sizeof(arr[0]);
    if(isTrippleArray(arr,size)){
        cout << "The provided array is tripple array"<<endl;
    }
    else{
        cout<<"The provided array is not a tripple array"<<endl;
    }
}