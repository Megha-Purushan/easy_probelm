#include<iostream>

using namespace std;
int main()
{
    int a,b,temp,n1,n2;
    cout<<"Enter 2 number:";
    cin>>n1>>n2;
    a=n1;
    b=n2;
    while(b!=0)
    {
        temp=b;
        b=a%b;
        a=temp;
    }
    cout<<"gcd of"<<n1<<" and "<<n2<<" is "<<a;
    return 0;
}
