#include<iostream>
using namespace std;
int main()
{
    int arr[20],i;
    cout<<"enter 10 numbers:"<<endl;
    for(i=1;i<=10;i++)
    {
        cin>>arr[i];
    }
    int sum=0;
    for(i=1;i<=10;i++)
    {
        sum=sum+arr[i];
    }
    int average;
    average=sum/10;
    cout<<average;
}
