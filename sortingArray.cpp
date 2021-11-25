#include <iostream>

using namespace std;

class Sorting{
    private:
        int temp;
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
};

int main(){
    int n ;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter number "<<(i+1)<<endl;
        cin>>arr[i];
    }
    cout<<"---------------------------------------"<<endl;
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
    int * sorted = sort.sortArrayAsc(n,arr);
    
    cout<<"Output: [";
    for(int i=0;i<n;i++){
        if(i != n -1){
            cout<<*(sorted + i)<<", ";
        }
        else{
            cout<<*(sorted + i);
        }
    }
    cout<<"]";
    return 0;
}