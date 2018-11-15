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
    void deletion1();
    void search();
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
    cout<<"enter no. of elements to enter ";
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
    cout<<"Enter 1 to insert in beg 2 to insert in end 3 to insert in bw ";
    cin>>ch;
    node *p=NULL,*temp,*ptr;
    while(ch!=0)
    {
        switch(ch)
        {
        case 1:
            cout<<"Enter  element to add ";
            cin>>element;
            p=createnode(element);
            p->next=head;
            head->prev=p;
            head=p;
            tail->next=head;
            head->prev=tail;
            break;
        case 2:
            cout<<"Enter element to add ";
            cin>>element;
            p=createnode(element);
            tail->next=p;
            p->prev=tail;
            tail=p;
            tail->next=head;
            head->prev=tail;
            break;
        case 3:
            cout<<"Enter element to add ";
            cin>>element;
            cout<<"Enter element to add ";
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
            cout<<"Wrong choice.";
            break;
        }
        cout<<"Enter your choice  ";
        cin>>ch;
    }
}
void linked_list::deletion1()
{
    int element;
    cout<<"enter  element  to delete";
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
    cout<<"element deleted";

}
void linked_list::search()
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
        cout<<"Node is present";
    else
        cout<<"Node is not present";
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
    cout<<"Enter 1 to insert 2 to delete 3 to search 4 to display";
    cin>>ch;
    while(ch!=0)
    {
        switch(ch)
        {
        case 1:
            l1.insert();
            break;
        case 2:
            l1.deletion1();
            break;
        case 3:
            l1.search();
            break;
        case 4:
            l1.display();
            break;
        default:
            cout<<"\nWrong choice";
            break;
        }
        cout<<"Enter 1 to insert 2 to delete 3 to search 4 to display";
        cin>>ch;
    }
}
