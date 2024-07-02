#include<iostream>
using namespace std;

class node{
public:
    int data;
    class node *left , *right;

    node(int d)
    {
        data=d;
        left=NULL;
        right=NULL;
    }
};

void preorder(node *root){
 if(root==NULL)
 {
     return;
 }
 cout<<root->data<<", ";
 preorder(root->left);
 preorder(root->right);
}

void inorder(node *root)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data<<", ";
    inorder(root->right);
}

void postorder(node *root)
{
    if(root==NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<", ";
}

int main()
{
    node *root=new node(10);
    root->left=new node(20);
    root->right=new node(30);
    root->left->right=new node(50);
    root->left->right->left=new node(11);
    cout<<"InOrder:- ";
    inorder(root);
    cout<<endl<<"PreOrder:- ";
    preorder(root);
    cout<<endl<<"PostOrder:- ";
    postorder(root);
}
