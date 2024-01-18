#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5},n,temp[10];
    int j=0;
    int i=4;
    while(i!=-1)
    {
        temp[j]=arr[i];
        i--;
        j++;
    }
    for(j=0;j<5;j++)
    {
        cout<<temp[j];
    }
}