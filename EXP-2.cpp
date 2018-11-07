#include<iostream>

using namespace std;

int main()
{
int ar[20],n,i,element,temp=0;

cout<<"Enter the size of array: ";

cin>>n;
for(i=0;i<n;i++)
{
cin>>ar[i];
}
for(i=0;i<n;i++)
{
    cout<<ar[i]<<" ";
}
cout<<endl;
cout<<"\nEnter the element to search: ";

cin>>element;
for(i=0;i<n;i++)
{
    if(ar[i]==element)
    {
        cout<<"\nPosition of "<<element<<" is: "<<i+1;
        temp=1;
        break;
    }
}
if(temp==0)
{
    cout<<"\nElement not found\n";
}
return 0;
}
