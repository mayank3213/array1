#include<iostream>
using namespace std;
int main()
{
    int arr[]={8,6,2,1,9};
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
    int third=arr[0];
    for(i=0;i<5;i++)
    {
        if(small!=arr[i] && second!=arr[i])
        {
            if(third>arr[i])
            third=arr[i];
        }
    }
    cout<<third;
}