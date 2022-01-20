#include <stdio.h>

using namespace std;

int pointOfEquilibrium(int* arr,int n){
    int currentElement = 1;
    for(int i=1;i<n;i++){
        int leftSum,rightSum;
        if(currentElement > 0 && arr[currentElement - 1]){
            leftSum += arr[currentElement - 1];            
        }
    }
}   