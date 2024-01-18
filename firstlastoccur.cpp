#include<iostream>
using namespace std;
int main()
{
    int arr[1000];
    int n,i,j;
    cout<<"enter the size of the array: ";
    cin>>n;
    cout<<"enter the elements: ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int target;
    cout<<"enter the target: ";
    cin>>target;
    for(j=0;j<n;j++)
    {
        if(arr[j]==target)
        {
        cout<<"first position is: "<<j<<endl;
        break;
        }
    }
    for(j=n-1;j>=0;j--)
    {
        if(arr[j]==target)
        {
        cout<<"second position is: "<<j<<endl;
        break;
        }
    }

}