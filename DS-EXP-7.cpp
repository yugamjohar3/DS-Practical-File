#include<iostream>
using namespace std;
struct node
{
    int info;
    struct node *link;
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
    temp->info=x;
    temp->link=NULL;
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
        rear->link=p;
        rear=p;
    }
}
void linked_list::display()
{
    rear->link=front;
    node *temp=front;
    if(front==NULL)
    {
        cout<<"Underflow conditiom";
        cout<<"and Queue is empty";
    }
    else
    {
        while(temp->link!=front)
        {
            cout<<temp->info<<" ";
            temp=temp->link;
        }
        cout<<temp->info;
    }
}
void linked_list::delete1()
{
    if(front==rear)
    {
        cout<<"Deleted element is: "<<front->info<<endl;
        front=NULL;
    }
    else if(front==NULL)
    {
        cout<<"Underflow condition";
        cout<<"and Queue is empty";
    }
    else
    {
        cout<<"element Deleted is: "<<front->info<<endl;
        node* temp=front;
        front=front->link;
        delete temp;
    }
}
int main()
{
    int ch,n,count=0;
    linked_list l1;
    cout<<"Enter the size of queue ";
    cin>>n;
    cout<<"Enter 1 to insert 2 to display 3 to delete ";
    cin>>ch;
    while(ch)
    {
        if(ch==1 )
        {
            if(count==n)
            {
                cout<<"Overflow condition";
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
        cout<<"Enter  1 to Insert 2 to Display 3 to Delete ";
        cin>>ch;
    }
}

