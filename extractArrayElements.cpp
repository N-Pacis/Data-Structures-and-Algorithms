#include <iostream>

using namespace std;

char* extractArrayElements(char* arr, int n, int startIndex, int length){
    char* extractedChar;
    if(startIndex>= n-1 && startIndex >= 0){
        return NULL;
    }
    int j=0;
    for(int i=startIndex;i<length;i++){
        extractedChar[j] = arr[i];
        j++;
    }
    return extractedChar;
}

int main(){
    char characters[] = {'a','b','c'};
    int size = sizeof(characters) / sizeof(characters[0]);
    char extractedCharacters = *extractArrayElements(characters,size,1,3);
    cout<<extractedCharacters;
}
