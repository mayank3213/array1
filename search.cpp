#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5},i;
    int num,result=-1;
    cout<<"enter a number to search: ";
    cin>>num;
    for(i=0;i<5;i++)
    {
        if(arr[i]==num)
        {
        result=i;
        break;
        }
    }
    cout<<result;
}
