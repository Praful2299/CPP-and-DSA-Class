//WAP TO FIND A HEIGHT OF A TREE

   #include<iostream>
using namespace std;

int count;
class node{
public:
    int data;
    class node *left ,*right;

    node (int d){
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

 if(root->left==NULL && root->right==NULL)
 {
   count++;
 }
}

int height(node *root)
{
    if(root==NULL)
    {
        return 0;
    }
    int left=height(root->left);
    int right=height(root->right);
    int result=max(left,right)+1;
    return result;
}


int main()
{
    node *root=new node(10);
    root->left=new node(2);
    root->right=new node(5);
    root->left->left=new node(1);
    root->right->right=new node(15);
    root->left->right=new node(23);

    preorder(root);
    cout<<"\n"<<count;
    int treeheight=height(root);
    cout<<"\n Height of tree : "<<treeheight;

}



