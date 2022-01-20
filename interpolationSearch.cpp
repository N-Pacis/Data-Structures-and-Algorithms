#include <iostream>

using namespace std;

int interporlationSearch(int* arr, int n, int key){
    int lo,hi;
    lo = 0;
    hi = n-1;
    for(int i = lo;i<hi;i++){
        int pos = lo + (key - arr[lo]) *(hi-lo) / (arr[hi]-arr[lo]);
        if(key==arr[pos]){
            return pos;
        }
        else if(arr[pos]>key){
            hi = pos -1;
        }
        else{
            lo=pos+1;
        }
    }
    return -1;
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<interporlationSearch(arr,n,2)<<endl;
}