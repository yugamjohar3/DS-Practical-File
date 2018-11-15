#include<iostream>
using namespace std;

int amount[10][10],i,j,k,n,qu[10]
int front,rare,v,visit[10],visited[10];
int main()
{
    int m;
    cout<<"enter no of vertices:";
    cin>>n;
    cout<<"enter no of edges:";
    cin>>m;
    cout<<"edges are";
    for(k=1; k<=m; k++)
    {
        cin>>i>>j;
        amount[i][j]=1;
    }
    cout<<"enter initial vertex ";
    cin>>v;
    cout<<"visitied vertices are";
    cout<<v<<" ";
    visited[v]=1;
    k=1;
    while(k<n)
    {
        for(j=1; j<=n; j++)
            if(amount[v][j]!=0 && visited[j]!=1 && visit[j]!=1)
            {
                visit[j]=1;
                qu[rare++]=j;
            }
        v=qu[front++];
        cout<<v<<" ";
        k++;
        visit[v]=0;
        visited[v]=1;
    }
    return 0;
}
