#include<iostream>
using namespace std;
void insertionsort(int ar[],int n)
{
    int i,j,k,temp,m;
    for(i=0;i<n;i++)
    {
        m=ar[i];
        j=i;
        while(ar[j-1]>m && j>0)
        {
            ar[j]=ar[j-1];
            j--;
        }
        ar[j]=m;
    }
}

int main()
{
    int i,ar[20],n,item;;
    cout<<"Enter no of elements";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    insertionsort(ar,n);
    for(i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }

    cout<<"\nEnter new value to be inserted : ";
    cin>>item;
     i = n-1;
     while(item<ar[i] && i>=0)
     {
           ar[i+1]=ar[i];
           i--;
     }
     ar[i+1]=item;
     n++;
     cout<<"\nAfter insertion array is :\n";
      for(i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }

}
