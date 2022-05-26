#include <iostream>
#include <vector>
#include <list>
using namespace std;

struct Node
{
    int value;
    Node *parent;
    vector<Node *> children;
};

Node *addNode(Node *parent, int value)
{
    Node *newNode = new Node();
    newNode->value = value;
    newNode->parent = parent;
    if (parent != NULL)
        parent->children.push_back(newNode);
    return newNode;
}

void display(Node * root){
    list <Node *> que;
    que.push_back(root);
    
    while(!que.empty()){
        Node* current = que.front();
        cout<<current->value<<" -> ";
        for(auto i:current->children){
            que.push_back(i);
        }
        que.pop_front();
    }
}

int main(){
    Node *root = addNode(NULL,4);
    Node *firstChild = addNode(root,3);
    Node *secondChild = addNode(root,5);
    Node *firstNode = addNode(root,10);
    Node *firstSibling = addNode(firstChild,7);
    Node *secondSibling = addNode(firstChild,8);
    Node *thirdSibling = addNode(secondChild,9);

    display(root);
    return 0;
}