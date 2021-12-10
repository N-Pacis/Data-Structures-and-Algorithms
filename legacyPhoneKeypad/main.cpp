#include <iostream>
#include <bits/stdc++.h>
#include <sstream>


using namespace std;

string convertNumberToWord(char num){
    string numericalWord = "";
    switch (num)
    {
    case 'z':
        numericalWord = "pace";
        break;
    case '1':
        numericalWord = "one";
        break;
    case '2':
        numericalWord = "two";
        break;
    case '3':
        numericalWord = "hree";
        break;
    case '4':
        numericalWord = "four";
        break;
    case '5':
        numericalWord = "ive";
        break;
    case '6':
        numericalWord = "six";
        break;
    case '7':
        numericalWord = "even";
        break;
    case '8':
        numericalWord = "ght";
        break;
    case '9':
        numericalWord = "nine";
        break;
    case '0':
        numericalWord = "zero";
        break;
    default:
        break;
    }
    return numericalWord;
}

int convertWordToNumber(char word){
    int numberWord;
    switch (word)
    {
    case 'z':
        numberWord = 0;
        break;
    case 'p':
        numberWord = 9;
        break;
    case 'o':
        numberWord = 1;
        break;
    case 't':
        numberWord = 1;
        break;
    case 'h':
        numberWord = 2;
        break;
    case 'f':
        numberWord = 3;
        break;
    case 'i':
        numberWord = 4;
        break;
    case 's':
        numberWord = 5;
        break;
    case 'e':
        numberWord = 6;
        break;
    case 'g':
        numberWord = 7;
        break;
    case 'n':
        numberWord = 8;
        break;
    default:
        break;
    }
    return numberWord;
}

void convertToMessage(string s)
{
    char keypad[100][100] = {{'0','+','!',':','<','>','\"','|','{','}',';','\\',',','/','?'},{'1','a','b','c'},{'2','d','e','f'},{'3','g','h','i'},{'4','j','k','l'},{'5','m','n','o'},{'6','p','q','r'},{'7','s','t','u'},{'8','v','w','x'},{'9','y','z',','},{' '}};

    stringstream ss(s);
    string word;
    while (ss >> word) {
        string words;
        if(word[0] == '0' && word[1] == '1'){
            words = convertNumberToWord('z');
        }
        else{
            words = convertNumberToWord(word[0]);
        }

        int wordInNumber = convertWordToNumber(words[0]);
        if(wordInNumber == 0){
            cout<<keypad[wordInNumber][word.size() - 1];
        }
        else if(wordInNumber == 9){
            cout<<keypad[wordInNumber + 1][0];
        }
        else{
            cout<<keypad[wordInNumber + 1][word.size() - 1];
        }
    }
}

int main(){


    string input;
    cout<<"Enter your input separate with space to write the next character"<<endl;
    getline(cin,input);

    convertToMessage(input);
    cout << endl;

    //Output of '3 333 222 4444 4444 555 01 888 5555 6666 4444 22 000' will be '3helln world!'
}
