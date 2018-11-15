#include <iostream>

using namespace std;

class merge1
{
private:
    int num;
public:
  void selection(int arr[],int n)
    {
        for(int i=0;i<n-1;i++)
        {
            int min = i;
            for(int j=i+1;j<n;j++)
            {
                if(arr[j] < arr[min])
                    swap(&arr[min],&arr[j]);
            }
        }
    }

    void swap(int *x,int *y)
    {
        int temp = *x;
        *x = *y;
        *y = temp;
    }

    void merging(int a[],int p,int q,int r)
    {
        int n1,n2,x;
        n1=q-p+1;
        n2=r-q;
        x =p;
        int l[100],ri[100];
        for(int i=0;i<n1;i++)
        {
            l[i]=a[x];
            x++;
        }
        for(int j=0;j<n2;j++)
        {
            ri[j]=a[q+1];
            q++;
        }
        int i,j,k=p;
        i=j=0;
        while(i<n1 && j <n2)
        {
            if(l[i]<=ri[j])
            {
                a[k]=l[i];
                i++;
                k++;
            }
            else
            {
                a[k]=ri[j];
                j++;
                k++;
            }
        }
            if(j==n2)
            {

                while(i<n1)
            {
                a[k]=l[i];
                k++;
                i++;
            }
            }

            else if(i==n1)
              {

              while(j<n2)
            {
                a[k]=ri[j];
                k++;
                j++;
            }
              }

    }
    void ms(int a[],int p,int r)
    {
        if(p<r)
        {
         int q=(p+r)/2;
         ms(a,p,q);
         ms(a,q+1,r);
         merging(a,p,q,r);
        }
    }
};

int main()
{
    merge1 m1;
    int n1=5;
    int n2=5;
    int arr1[n1];
    int arr2[n2];
    cout<<"Enter the elements of array 1";
    for(int i=0;i<n1;i++)
    {
        cin>>arr1[i];

    }
    cout<<"Enter the elements of array 2";
    for(int i=0;i<n2;i++)
    {
        cin>>arr2[i];
    }
    m1.selection(arr1,n1);
    m1.selection(arr2,n2);
    cout<<"Array1 is ";
    for(int i=0;i<n1;i++)
    {
        cout<<arr1[i]<<" ";
    }
    cout<<"Array2 is ";
    for(int i=0;i<n2;i++)
    {
        cout<<arr2[i]<<" ";
    }
    cout<<"After merging the two arrays answer is";
    int ntotal = n1+n2;
    int marr[ntotal];
    for(int i=0;i<n1;i++)
    {
        marr[i] = arr1[i];
    }
    for(int i=0,k=n1;k<ntotal && i<n2;i++, k++)
    {
        marr[k] = arr2[i];
    }
    for(int i=0;i<ntotal;i++)
    {
        cout<<marr[i]<<" ";
    }

    m1.ms(marr,0,ntotal-1);
    cout<<"After applying merge sort";
    for(int i=0;i<ntotal;i++)
    {
        cout<<marr[i]<<" ";
    }
}
