#include <iostream>

using namespace std;

class Sorting{
    private:
        int temp;
        int key;
        int p;
        int n ;
    public:
        int * sortArrayAsc(int n , int *numbers){
            for(int i=0;i<n - 1;i++){
                for(int j = i+1;j<n;j++){
                    if(*(numbers+i) > *(numbers + j)){
                        temp = *(numbers+i);
                        *(numbers+i) = *(numbers+j);
                        *(numbers+j) = temp;
                    }
                }
            }
            return numbers;           
        }
        
        int * insertionSortAsc(int n,int *arr){
            for(int i = 1;i<n;i++){
                key = arr[i];
                p = i - 1;
                for(;p>=0&&arr[p]>key;p--){
                    arr[p+1] = arr[p];
                }
                arr[p+1] = key;
            }
            return arr;
        }

        int * selectionSortAsc(int n, int *arr){
            for(int i=0;i<n-1;i++){
                int min_index = i;
                for(int j=i+1;j<n;j++){
                    if(arr[j] < arr[min_index]){
                        min_index = j;
                    }
                }
                if(arr[i] != arr[min_index]){
                    temp = arr[i];
                    arr[i] = arr[min_index];
                    arr[min_index] = temp;
                }
                cout<<(i+1)<<" step: ";
                output(n,arr);
                cout<<endl;
            }
            return arr;
        }

        int output(int size,int outputArr[]){
            cout<<"Output: [";
            for(int i=0;i<size;i++){
                if(i != size -1){
                    cout<<*(outputArr + i)<<", ";
                }
                else{
                    cout<<*(outputArr + i);
                }
            }
        cout<<"]";        
        }
};

int main(){
    int n;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter number "<<(i+1)<<endl;
        cin>>arr[i];
    }
    cout<<"----------------------------------------"<<endl;
    cout<<"Input: ";
    cout<<"[";
    for(int i=0;i<n;i++){
        if(i != n -1){
            cout<<arr[i]<<", ";
        }
        else{
            cout<<arr[i];
        }
    }
    cout<<"]"<<endl;
    cout<<endl;
    Sorting sort;
    int *sorted = sort.selectionSortAsc(n,arr);
    sort.output(n,sorted);
    return 0;
}