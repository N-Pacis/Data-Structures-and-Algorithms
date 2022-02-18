#include <iostream>

using namespace std;

int queue[100],n=100,front=-1,rear=-1;

void enqueue(){
    int val;
    if(rear == n - 1 ){
        cout <<" Queue Overflow";
    }
    else{
        if(front == -1) front = 0;
        cout<< "Provide the element to be inserted"<<endl;
        cin>>val;
        rear++;
        queue[rear] = val; 
    }
}
void dequeue(){
    if(front == -1 || front > rear){
        cout<< "Queue underflow"<<endl;
        return;
    }
    front++;
}

void readFront(){
    if( front== -1){
        cout<<"Queue underflow"<<endl;
        return;
    }
    cout<<"The element at the top is: "<<queue[front]<<endl;
}

void display(){
    if(front == -1){
        cout<<"Queue is empty"<<endl;
    }
    else{
        for(int i=front;i<= rear;i++){
            cout<<queue[i]<<endl;
        }
    }
}

int main(){

}