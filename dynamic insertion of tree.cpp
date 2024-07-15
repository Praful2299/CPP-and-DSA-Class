   #include<iostream>
using namespace std;

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

node *create(node *root){
    int X;
    cout<<"Enter Value \n";
    cin>>X;

    root=new node(X);

    if(X==-10)
    {
        return NULL;
    }
    cout<<"Enter value at left of "<<X<<"\n";
    root->left=create(root->left);

    cout<<"Enter value at right of "<<X<<"\n";
    root->right=create(root->right);

    return root;
}

void preorder(node *root){
 if(root==NULL)
 {
     return;
 }
 cout<<root->data<<", ";
 preorder(root->left);
 preorder(root->right);
}

int main()
{
    node *root=NULL;
    root=create(root);
    cout<<endl;
    preorder(root);
}

//WAP TO COUNT THE LEAF node
//WAP TI CREATE A BST
