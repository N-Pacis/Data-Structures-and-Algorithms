#include <iostream>

using namespace std;

class A{
    public: A(){
        cout<<"A is called"<<endl;
    }
    public:
        int x;
        int y;
        public:
            void setx(int xp){
                x = xp;
            }
            int readx(){
                return x;
            }
};

class B: virtual public A{
    public: B(){
        cout<<"B is called"<<endl;
    }
    public:
        void setx(int xp){
            x = xp;
        }
        int readx(){
            return x;
        }
};

class C: virtual public A{
    public: C(){
        cout<<"C is called"<<endl;
    }
    public:
        void setx(int xp){
            x = xp;
        }
        int readx(){
            return x;
        }
};

class D: public C, public B{
    public: D(){
        cout<<"D is called"<<endl;
    }
};

int main(){
    D d;
    d.C::setx(10);
    d.B::setx(20);
    d.A::setx(30);
    cout<<d.C::readx()<<endl;
    cout<<d.B::readx()<<endl;
    cout<<d.A::readx()<<endl;
    return 0;
}