#include <iostream>

using namespace std;
int oddEvenDifference(int *arr,int size){
    int x = 0,y = 0;

    for(int i=0;i<size;i++){
        if(arr[i] % 2 != 0){
            x += arr[i];       
        }    
        else{
            y += arr[i];
        }
    }
    return x - y;
}

int main(){
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"Answer: "<<oddEvenDifference(arr,size);
}