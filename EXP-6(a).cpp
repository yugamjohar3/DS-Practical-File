#include<iostream>
#include<string>
using namespace std;
char stk[20];
int top=-1;
int presc(char c)
{
    if(c== '^'|| c== '$')
    return 3;
    else if(c == '*' || c == '/'|| c=='%')
    return 2;
    else if(c == '+' || c == '-')
    return 1;
    else
    return -1;
}
void push(char val)
{
    top=top+1;
    stk[top]=val;
}
int pop()
{
top=top-1;
}
void infixtopostfix(string s)
{
    int l;
    l = s.length();
    push('N');
    string n;
    for(int i=0;i<l;i++)
    {
        if((s[i]>='a' && s[i]<='z')||(s[i]>='A' && s[i]<='Z'))
        {
            n=n+s[i];
        }
        else if(s[i]=='(')
        {
            push(s[i]);
        }
        else if(s[i]==')')
        {
            while(stk[top]!='N' && stk[top]!='(' )
            {
                char c = stk[top];
                pop();
                n=n+c;
            }
            if(stk[top]=='(')
            {
                pop();

            }
        }
        else
        {
            while(stk[top]!='N' && presc(s[i])<=presc(stk[top]))
            {
                char c = stk[top];
                pop();
                n=n+c;
            }
            push(s[i]);
        }
    }
    while(stk[top]!='N')
    {
        char c = stk[top];
        pop();
        n=n+c;
    }
    cout<<"the answer is "<<n;
}
int main()
{
string exp;
cout<<"enter the string";
cin>>exp;
infixtopostfix(exp);
}
