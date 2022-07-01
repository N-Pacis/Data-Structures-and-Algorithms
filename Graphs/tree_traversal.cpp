#include <iostream>
using namespace std;
class Node{
    public:
        int data;
        Node *left;
        Node *right;
        Node(int data){
            this->data = data;
            left = NULL;
            right = NULL;
        }
};
class BinaryTree{
    private:
      Node *root;
    public:
     BinaryTree(Node *root){
         this->root = NULL;
     }
     //adding node to the current node(root)
        Node * addNode(Node *root, int data,bool isLeft){
            Node *node = new Node(data);
            if(root == NULL){
                root = node;
                // return root;
            }
            else{
                if(data != NULL){
                    if(isLeft){
                        root->left = node;
                    }
                    else{
                        root->right = node;
                    }
                }
            }
            return node;
        }
        
        void inorderTraverse(Node *root){
        	if(root==NULL){
        		return;
			}
			inorderTraverse(root->left);
			cout<<root->data<<" ";
			inorderTraverse(root->right);
		}
		void preorderTraverse(Node *root){
        	if(root==NULL){
        		return;
			}
			cout<<root->data<<" ";
			preorderTraverse(root->left);
			preorderTraverse(root->right);
		}
		void postorderTraverse(Node *root){
        	if(root==NULL){
        		return;
			}
			postorderTraverse(root->left);
			postorderTraverse(root->right);
			cout<<root->data<<" ";
		}
};
int main(){
    BinaryTree bt(nullptr);
   	Node *root = bt.addNode(NULL, 1, true);
	Node *left = bt.addNode(root, 2, true);
	Node *right = bt.addNode(root, 7, false);
	Node *left1 = bt.addNode(left, 5, true);
	Node *right1 = bt.addNode(left, 4, false);
	bt.addNode(left1, NULL, true);
	bt.addNode(left1, 3, false);
	bt.addNode(right1, 6, true);
	
	Node *left4 = bt.addNode(right, 9, true);
	Node *right4 = bt.addNode(right, 10, false);
	bt.addNode(left4, NULL, true);
	bt.addNode(left4, 11, false);
	bt.addNode(right4, 3, true);
    bt.addNode(right4, 15, false);
    cout<<"In order Traversal"<<endl;
    bt.inorderTraverse(root);
    cout<<endl;
    cout<<"Post Order Traversal"<<endl;
    bt.postorderTraverse(root);
}