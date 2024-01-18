#include<iostream>
using namespace std;
int main()
{
    int arr[]={3,6,5,8,1};
    int i;
    int small=arr[0];
    for(i=0;i<5;i++)
    {
        if(small>arr[i])
        small=arr[i];
    }
    int second=arr[0];
    for(i=0;i<5;i++)
    {
        if(small!=arr[i])
        {
            if(second>arr[i])
            second=arr[i];
        }
    }
    cout<<second;
}