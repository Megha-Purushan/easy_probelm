#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int num,original,rem,result=0,temp,n;
    cout<<"Enter a number:";
    cin>>num;
    original=num;
    temp=num;
    while(temp!=0)
    {
        temp=temp/10;
        n++;
    }
    temp=num;
    while(temp!=0)
    {
        rem=temp%10;
        result=result+pow(rem,n);
        temp=temp/10;
    }
    if(result==original)
    {
        cout<<num<<" is Armstrong";
    }
    else{
       cout<<num<<" is not Armstrong:";
    }
    return 0;
}
