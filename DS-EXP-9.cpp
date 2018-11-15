#include<iostream>

using namespace std;

void swap1(int* p, int* q)
{
    int t = *p;
    *p = *q;
    *q = t;
}
int partition(int ar[],int low,int high)
{
    int pivot=ar[high];
    int i=low-1;
    int j;
    for(j=low;j<high-1;j++)
    {
        if(ar[j]<=pivot)
        {
            i++;
            swap1(&ar[i], &ar[j]);
        }
    }
    swap1(&ar[i + 1], &ar[high]);
    return (i + 1);
}
void quicksort(int ar[],int low,int high)
{
    if(low<high)
    {
        int pi=partition(ar,low,high);

        quicksort(ar,low,pi-1);
        quicksort(ar,pi+1,high);
    }
}
main()
{
int ar[20],i,j,n;
cout<<"enter size"<<endl;
cin>>n;
cout<<"enter elements"<<endl;
for(i=0;i<n;i++)
{
    cin>>ar[i];
}
quicksort(ar,0,n-1);
cout<<"after sorting answer is"<<endl;
for(i=0;i<n;i++)
{
    cout<<ar[i];
}
}
