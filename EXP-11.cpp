#include<iostream>

using namespace std;

struct node
{
    int info;
    node *left;
    node *right;
}*root=NULL;


class BST
{
public:
    void insert(node *,node *);
    void inorder(node *);
    void preorder(node *);
    void postorder(node *);
    BST()
    {
        root=NULL;
    }

};
void BST:: insert(node *tree, node *newnode)
{
    if(root==NULL)
    {
        root=new(struct node);
        root->info=newnode->info;
        root->left=NULL;
        root->right=NULL;
        cout<<"root node added";
        return;
    }
    if(tree->info>newnode->info)
    {
        if(tree->left!=NULL)
        {
            insert(tree->left,newnode);
        }
        else
        {
            tree->left=newnode;
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
            insert(tree->right,newnode);
        }
        else
        {
            tree->right=newnode;
            tree->right->left=NULL;
            tree->right->right=NULL;
            cout<<"node added to right";
        }
    }

}

void BST::inorder(node *t)
{
    if(t==NULL)
    {
        cout<<"tree is empty";
    }
    if(t->left)
    {
        inorder(t->left);
    }
    cout<<t->info;
    if(t->right)
    {
        inorder(t->right);
    }
}
void BST::preorder(node *t)
{
    if(t==NULL)
    {
        cout<<"tree is empty";
    }
    cout<<t->info;
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
        cout<<"tree is empty";
    }
    if(t->left)
    {
        postorder(t->left);
    }
    if(t->right)
    {
        postorder(t->right);
    }
    cout<<t->info;
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
        cin>>temp->info;
        bst.insert(root,temp);
        break;
    case 2:
        cout<<"Inorder Traversal of BST:"<<endl;
            bst.inorder(root);
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
    cout<<endl<<"enter 1 to insert 2 for inorder 3 for preorder 4 for postorder";
    cin>>choice;
}
}









