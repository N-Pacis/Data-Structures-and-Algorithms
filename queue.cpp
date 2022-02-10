#include<iostream>
using namespace std;
struct Queue {
    int front, rear, capacity;
    int *queue;
    Queue(int size) {
        front=0;
        rear=0;
        capacity=size;
        queue=new int;
    }
    ~Queue(){
        delete queue;
    }
    void enqueue(int data) {
        if(rear==capacity) {
            cout<<"The queue is full."<<endl;
            return;
        }
        queue[rear]=data;
        rear++;
    }
    void display(){
        if(rear==front){
            cout<<"Queue is empty"<<endl;
            return;
        }
        for(int i=front;i<rear;i++){
            cout<<queue[i]<<", ";
        }
        cout<<""<<endl;
    }
    void dequeue(){
        if(rear==front){
            cout<<"Que is empty"<<endl;
            return;
        }
        for(int i=0;i<rear-1;i++){
            queue[i] = queue[i+1];
        }
        rear--;
    }
    int readFront(){
        if(rear==front){
            cout<<"Empty queue";
            return 1;
        }
        return queue[front];
    }
};

int main() {
    Queue t(10);
    cout<<"-- ENQUEUE --"<<endl;
    t.enqueue(50);
    t.enqueue(5);
    cout<<"-- DISPLAY --"<<endl;
    t.display();
    cout<<"-- DEQUEUE --"<<endl;
    t.dequeue();
    cout<<"--  DISPLAY --"<<endl;
    t.display();
}





