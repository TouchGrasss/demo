#include<iostream>
using namespace std;
int srt(int arr[],int low, int high)
{

    int pvt=arr[low];
    int p=low+1;
    int q=high;
    int temp;
    do
    {
        while(arr[p]<pvt)
        {
            p++;
        }
        while(arr[q]>pvt)
        {
            q--;
        }
        if(p<q)
        {
            temp=arr[p];
            arr[p]=arr[q];
            arr[q]=temp;
        }
    }while(p<q);
    {
        temp=arr[low];
        arr[low]=arr[q];
        arr[q]=temp;
        return q;
    }
}
void qs(int  arr[],int low,int high)
{
    if(low<high)
    {
        int pvt;
        pvt=srt(arr,low,high);
        qs(arr,0,pvt-1);
        qs(arr,pvt+1,high);
    }
}

void prntarr(int arr[],int s)
{
    for(int i=0;i<s;i++)
    {
        cout<<arr[i]<<"\n";
    }
}
int main()
{ 
    int arr[]={3,1,5,2,6};
    prntarr(arr,5);
    qs(arr,0,4);
    cout<<"after quick sort\n";
    prntarr(arr,5);
}

// time complexity - best n(log n)  average same as best  worst o(n square)
// space - order of n  o(1)
// inplace or not inplace - inplace
// stability - not stable (if there is duplicate value, if it changes its relevant position then it is not stable)
// approach - divide and conqure
// structure or value - both