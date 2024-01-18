#include<iostream>
using namespace std;
int main()
{
    int n,i,key;
    int arr[100];
    int start=0;
    cout<<"enter the number of elements: ";
    cin>>n;
    int end=n-1;
    cout<<"enter the elements in decreasing order: ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the key: ";
    cin>>key;
    while(start<=end)
    {
        int mid=(start+end)/2;
        if(arr[mid]==key){
            cout<<mid;
            break;
        }
        else if(arr[mid]<key)
         {
            end=mid-1;
         }
         else{
            start=mid+1;
         }
    }
}