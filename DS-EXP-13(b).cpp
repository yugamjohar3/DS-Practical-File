#include<iostream>
using namespace std;

int amount[10][10],i,j,k,n,stk[10];
int top,v,visit[10],visited[10];
int main()
{
    int m;
    cout<<"enter no of vertices:";
    cin>>n;
    cout<<"enter no of edges:";
    cin>>m;
    cout <<"edges are";
    for(k=1; k<=m; k++)
    {
        cin >>i>>j;
        amount[i][j]=1;
    }
    cout<<"Enter initial vertex to traverse from:";
    cin>>v;
    cout<<"Dfs answer";
    cout<<v<<" ";
    visited[v]=1;
    k=1;
    while(k<n)
    {
        for(j=n; j>=1; j--)
            if(amount[v][j]!=0 && visited[j]!=1 && visit[j]!=1)
            {
                visit[j]=1;
                stk[top]=j;
                top++;
            }
        v=stk[--top];
        cout<<v << " ";
        k++;
        visit[v]=0;
        visited[v]=1;
}
    return 0;
}
