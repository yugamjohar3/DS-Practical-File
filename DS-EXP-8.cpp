#include<iostream>
using namespace std;
void insertionsort(int ar[],int n)
{
    int i,j,r,flag,w;
    for(i=0;i<n;i++)
    {
        w=ar[i];
        j=i;
        while(ar[j-1]>w && j>0)
        {
            ar[j]=ar[j-1];
            j--;
        }
        ar[j]=w;
    }
}

int main()
{
    int i,ar[20],n,item;
    cout<<"Enter size ";
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

    cout<<"Enter new value insert ";
    cin>>item;
     i = n-1;
     while(item<ar[i] && i>=0)
     {
           ar[i+1]=ar[i];
           i--;
     }
     ar[i+1]=item;
     n++;
     cout<<"After insertion array is";
      for(i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }

}
