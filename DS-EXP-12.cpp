#include <iostream>

using namespace std;

void heap(int arr[], int n, int i)
{
    int large = i;
    int l = 2*i + 1;
    int r = 2*i + 2;
    if (l<n && arr[l]>arr[large])
    {
        large=l;
    }
    if (r<n && arr[r]>arr[large])
    {
        large=r;
    }
    if (large!=i)
    {
        swap(arr[i], arr[large]);
        heap(arr, n, large);
    }
}
void heap_sort(int arr[], int n)
{
    for(int i=(n/2-1);i>=0;i--)
    {
        heap(arr, n, i);
    }

    for (int i=n-1;i>=0;i--)
    {
        swap(arr[0],arr[i]);
        heap(arr,i,0);
    }
}

int main()
{
    int ar[20],n,i;
    cout<<"enter the size";
    cin>>n;
    cout<<"enter the array";
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    heap_sort(ar, n);
    cout<<"Sorted array is";
    for(i=0;i<n;i++)
    {
        cout<<ar[i]<< " ";
    }
}
