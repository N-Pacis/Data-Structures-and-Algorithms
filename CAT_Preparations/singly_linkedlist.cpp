#include <iostream>

using namespace std;

class Node{
    public:
        int data;
        Node * next;
    public:
        Node(){
            this->next = NULL;
        }
        Node(int data){
            this->data = data;
            this->next = NULL;
        }
};

class LinkedList{
    public:
        Node* head;
    public:
        LinkedList(){
            head = NULL;
        }    
        void addNewNode(int data){
            Node* newNode = new Node(data);
            if(head == NULL){
                head = newNode;
                return;
            }
            Node* temp = head;
            while(temp->next != NULL){
                temp = temp->next;
            }
            temp->next = newNode;
        }
        void displayNode(){
            if(head == NULL){
                cout<<"Empty list"<<endl;
                return;
            }
            Node* temp = head;
            while(temp != NULL){
                cout<<temp->data<<endl;
                temp = temp->next;
            }
        }
}