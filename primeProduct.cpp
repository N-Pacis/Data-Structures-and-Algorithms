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

bool isPrimeProduct(int number){
    if(isPrime(number)) return false;
    for(int i=2;i<=number/2;i++){
        if(isPrime(i) && (number/i) != 0 &&isPrime(number/i)){
            return true;
        }
    }
    return false;
}

int main(){
    int number;
    cout<<"Enter the number you want to test:"<<endl;
    cin>>number;
    if(isPrimeProduct(number)){
        cout<<"The provided number "<<number<<" is a prime product";
    }
    else{
        cout<<"The provided number "<<number<<" is not a prime product";
    }
}