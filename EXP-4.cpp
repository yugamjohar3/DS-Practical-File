#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
struct linked_list
{
    struct node *head,*tail;
    linked_list()
    {
        head=NULL;
        tail=NULL;
    }
    void insert_begin();
    void display();
    void insert();
    void deletion();
    void searching();
};
node* createnode(int x)
{
    node *temp=new node;
    temp->data=x;
    temp->prev=NULL;
    temp->next=NULL;
    return temp;
}
void linked_list::insert_begin()
{
    int n;
    cout<<"Enter the no. of elements you want to enter: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int element;
        cin>>element;
        node *p,*ptr;
        p=createnode(element);
        if(head==NULL)
        {
            head=p;
            tail=p;
        }
        else
        {
            p->next=head;
            head->prev=p;
            head=p;
        }
    }
    tail->next=head;
    head->prev=tail;
}
void linked_list::insert()
{
    int ch,element,x;
    cout<<"\nEnter choice:\n1 for insertion in beginning\n2 for insertion at end\n3 for insertion in between\n";
    cin>>ch;
    node *p=NULL,*temp,*ptr;
    while(ch!=0)
    {
        switch(ch)
        {
        case 1:
            cout<<"Enter the element to add: ";
            cin>>element;
            p=createnode(element);
            p->next=head;
            head->prev=p;
            head=p;
            tail->next=head;
            head->prev=tail;
            break;
        case 2:
            cout<<"Enter the elementment to add: ";
            cin>>element;
            p=createnode(element);
            tail->next=p;
            p->prev=tail;
            tail=p;
            tail->next=head;
            head->prev=tail;
            break;
        case 3:
            cout<<"\nEnter an elementment you want to add: ";
            cin>>element;
            cout<<"Enter the element after you want to add: ";
            cin>>x;
            p=createnode(element);
            ptr=head;
            while(ptr->data!=x)
            {
                ptr=ptr->next;
            }
            temp=ptr->next;
            ptr->next=p;
            p->prev=ptr;
            temp->prev=p;
            p->next=temp;
            break;
        default:
            cout<<"Wrong choice\nPlease enter 1-3 else 0 to exit.";
            break;
        }
        cout<<"\nEnter choice to insert: ";
        cin>>ch;
    }
    cout<<"\nElement Inserted";
}
void linked_list::deletion()
{
    int element;
    cout<<"\nEnter an element you want to delete: ";
    cin>>element;
    node *temp,*p;
    p=head;
    if(head->data==element)
    {
        head=head->next;
        tail->next=head;
        head->prev=tail;
    }
    else if(tail->data==element)
    {
        tail=tail->prev;
        tail->next=head;
        head->prev=tail;
    }
    else
    {
        while(p->data!=element)
        {
            p=p->next;
        }
        temp=p->prev;
        temp->next=p->next;
        p->next->prev=temp;
    }
    cout<<"\nElement deleted";

}
void linked_list::searching()
{
    int element;
    cout<<"Enter element you want to search: ";
    cin>>element;
    node *p;
    p=head;
    while(p->data!=element && p->next!=head)
    {
        p=p->next;
    }
    if(p->data==element)
        cout<<"\nNode exists";
    else
        cout<<"\nNode does not exist";
}

void linked_list::display()
{
    node *ptr=head;
    if(head==NULL)
        cout<<"Linked List is empty";
    else
        while(ptr->next!=head)
        {
            cout<<ptr->data<<" ";
            ptr=ptr->next;
        }
        cout<<ptr->data;
}
int main()
{
    int ch;
    linked_list l1;
    l1.insert_begin();
    cout<<"\nEnter choice:\n1 for insertion\n2 for deletion\n3 for searching\n4 for display\n";
    cin>>ch;
    while(ch!=0)
    {
        switch(ch)
        {
        case 1:
            l1.insert();
            break;
        case 2:
            l1.deletion();
            break;
        case 3:
            l1.searching();
            break;
        case 4:
            l1.display();
            break;
        default:
            cout<<"\nWrong choice\n";
            break;
        }
        cout<<"\nEnter choice again:\n1 for insertion\n2 for deletion\n3 for searching\n4 for display\n";
        cin>>ch;
    }
}
