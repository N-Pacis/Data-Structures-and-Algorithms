#include <iostream>

using namespace std;

struct Node{
    public:
        Node* previous;
        int data;
        Node* next;
        Node* prev;
    public:
        Node(int data){
            this->prev = NULL;
            this->data = data;
            this->next = NULL;
        }
};

struct Doubly{
    public:
        Node* head;
    public:
        Node* addBefore(int data){
            Node* newNode = new Node(data);
            if(head == NULL){
                head = newNode;
                return newNode;
            }
            head->prev = newNode;
            newNode->next = head;
            head = newNode;
            return newNode;
        }
        Node* addToEnd(int data){
            Node *newNode = new Node(data);
            if(head == NULL){
                head = newNode;
                return newNode;
            }
            Node* current = head;
            while(current->next != NULL){
                current = current->next;
            }
            current->next = newNode;
            newNode->prev = current;
        }
        void printFromFront(){
            if(head == NULL){
                cout<< "Empty list"<<endl;
                return ;
            }
            Node* currentHead = head;
            while(currentHead != NULL){
                cout<<currentHead->data<<endl;
                currentHead = currentHead->next;
            }
        }
};

int main(){
    Doubly doubly;
    doubly.addBefore(2);
    doubly.addBefore(12);
    doubly.addBefore(3);
    doubly.addBefore(10);
    doubly.addBefore(6);

    doubly.printFromFront();

    doubly.addToEnd(2);
    doubly.addToEnd(39);
    doubly.addToEnd(10);
    doubly.addToEnd(5); 
}