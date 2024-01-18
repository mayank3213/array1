#include<iostream>
using namespace std;
int main()
{
    int num,result,a;
    cout<<"enter a number:";
    cin>>num;
    int sum=0;
    int temp=num;
    while(num!=0)
    {
        a=num%10;
        result=a*a*a;
        sum=sum+result;
        num=num/10;
    }
    if(sum==temp)
    cout<<"armstrong number";
    else
    cout<<"not armstrong number";
}