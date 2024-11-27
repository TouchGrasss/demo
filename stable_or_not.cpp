//selection sort
#include<iostream>
using namespace std;
int main()
{
int arr[]={2,1,7,9,5};
int chotu;
int n=sizeof(arr)/sizeof(arr[0]);
for(int i=0;i<n;i++)
{
cout<<arr[i]<<"\t";
}
cout<<"\n";
for(int i=0;i<n;i++)
{
chotu=i;
for(int j=i+1;j<n;j++)
{
if(arr[chotu]>arr[j])
{
chotu=j;
}
} 
if(chotu!=i)
{
int tmp;
tmp=arr[chotu];
arr[chotu]=arr[i];
arr[i]=tmp;
}
}
cout<<"\n after selection sort\n";
for(int i=0;i<n;i++)
{
cout<<arr[i]<<"\t";
}
}