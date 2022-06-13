#include <iostream>
#include <vector>
#include <list>
#include <queue>
using namespace std;

struct Node{
    int value;
    Node* parent;
    vector<Node *> children;
};

Node * addNode(Node* parent, int value){
    Node* node = new Node();
    node->value = value;
    node->parent = parent;
    if(parent != NULL){
        parent->children.push_back(node);
    }
    return node;
}

void display(Node *root){
    list<Node *> queue;
    queue.push_back(root);

    while(!queue.empty()){
        Node* current = queue.front();
        cout<<current->value<<" -> ";
        for(auto i:current->children){
            queue.push_back(i);
        }
        queue.pop_front();
    }
}

void bsfSearch(Node* root){
    list<Node *> q;
    q.push_back(root);
    q.push_back(NULL);

    while(!q.empty()){
        Node* f = q.front();
        q.pop_front();
        if(f==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push_back(NULL);
            }
        }
        else{
            cout<<f->value<<" ";
            for(auto i:f->children){
                q.push_back(i);
            }
        }
    }
}

int main(){
    Node *root = addNode(NULL,1);
    Node *firstChild = addNode(root,2);
    Node *secondChild = addNode(root,3);
    Node *firstNode = addNode(firstChild,4);
    Node *firstSibling = addNode(firstChild,5);
    addNode(firstNode,8);
    addNode(firstNode,9);
     addNode(firstSibling,10);
    addNode(firstSibling,11);
    Node *a = addNode(secondChild,6);
    Node *s = addNode(secondChild,7);
    addNode(a,13);
    addNode(s,14);

    bsfSearch(root);
    return 0;
}