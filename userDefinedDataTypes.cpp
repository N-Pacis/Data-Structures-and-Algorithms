#include <iostream>
using namespace std;

enum Gender{MALE,FEMALE,OTHER};
struct Person{
    string names;
    int age;
    Gender gender;
};

string enumToStringConverter(Gender gender){
    if(gender == MALE){
        return "MALE";
    }
    else if(gender == FEMALE){
        return "FEMALE";
    }
    else{
        return "OTHER";
    }
}
Gender stringToEnumConverter(string gender){
    if(gender == "MALE"){
        return MALE;
    }
    else if(gender == "FEMALE"){
        return FEMALE;
    }
    else{
        return OTHER;
    }
}
int main(){
    string names;
    string gender;
    int age;
    int numPeople;

    cout<<"How many people: "<<endl;
    cin>>numPeople;
    Person people[numPeople];

    for(int i=0;i<numPeople;i++){
        cout<<"Enter names of person "<<i+1<<" :"<<endl;
        cin>>names;
        cout << endl;
        cout<<"Enter age of person "<<i+1<<" :"<<endl;
        cin>>age;
        cout << endl;
        cout<<"Enter gender of person "<<i+1<<" :"<<endl;
        cin>>gender;
        people[i].names = names;
        people[i].age = age;
        people[i].gender = stringToEnumConverter(gender);
    }

    for(int j=0;j<numPeople;j++){
        cout<<"Names of person "<<j+1<<": "<<people[j].names<<" ,age of person "<<j+1<<": "<<people[j].age<<" and gender of person "<<j+1<<": "<<enumToStringConverter(people[j].gender)<<endl;
    }
}