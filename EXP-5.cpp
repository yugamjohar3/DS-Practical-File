#include<iostream>
using namespace std;


struct node
{
    int data;
    node *ptr;
};
class stk
{

public:
    node *top=NULL;
    void push(int a)
    {
        struct node *y;
        y=new(struct node);
        y->data=a;
        if(top==NULL)
        {
        y->ptr=NULL;
        top=y;
        }
        else
        {
            y->ptr=top;
            top=y;
        }

    }
    void pop()
    {
        cout<<"Element being popped is"<<top->data<<endl;;
        top=top->ptr;
    }
    void display()
    {
        cout<<"elements are"<<endl;
        while(top!=NULL)
        {
            cout<<top->data;
            top=top->ptr;
        }
    }


};

int main()
{
    stk s1;
    int i,n,item;
    cout<<"enter size"<<endl;
    cin>>n;
    cout<<"enter elements"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>item;
        s1.push(item);
    }
    s1.pop();
    s1.display();
    return 0;
}
