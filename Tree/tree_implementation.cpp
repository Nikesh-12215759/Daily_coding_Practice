#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;
    Node(int val)
    {
        data=val;
        left=right=NULL;
    }
};
void preOrder(Node* root)
{
    if(root!=NULL)
    {
    preOrder(root->left);
    cout<<root->data<<" ";
    preOrder(root->right);
    }
    
}
void inOrder(Node* root)
{
    if(root!=NULL)
    {
    
    cout<<root->data<<" ";
    inOrder(root->left);
    inOrder(root->right);
    }
    
}
void postOrder(Node* root)
{
    if(root!=NULL)
    {
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
    }
    
}
int main()
{
    Node* root=new Node(6);
    root->left=new Node(5);
    root->right=new Node(7);
    root->left->left=new Node(4);
    root->right->right=new Node(8);
    
    cout<<"preorder traversal: ";
    preOrder(root);
    cout<<endl;
    cout<<"inOrder traversal: ";
    inOrder(root);
    cout<<endl;
    cout<<"postOrder traversal: ";
    postOrder(root);
    
    return 0;
}