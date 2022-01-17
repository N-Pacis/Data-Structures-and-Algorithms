#include <iostream>
#include <string.h>
using namespace std;

char* extractArrayElements(char* arr,  int startIndex, int length){
    if(arr==NULL) return NULL;
    int n = strlen(arr);
    if(startIndex<0 || length > n || startIndex+length>n || startIndex >= n || length < 0 ){
        cout<<"NULL"<<endl;
        return NULL;
    }

    char* extractedChar = new char[length];
    if(length == 0){
        cout<<"Empty array"<<endl;
        return extractedChar = {};
    }
    int j=0;
    for(int i=startIndex;i<(startIndex+length);i++){
        extractedChar[j] = arr[i];
        j++;
    }
    return extractedChar;
}

int main(){
    static char characters[] = {'a','b','c'};
    int len = 3;
    char* extractedCharacters = extractArrayElements(characters,0,len);
    for(int i=0;i<len;i++){
        cout<<"Element:" <<extractedCharacters[i]<<endl;
    }
}
