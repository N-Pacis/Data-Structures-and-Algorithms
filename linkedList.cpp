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
            Node * temp = head;
            while(temp -> next != NULL){
                temp = temp->next;
            }
            temp -> next = newNode;
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
        void deleteNode(int position){
            if(head==NULL){
                cout<<"Empty List"<<endl;
                return;
            }
            if(position == 1){
                Node* temp = head;
                head = head->next;
                delete temp;
                return;
            }
            int size = 0;
            Node* current = head;
            while(current != NULL){
                size++;
                current = current->next;
            }
            if(size<position){
                cout<<"Invalid operation"<<endl;
                return;
            }
            current = head;
            Node* previous;
            while(position > 1){
                position--;
                previous = current;
                current = current->next; 
            }
            previous->next=current->next;
            delete current;
        }
};

int main(){
    cout <<"Hello world"<<endl;
    LinkedList list;
    int i = 0;
    while(i<5){
        list.addNewNode(i);
        i++;
    }
    list.displayNode();
    list.deleteNode(1);
    cout<<"Deleted Node"<<endl;
    list.displayNode();
}