#include<iostream>
using namespace std;
int main()
{
    int arr[100];
    int n,i,j;
    cout<<"enter the number: ";
    cin>>n;
    cout<<"enter the elements: ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=1;i<n;i++)
    {
    for(j=i;j>0;j--)
    {
        if(arr[j]<arr[j-1])
            swap(arr[j],arr[j-1]);
        else
        break;       
    }
    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" "; 
    }
}