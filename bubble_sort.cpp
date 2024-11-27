#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,4,7,3,2};
    int s=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<s;i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<"\nOutput of bubble sort\n";
    int c;
    for(int i=0;i<s;i++)
    {
        c=0;
        for(int j=0;j<s-i-1;j++)
        {
            int tmp;
            if(arr[j]>arr[j+1])
            {
                tmp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=tmp;
                c++;
            }
        }
        if(c==0)
        {
            break;
        }
    }
    for(int i=0;i<s;i++)
    {
        cout<<arr[i]<<"\t";
    }
}

    // dynamic array
    // int n;
    // cout<<"enter size of array\n";
    // cin>>n;
    // int arr[n];
    // for(int i=0;i<n;++i)
    // {
    //     cin>>arr[i];
    // }
    // cout<<"output\n";
    // for(int i=0;i<n;++i)
    // {
    //     cout<<arr[i]<<"\n";
    // }
// worst case descending  654321
// average case decend and asscend 123645
// best case asscending 12345