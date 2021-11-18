#include <iostream>
#include <string>

using namespace std;

class A{
    private:
       int x;
       int y;

       public:A(){
                cout<<"I am a constructor"<<endl;
            }
            A(int xp, int yp){
                x = xp;
                y = yp;
            }
 
       public:
           void setx(int xp){
               x = xp;
           }
           void sety(int yp){
               y = yp;
           }
           int readx(){
               return x;
           }
           int ready(){
               return y;
           }
};

int main(){
    A a;
    A a1(10,20);
    cout<<"x="<<a1.readx()<<", y="<<a1.ready()<<endl;
}