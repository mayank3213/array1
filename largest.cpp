#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,4,3,8,5};
    int i,temp=arr[0];
    for(i=0;i<5;i++)
    {
        if(temp<arr[i])
          temp=arr[i];
    }
    cout<<temp;
}