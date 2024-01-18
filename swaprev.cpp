#include<iostream>
using namespace std;
int main()
{
    int arr[10],n;
    int i;
    cout<<"enter array size: ";
    cin>>n;
    cout<<"enter elements:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    i=0;
    int j=n-1;
    while(i<j)
    {
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    for(i=0;i<n;i++)
    {
    cout<<arr[i]<<" ";
    }
}