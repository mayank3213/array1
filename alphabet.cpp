#include<iostream>
using namespace std;
int main()
{
    char arr[50];
    int i=0;
    char ch='a';
    while(i<26)
    {
        arr[i]=ch;
        i++;
        ch++;
    }
    i=0;
    while(i<26)
    {
        cout<<arr[i]<<" ";
        i++;
    }
}
