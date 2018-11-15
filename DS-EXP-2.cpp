#include<iostream>

using namespace std;

int main()
{
int ar[20],n,i,ele,temp=0;

cout<<"enter the size ";

cin>>n;
for(i=0;i<n;i++)
{
cin>>array[i];
}
for(i=0;i<n;i++)
{
    cout<<array[i]<<" ";
}
cout<<endl;
cout<<"Enter element to search: ";

cin>>ele;
for(i=0;i<n;i++)
{
    if(array[i]==ele)
    {
        cout<<"position of the"<<ele<<" is: "<<i+1;
        temp=1;
        break;
    }
}
if(temp==0)
{
    cout<<"no element found";
}
return 0;
}
