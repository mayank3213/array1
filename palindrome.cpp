#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int num,a;
    cout<<"enter a number:";
    cin>>num;
    int temp=num;
    int sum=0;
    while(num>0)
    {
        a=num%10;
        sum=sum*10+a;
        num=num/10;
    }
    if(sum==temp){
    cout<<"palindrome"<<endl;
    }
    else
    {
    cout<<"not palindrome"<<endl;
    }
    return 0;
}