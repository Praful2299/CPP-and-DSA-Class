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

node *bst(node *root , int v)
{
    if(root==NULL)
    {
        return new node(v);
    }
    if(v<root->data)
    {
        root->left=bst(root->left,v);
    }
    else if(v>root->data)
    {
        root->right=bst(root->right,v);
    }
}

void inorder(node *root)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data<<"\t";
    inorder(root->right);
}

int main()
{
    node *root=NULL;
    root=bst(root,5);
    root=bst(root,7);
    root=bst(root,3);
    root=bst(root,21);
    root=bst(root,4);
    inorder(root);
}
