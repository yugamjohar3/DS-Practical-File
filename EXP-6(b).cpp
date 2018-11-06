#include<iostream>
#include<string.h>
using namespace std;
int stack[20];
int top=-1;
void push(int x)
{
        stack[++top] = x;
}

int pop()
{
        return stack[top--];
}
int main()
{
    char exp[20],*e;
    int num,n1,n2,n3;
cout<<"Enter the string";
cin>>exp;
e=exp;
while(*e!='\0')
{
    if(isdigit(*e))
    {
        num=*e-48;

        push(num);
    }
    else
    {
        n1=pop();
        n2=pop();
        switch(*e)
            {
            case '+':
                n3=n1+n2;
                break;
            case '-':
                n3=n1-n2;
                break;
            case '*':
                n3=n1*n2;
                break;
            case '/':
                n3=n1/n2;
                break;
            }
            push(n3);
    }
e++;

}

cout<<"the answer is "<<pop();


}
