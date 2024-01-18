#include<iostream>
using namespace std;
int main()
{
    int a[20],n,key;
        cin>>n;
        cin>>key;
        int result;
        int i;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        result=a[key];
        cout<<result;
}