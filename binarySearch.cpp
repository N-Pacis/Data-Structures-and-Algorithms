#include <iostream>

using namespace std;

int binarySearch(int* arr, int n, int key){
    int start,end;
    start = 0;
    end = n-1;
    for(int i = start;i<end;i++){
        int mid=(start+end)/2;
        if(key==arr[mid]){
            return mid;
        }
        else if(arr[mid]>key){
            end = mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return -1;
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<binarySearch(arr,n,6)<<endl;
}