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
    cout<<endl;
    cout<<"smallest element is: ";
    int small=arr[0];
    for(i=0;i<n;i++)
    {
        if(small>arr[i])
        small=arr[i];
    }
    cout<<small;
}