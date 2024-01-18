#include<iostream>
using namespace std;
int main()
{
    int arr[100];
    int index,n,i,j;
    cout<<"enter no. of elements: ";
    cin>>n;
    cout<<"enter elements: ";
    for(i=0;i<n;i++)
    {
    cin>>arr[i];
    }
    for(i=0;i<n-1;i++)
    {
        index=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[index])
            index=j;
        }
    swap(arr[i],arr[index]);
    }
    for(i=0;i<n;i++)
    {
    cout<<arr[i]<<" ";
    }
}
