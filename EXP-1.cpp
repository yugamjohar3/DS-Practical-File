#include<iostream>

using namespace std;

int main()
{
int ar[20],n,i,m,position,ele,ch,flag=0;
cout<<"enter the size of array: ";
cin>>n;
cout<<"enter the elements of array";
for(i=0;i<n;i++)
{
cin>>ar[i];
}
cout<<"Enter choice:1 for insertion 2 for deletion 3 for searching 4 for display"<<endl;
cin>>ch;
while(ch!=0)
{
    switch(ch)
    {
    case 1:
        cout<<"Enter the position and element you want to insert"<<endl;
        cin>>position>>ele;

        m=n-position-1;

        for(i=n;i>=m;i--)
        {
            ar[i+1]=ar[i];
        }

        ar[position]=ele;
        n=n+1;
        break;
    case 2:
        cout<<"Enter the position of element you want to delete"<<endl;
        cin>>position;
        for(i=position;i<n;i++)
        {
            ar[i]=ar[i+1];
        }
        n=n-1;
        break;
    case 3:
        flag=0;
        cout<<"\nEnter the element to search: ";
        cin>>ele;
        for(i=0;i<n;i++)
        {
            if(ar[i]==ele)
            {
                cout<<"\n the position is: "<<i+1;
                flag=1;
                break;
            }
        }
        if(flag==0)
            cout<<"\n  Element is not found";
        break;
    case 4:
        for(i=0;i<n;i++)
        {
            cout<<ar[i]<<" ";
        }
        cout<<endl;
        break;
    }
    cout<<"\nEnter your choice";
    cin>>ch;
}
}

