#include<iostream>
using namespace std;
int main()
{
int a[20],n,i,m,position,ele,ch,flag=0;
cout<<"enter the size of array: ";
cin>>n;
cout<<"enter the elements of array";
for(i=0;i<n;i++)
{
cin>>a[i];
}
cout<<"Enter choice:1 for insertion 2 for deletion 3 for searching 4 for display"<<endl;
cin>>ch;
while(ch!=0)
{
    switch(ch)
    {
    case 1:
        cout<<"Enter the position and element you want to insert\n";
        cin>>position>>ele;
        m=n-position-1;
        for(i=n;i>=m;i--)
        {
            a[i+1]=a[i];
        }
        a[position]=ele;
        n=n+1;
        break;
    case 2:
        cout<<"Enter the position of element you want to delete\n";
        cin>>position;
        for(i=position;i<n;i++)
        {
            a[i]=a[i+1];
        }
        n=n-1;
        break;
    case 3:
        flag=0;
        cout<<"\nEnter the element to search: ";
        cin>>ele;
        for(i=0;i<n;i++)
        {
            if(a[i]==ele)
            {
                cout<<"\nposition is: "<<i+1;
                flag=1;
                break;
            }
        }
        if(flag==0)
            cout<<"\nElement not found";
        break;
    case 4:
        for(i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
        break;
    }
    cout<<"\nEnter choice again: ";
    cin>>ch;
}
}

