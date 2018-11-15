#include<iostream>

using namespace std;

struct node
{
    int data;
    node *left;
    node *right;
}*root=NULL;


class BST
{
public:
    void insert(node *,node *);
    void inorder1(node *);
    void preorder(node *);
    void postorder(node *);
    BST()
    {
        root=NULL;
    }

};
void BST:: insert(node *tree, node *newnode1)
{
    if(root==NULL)
    {
        root=new(struct node);
        root->data=newnode1->data;
        root->left=NULL;
        root->right=NULL;
        cout<<"root node added";
        return;
    }
    if(tree->data>newnode1->data)
    {
        if(tree->left!=NULL)
        {
            insert(tree->left,newnode1);
        }
        else
        {
            tree->left=newnode1;
            tree->left->left=NULL;
            tree->left->right=NULL;
            cout<<"node added to left";
            return;
        }
    }
    else
    {
        if(tree->right!=NULL)
        {
            insert(tree->right,newnode1);
        }
        else
        {
            tree->right=newnode1;
            tree->right->left=NULL;
            tree->right->right=NULL;
            cout<<"node added to right";
        }
    }

}

void BST::inorder1(node *t)
{
    if(t==NULL)
    {
        cout<<"tree empty";
    }
    if(t->left)
    {
        inorder1(t->left);
    }
    cout<<t->data;
    if(t->right)
    {
        inorder1(t->right);
    }
}
void BST::preorder(node *t)
{
    if(t==NULL)
    {
        cout<<"tree empty";
    }
    cout<<t->data;
    if(t->left)
    {
        preorder(t->left);
    }
    if(t->right)
    {
        preorder(t->right);
    }
}
void BST::postorder(node *t)
{
    if(t==NULL)
    {
        cout<<"tree empty";
    }
    if(t->left)
    {
        postorder(t->left);
    }
    if(t->right)
    {
        postorder(t->right);
    }
    cout<<t->data;
}
main()
{
BST bst;
int choice;
struct node *temp;
cout<<"enter 1 to insert";
cin>>choice;
while(choice!=0)
{
    switch(choice)
    {
    case 1:
        temp=new(struct node);
        cout<<"enter the value of node";
        cin>>temp->data;
        bst.insert(root,temp);
        break;
    case 2:
        cout<<"inorder1 Traversal of BST:"<<endl;
            bst.inorder1(root);
            cout<<endl;
            break;
    case 3:
        bst.preorder(root);
        cout<<endl;
        break;
    case 4:
        bst.postorder(root);
        cout<<endl;
        break;
    }
    cout<<endl<<"enter 1 to insert 2 for inorder1 3 for preorder 4 for postorder";
    cin>>choice;
}
}









