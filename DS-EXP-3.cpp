#include<iostream>

using namespace std;
int main()
{
int ar[20],n,i,j;
int el,flag=0,temp;

int mid,min,max;

cout<<"enter the size";
cin>>n;

cout<<"enter the elements ";
for(i=0;i<n;i++)
{
cin>>ar[i];
}
cout<<"entered array is"<<endl;
for(i=0;i<n;i++)
{
    cout<<ar[i]<<" ";
}
cout<<endl;
for(i=0;i<n;i++)
{
    for(j=0;j<n-1;j++)
    {
        if(ar[j]>ar[j+1])
        {
            temp=ar[j];
            ar[j]=ar[j+1];
            ar[j+1]=temp;
        }
    }
}
cout<<"sorted answeris"<<endl;
for(i=0;i<n;i++)
{
    cout<<ar[i]<<" ";
}
cout<<endl;
cout<<"enter element to search: ";
cin>>el;
min=0;
max=n-1;
mid=(min+max)/2;
if(min<max)
{
    for(i=0;i<n;i++)
    {
        if(ar[mid]==el)
        {
            cout<<"Position of "<<el<<" is: "<<mid+1;
            flag=1;
            break;
        }
        else if(ar[mid]>el)
        {
            max=mid-1;
        }
        else if(ar[mid]<el)
        {
            min=mid+1;
        }
        mid=(min+max)/2;
    }
}
if(flag==0)
    {
        cout<<"element not present";
    }
return 0;
}
