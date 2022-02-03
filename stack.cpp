#include <iostream>

using namespace std;

const int size = 20;
int top = -1;
int stack[size];

int isFull(){
    if(top == size -1 )
        return 1;
    return 0;    
}

int isEmpty(){
    if(top == -1)
        return 1;
    return 0;
}

void push(int data){
    if(!isFull()){
        top++;
        stack[top] = data;
    }
    else{
        cout<<"Stack Overflow"<<endl;
    }
}

void pop(){
    if(!isEmpty()){
        top--;
    }
    else{
        cout<<"Stack underflow"<<endl;
    }
}

void peek(){
    if(!isEmpty())
        cout<<"The top element:"<<endl;
        cout<<stack[top]<<endl;
    cout<<"The stack is empty";  
}

void display(){
    if(!isEmpty()){
        cout<<"All elements"<<endl;
        for(int i = top; i>=0; i--){
            cout<<stack[i]<<endl;
        }
    }
    else{
        cout<<"The stack is empty"<<endl;
    }
}

int main(){
    int choice;
    while (choice !=0){
        cout<<"### SELECT ONE OF THE OPERATIONS(Pick a number) ###"<<endl;
        cout<<"1. Push"<<endl;
        cout<<"2. Pop"<<endl;
        cout<<"3. Display"<<endl;
        cout<<"4. Peek"<<endl;
        cout<<"0. Exit"<<endl;
        cin>>choice;

        switch(choice){
            case 1: 
                int number;
                cout<<"Enter the number you would like to push"<<endl;
                cin>>number;
                push(number);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                peek();
                break;
            case 0:
                exit(0);
                break;
            default:
                cout<<"Invalid choice"<<endl;                  
        }
    }
    return 0;
}