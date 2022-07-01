// Binary Search Tree operations in C++
#include <iostream>
using namespace std;
struct node {
  int data;
  struct node *left, *right;
};
struct node *newNode(int item) {
  struct node *temp = (struct node *)malloc(sizeof(struct node));
  temp->data = item;
  temp->left = temp->right = NULL;
  return temp;
}
void inorder(struct node *root) {
  if (root != NULL) {
    inorder(root->left);
    cout << root->data << " -> ";
    inorder(root->right);
  }
}
struct node *addNode(struct node *node, int data) {
  if (node == NULL) return newNode(data);
  if (data < node->data)
    node->left = addNode(node->left, data);
  else if(data > node->data)
    node->right = addNode(node->right, data);
  return node;
}
int main() {
  struct node *root = NULL;
  root = addNode(root, 10);
  root = addNode(root, 5);
  root = addNode(root, 100);
  root = addNode(root, 40);
  root = addNode(root, 2);
  root = addNode(root, 3);
  root = addNode(root, 7);
  root = addNode(root, 4);
  root = addNode(root, 8);
  root = addNode(root, 9);
  root = addNode(root, 70);
  root = addNode(root, 200);
  root = addNode(root, 200);
  inorder(root);
}