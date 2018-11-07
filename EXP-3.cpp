#include<iostream>

using namespace std;
int main()
{
int ar[20],n,i,j,element,flag=0,temp;

int mid,min,max;

cout<<"enter the size of array: ";
cin>>n;

cout<<"enter the elements of array";
for(i=0;i<n;i++)
{
cin>>ar[i];
}
cout<<"original array is:"<<endl;
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
cout<<"Sorted array is"<<endl;
for(i=0;i<n;i++)
{
    cout<<ar[i]<<" ";
}
cout<<endl;
cout<<"\nEnter the element to search: ";
cin>>element;
min=0;
max=n-1;
mid=(min+max)/2;
if(min<max)
{
    for(i=0;i<n;i++)
    {
        if(ar[mid]==element)
        {
            cout<<"Position of "<<element<<" is: "<<mid+1;
            flag=1;
            break;
        }
        else if(ar[mid]>element)
        {
            max=mid-1;
        }
        else if(ar[mid]<element)
        {
            min=mid+1;
        }
        mid=(min+max)/2;
    }
}
if(flag==0)
    {
        cout<<"Element not found ";
    }
return 0;
}
