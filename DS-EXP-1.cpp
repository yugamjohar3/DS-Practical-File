#include<iostream>

using namespace std;

main()
{
int ar[20],n,i;
int m,pos,ele,ch,flag=0;
cout<<"enter your size";
cin>>n;
cout<<"enter rhe elements"<<endl;
for(i=0;i<n;i++)
{
cin>>ar[i];
}
cout<<"Enter 1 to insert 2 to delete 3 to search 4 to display"<<endl;
cin>>ch;
while(ch!=0)
{
    switch(ch)
    {
    case 1:
        cout<<"Enter the pos at which insert"<<endl;
        cin>>pos>>ele;
        cout<<"enter element  to insert"<<endl;
        cin>>ele;
        m=n-pos-1;

        for(i=n;i>=m;i--)
        {
            ar[i+1]=ar[i];
        }

        ar[pos]=ele;
        n=n+1;
        break;
    case 2:
        cout<<"Enter the pos of element to delete"<<endl;
        cin>>pos;
        for(i=pos;i<n;i++)
        {
            ar[i]=ar[i+1];
        }
        n=n-1;

        break;

    case 3:
        flag=0;
        cout<<"Enter the element to search: ";
        cin>>ele;
        for(i=0;i<n;i++)
        {
            if(ar[i]==ele)
            {
                cout<<"the pos is: "<<i+1;
                flag=1;
                break;
            }
        }
        if(flag==0)
            cout<<"no element found";
        break;
    case 4:
        for(i=0;i<n;i++)
        {
            cout<<ar[i]<<" ";
        }
        cout<<endl;
        break;
    }
    cout<<"Enter choice";
    cin>>ch;
}
}

