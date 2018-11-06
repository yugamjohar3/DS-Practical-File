#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};

struct linked_list
{
    node *front,*rear;
    linked_list()
    {
        front=NULL;
        rear=NULL;
    }
    void insert_begin();
    void display();
    node* createnode(int);
    void delete1();
};
node* linked_list::createnode(int x)
{
    node *temp=new node;
    temp->data=x;
    temp->next=NULL;
    return temp;
}
void linked_list::insert_begin()
{
    int ele;
    cin>>ele;
    node *p,*ptr;
    p=createnode(ele);
    if(front==NULL)
    {
        front=p;
        rear=p;
    }
    else
    {
        rear->next=p;
        rear=p;
    }
}
void linked_list::display()
{
    rear->next=front;
    node *temp=front;
    if(front==NULL)
    {
        cout<<"Underflow";
        cout<<"\nQueue is empty";
    }
    else
    {
        while(temp->next!=front)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<temp->data;
    }
}
void linked_list::delete1()
{
    if(front==rear)
    {
        cout<<"Deleted element is: "<<front->data<<endl;
        front=NULL;
    }
    else if(front==NULL)
    {
        cout<<"Underflow";
        cout<<"\nQueue is empty";
    }
    else
    {
        cout<<"element Deleted is: "<<front->data<<endl;
        node* temp=front;
        front=front->next;
        delete temp;
    }
}
int main()
{
    int ch,n,count=0;
    linked_list l1;
    cout<<"Enter the size of queue ";
    cin>>n;
    cout<<"\nEnter choice 1 to Insert 2 to Display 3 to Delete\n";
    cin>>ch;
    while(ch)
    {
        if(ch==1 )
        {
            if(count==n)
            {
                cout<<"Overflow";
            }
            else
            {
                l1.insert_begin();
                count++;
            }
        }
        else if(ch==2)
        {
            l1.display();
        }
        else if(ch==3)
        {
            l1.delete1();
            count--;
        }
        cout<<"\nEnter choice 1 to Insert 2 to Display 3 to Delete ";
        cin>>ch;
    }
}

